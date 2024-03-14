#ifdef USE_BIOS

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/cfg/global.h>

/* BIOS Header files */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Semaphore.h>
#endif /* #ifdef USE_BIOS */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/* TI-RTOS Header files */
#include <ti/drv/gpio/GPIO.h>
#include <ti/drv/gpio/soc/GPIO_soc.h>

#include <ti/board/board.h>
#include <ti/csl/csl_clec.h>

#include "GPIO_log.h"
#include "GPIO_board.h"
#include "ECG-Signal.h"
#include "fdacoefs.h"



/**********************************************************************
 ************************** Macros ************************************
 **********************************************************************/
//#define N 4012       //Size array
//#define fs 2000      //Sampling freq.

#define Threshold 6480  // Threshold for peak detection


/**********************************************************************
 ************************** Internal functions ************************
 **********************************************************************/

//ISR functions declaration:
void Board_initGPIO();
void timer0_ISR(void);  //HW interrupt function
void swi0_ISR(void);    //SW interrupt function
void IIR_Biquad();      //IIR filter (2 stages)
void digital_filter();  // Envelope detector
void peak_count();      // Save peak indexes
void time_peaks();      // Calculate the time deltas between the peaks

/**********************************************************************
 ************************** Global Variables ************************
 **********************************************************************/

//ECG_FILTER//
int idx = 0;                     // Index of the ECG_signal array
float filtered_arr[N] = {0};     // Filtered signal array after passing the envalope detector
float abs_arr[N] = {0};          // The signal after passing the full wave rectifier
float IIR_filtered_arr[N] = {0}; // The signal after passing through the IIR filter


//swi0_ISR//
float sample = 0;            // Save the ECG_signal sample
int sample_cnt = 0;          // Count until 2000 samples (1 second) and than resets

//IIR_Biquad//
float d01=0, d02=0;
float d00=0;
float xn, y0=0;
float prod1, prod2, prod3, prod4, prod5;

float d01_1=0, d02_1=0;
float d00_1=0;
float xn_1, y0_1=0;
float prod1_1, prod2_1, prod3_1, prod4_1, prod5_1;

//digital_filter//
int num = 50;                /* Constant for negative slope using in envelope detector
                                (capacitor discharge through a resistor) */

//peak_count//
float bps = 0;              // Saves the heart Beat rate in bps (beat per second)
int flag = 0;               // Manage that every peak gets one index

//time_peaks//
int peak_idx = 0;             // Saves the current peak index
int prev_peak_idx = 0;        // Saves the previous peak index
int second_prev_peak_idx = 0; // Saves the previous previous peak index
int s1_delta = 0;             // Saves the delta time value between s1 and s1 peaks
int s12_delta = 0;            // Saves the delta time value between s1 and s2 peaks
int prev_s1_delta  = 0;  // Saves the previous delta time value between s1 and s1 peaks
int prev_s12_delta = 0; // Saves the previous delta time value between s1 and s2 peaks
int peak_cnt = 0;       // Recognizing the type of peak (s1 or s2)

/*
 *  ======== main ========
 */

//
int main(void)
{
    /* Call board init functions */
    Board_initGPIO();
    GPIO_init();

    /* Start BIOS */
    BIOS_start();

    return (0);
}

/*
 *  ======== Board_initI2C ========
 */
void Board_initGPIO()
{
    Board_initCfg boardCfg;

    GPIO_v0_HwAttrs gpio_cfg;

    /* Get the default SPI init configurations */
    GPIO_socGetInitCfg(GPIO_LED0_PORT_NUM, &gpio_cfg);


    /* Setup GPIO interrupt configurations */
    GPIO_socSetBankInt(GPIO_LED0_PORT_NUM, GPIO_LED0_PIN_NUM, NULL);
    GPIO_write((USER_LED0), GPIO_PIN_VAL_LOW);

    boardCfg = BOARD_INIT_PINMUX_CONFIG |
    BOARD_INIT_MODULE_CLOCK |
    BOARD_INIT_UART_STDIO;

    Board_init(boardCfg);

}

//Task
void ECG_FILTER(UArg arg0, UArg arg1)
{
    while(1)
    {
        //Pending semaphore
        Semaphore_pend(semaphore0, BIOS_WAIT_FOREVER);  //Wait for sample
        IIR_Biquad();                                   //Filtering the sample
        filtered_arr[idx] = abs( filtered_arr[idx]);      //Absolute array's values
        abs_arr[idx] =  filtered_arr[idx];

        // Envelope detector
        if (idx > 0)
            digital_filter();

        peak_count();

        if(idx == N)  // Zeroing indexes when the array is full
        {
            idx = 0;
            peak_idx = 0;
            prev_peak_idx = 0;
            second_prev_peak_idx = 0;
            peak_cnt = 0;
        }


        else
            idx++;
    }
}

