//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: SLAM_emxutil.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 31-Jul-2015 14:58:50
//
#ifndef __SLAM_EMXUTIL_H__
#define __SLAM_EMXUTIL_H__

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "SLAM_types.h"

// Function Declarations
extern void b_emxInit_int32_T(emxArray_int32_T **pEmxArray, int b_numDimensions);
extern void b_emxInit_real_T(emxArray_real_T **pEmxArray, int b_numDimensions);
extern void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int
  elementSize);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int
  b_numDimensions);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int b_numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int b_numDimensions);

#endif

//
// File trailer for SLAM_emxutil.h
//
// [EOF]
//