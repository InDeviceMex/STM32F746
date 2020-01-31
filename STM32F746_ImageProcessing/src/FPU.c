/*
 * FPU.c
 *
 *  Created on: 25 jul. 2018
 *      Author: InDev
 */

#include "FPU.h"


__INLINE int32_t FPU_Init(void)
{
  FPU_CPACR_R=FPU_CPACR_R_CP10_FULL|FPU_CPACR_R_CP11_FULL;
  __DSB();
  __ISB();
  return FPU_CPACR_R;
}



__INLINE int32_t FPU_GetType(void)
{
  int32_t mvfr0Double,mvfr0Single;

  mvfr0Double = FPU_MVFR0->Double_precision;
  mvfr0Single = FPU_MVFR0->Single_precision;

  if        ((mvfr0Double== FPU_MVFR0_Double_precision_PRESENT) &&(mvfr0Single== FPU_MVFR0_Single_precision_PRESENT))
  {
    return 2L;           /* Double + Single precision FPU */
  }
  else if ((mvfr0Double== FPU_MVFR0_Double_precision_NOPRESENT) &&(mvfr0Single== FPU_MVFR0_Single_precision_PRESENT))
  {
    return 1L;           /* Single precision FPU */
  }
  else
  {
    return 0L;           /* No FPU */
  }
}
