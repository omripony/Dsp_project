/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.10 and Signal Processing Toolbox 8.6.
 * Generated on: 06-Jun-2023 12:49:33
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II, Second-Order Sections
 * Number of Sections  : 2
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\MATLAB\R2021a\extern\include\tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   single-precision filter coefficients.
 */
#define MWSPT_NSEC 5
const int NL_high[MWSPT_NSEC] = { 1,3,1,2,1 };
const real32_T NUM_high[MWSPT_NSEC][3] = {
  {
     0.4775786996,              0,              0 
  },
  {
                1,   -1.999883413,              1 
  },
  {
      1.778187275,              0,              0 
  },
  {
                1,             -1,              0 
  },
  {
                1,              0,              0 
  }
};
const int DL_high[MWSPT_NSEC] = { 1,3,1,2,1 };
const real32_T DEN_high[MWSPT_NSEC][3] = {
  {
                1,              0,              0 
  },
  {
                1,   -1.918898106,   0.9362214208 
  },
  {
                1,              0,              0 
  },
  {
                1,  -0.7622272372,              0 
  },
  {
                1,              0,              0 
  }
};