// Sampling ISR according to fs frequency (2kHz)
void timer0_ISR(void)
{
    Swi_post(swi0);     //SW interrupt post
}

// Getting the ECG_signal sample
void swi0_ISR(void)
{
    // samples ECG signal
    sample = ECG_signal[idx];
    sample_cnt ++;

    Semaphore_post(semaphore0); //post semaphore
}


//IIR biquad filter-  Eliptic IIR with 5 coeffs
void IIR_Biquad()
{
    // Clean IIR every time the buffer is fulfilled
    if (idx == 0 )
    {
        d00 = 0;
        d01 = 0;
        d02 = 0;
        d00_1 = 0;
        d01_1 = 0;
        d02_1 = 0;
    }

    // Read the input sample from the signal buffer
    xn = sample;
    y0 = 0;
    prod1 = d02*DEN[1][2];
    prod2 = d01*DEN[1][1];
    d00 = xn - prod1 - prod2;
    prod3 = d01*NUM[1][1];
    prod4 = d02*NUM[1][2];
    prod5 = d00*NUM[1][0];
    y0 = prod3+prod4+prod5;
    d02 = d01;
    d01 = d00;

    // Read the input sample after the first stage
    xn_1 = y0*NUM[0][0];
    y0_1 = 0;
    prod1_1 = d02_1*DEN[3][2];
    prod2_1 = d01_1*DEN[3][1];
    d00 = xn_1 - prod1_1 - prod2_1;
    prod3_1 = d01_1*NUM[3][1];
    prod4_1 = d02_1*NUM[3][2];
    prod5_1 = d00_1*NUM[3][0];
    y0_1 = prod3_1+prod4_1+prod5_1;
    d02_1 = d01_1;
    d01_1 = d00;

    // The signal after the IIR filter
    IIR_filtered_arr[idx] = y0_1*NUM[2][0];
    filtered_arr[idx]= IIR_filtered_arr[idx];
}

/* Create constant negative slope using in envelope detector
(capacitor discharge through a resistor) */
void digital_filter()
{
    if(filtered_arr[idx] < filtered_arr[idx - 1])
        filtered_arr[idx] = filtered_arr[idx - 1] - num;
}

// Count s1 and s2 peaks
void peak_count()
{
    // Detect rising and falling of every peak
    if (filtered_arr[idx] >= Threshold && flag == 0 )
    {
        peak_cnt++;                 // Increase the current index of the peak
        prev_peak_idx = peak_idx;   // Save the previous peak index
        peak_idx = idx;             // Update the current peak index
        flag = 1;                   // Make sure the peak is measured only once
    }
    else if (filtered_arr[idx] < Threshold)
        flag = 0;

    if (sample_cnt == 2000) //2000 counts in every second for fs = 2[kHz]
        sample_cnt = 0;     // After crossing one second, reset the counter

    time_peaks();           // Call the time measure function
}

// Calculate the delta time between two peak (s1-s1 and s1-s2)
void time_peaks()
{
    prev_s1_delta  = s1_delta;
    prev_s12_delta = s12_delta;

    if (peak_cnt % 2 && peak_cnt > 2) // Calculate the delta time for primary peaks (S1-S1)
    {
        s1_delta = peak_idx - second_prev_peak_idx; //peak_idx minus peak_idx-2
        bps = (float)(2000.0/s1_delta);             // Calculate the heart rate in beat per second format
        if (s1_delta != prev_s1_delta)
        {
          System_printf ("previous s1 peak index = %d current s1 peak index = %d\n", second_prev_peak_idx, peak_idx);
          System_printf("s1_delta = %d [0.5msec]\n", s1_delta);
          System_printf ("bps = %f bpm = %f\n", bps, bps*60);
          System_flush();
        }
    }
    else if (((peak_cnt % 2) == 0) && peak_cnt > 1) // Calculate the delta time for secondary peaks (S1-S2)
    {
        second_prev_peak_idx = prev_peak_idx; // Save the peak_idx-2 index
        s12_delta = peak_idx - prev_peak_idx; //peak_idx minus peak_idx-1
        if (s12_delta != prev_s12_delta)
        {
          System_printf ("s1 peak index = %d s2 peak index = %d\n", second_prev_peak_idx, peak_idx);
          System_printf("s12_delta = %d [0.5msec]\n", s12_delta);
          System_flush();
        }
    }
}
