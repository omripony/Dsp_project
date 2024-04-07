/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 24.1 and Signal Processing Toolbox 24.1.
 * Generated on: 07-Apr-2024 11:11:31
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II, Second-Order Sections
 * Number of Sections  : 3
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\MATLAB\R2024a\extern\include\tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   single-precision filter coefficients.
 */
#define MWSPT_NSEC 7
const int NL[MWSPT_NSEC] = { 1,3,1,3,1,3,1 };
const real32_T NUM[MWSPT_NSEC][3] = {
  {
     0.9500188828,              0,              0 
  },
  {
                1,    -1.79425323,              1 
  },
  {
     0.9500188828,              0,              0 
  },
  {
                1,   -1.769552946,              1 
  },
  {
     0.9104659557,              0,              0 
  },
  {
                1,   -1.782232881,              1 
  },
  {
                1,              0,              0 
  }
};
const int DL[MWSPT_NSEC] = { 1,3,1,3,1,3,1 };
const real32_T DEN[MWSPT_NSEC][3] = {
  {
                1,              0,              0 
  },
  {
                1,   -1.598329067,   0.8922067881 
  },
  {
                1,              0,              0 
  },
  {
                1,    -1.77628541,   0.9218989015 
  },
  {
                1,              0,              0 
  },
  {
                1,   -1.622662425,   0.8209319711 
  },
  {
                1,              0,              0 
  }
};
