/*
 * FPU.h
 *
 *  Created on: 25 jul. 2018
 *      Author: InDev
 */

#ifndef FPU_H_
#define FPU_H_

#include "Core.h"
#include <stdint.h>

#define FPU_BASE            ((uint32_t)0xE000E000)
#define FPU_OFFSET          ((uint32_t)0x00000D88)


typedef __IO struct
{
         uint32_t reserved     :20;
    __IO uint32_t CP10         :2;
    __IO uint32_t CP11         :2;
         uint32_t reserved1    :8;
}CPACR_TypeDef;



typedef __IO struct
{
    __IO uint32_t LSPACT        :1;
    __IO uint32_t USER          :1;
         uint32_t reserved      :1;
    __IO uint32_t THREAD        :1;
    __IO uint32_t HFRDY         :1;
    __IO uint32_t MMRDY         :1;
    __IO uint32_t BFRDY         :1;
         uint32_t reserved1     :1;
    __IO uint32_t MONRDY        :1;
         uint32_t reserved2     :21;
    __IO uint32_t LSPEN         :1;
    __IO uint32_t ASPEN         :1;
}FPCCR_TypeDef;



typedef __IO struct
{
        uint32_t reserved   	:3;
    __IO uint32_t ADDRESS    	:29;
}FPCAR_TypeDef;


typedef __IO struct
{
    __IO uint32_t IOC      		:1;
    __IO uint32_t DZC      		:1;
    __IO uint32_t OFC      		:1;
    __IO uint32_t UFC      		:1;
    __IO uint32_t IXC      		:1;
         uint32_t reserved 		:2;
    __IO uint32_t IDC      		:1;
         uint32_t reserved1		:14;
    __IO uint32_t RMODE    		:2;
    __IO uint32_t FZ       		:1;
    __IO uint32_t DN       		:1;
    __IO uint32_t AHP      		:1;
         uint32_t reserved2		:1;
    __IO uint32_t V        		:1;
    __IO uint32_t C        		:1;
    __IO uint32_t Z        		:1;
    __IO uint32_t N        		:1;
}FPSCR_TypeDef;

typedef __IO struct
{
   		 uint32_t reserved 		:22;
    __IO uint32_t RMODE    		:2;
    __IO uint32_t FZ       		:1;
    __IO uint32_t DN       		:1;
    __IO uint32_t AHP      		:1;
         uint32_t reserved1		:5;
}FPDSCR_TypeDef;


typedef __IO struct
{
    __I  uint32_t A_SIMD_registers	:4;
    __I  uint32_t Single_precision  :4;
    __I  uint32_t Double_precision	:4;
    __I  uint32_t FP_excep_trapping	:4;
    __I  uint32_t Divide      		:4;
    __I  uint32_t Square_root  		:4;
    __I  uint32_t Short_vectors		:4;
    __I  uint32_t P_rounding_modes	:4;
}MVFR0_TypeDef;

typedef __IO struct
{
    __I  uint32_t FtZ_mode			:4;
    __I  uint32_t D_NaN_mode  		:4;
    	 uint32_t reserved			:16;
    __I  uint32_t FP_HPFP	  		:4;
    __I  uint32_t FP_fused_MAC		:4;
}MVFR1_TypeDef;


typedef __IO struct
{
    union
    {
        __IO uint32_t      	CPACR;
        CPACR_TypeDef      	CPACR_Bit;
    };
    uint32_t 				reserved[106];
    union
    {
        __IO uint32_t      	FPCCR;
        FPCCR_TypeDef      	FPCCR_Bit;
    };
    union
    {
        __IO uint32_t      	FPCAR;
        FPCAR_TypeDef       FPCAR_Bit;
    };
    union
    {
        __IO uint32_t      	FPDSCR;
        FPDSCR_TypeDef     	FPDSCR_Bit;
    };
    union
    {
        __I  uint32_t      	MVFR0;
        MVFR0_TypeDef     	MVFR0_Bit;
    };
    union
    {
        __I  uint32_t      	MVFR1;
        MVFR1_TypeDef     	MVFR1_Bit;
    };
        __I  uint32_t      	MVFR2;
}FPU_TypeDef;

#define FPU            		(((FPU_TypeDef*)(FPU_BASE+ FPU_OFFSET)))

#define FPU_CPACR_OFFSET     ((uint32_t)0x0D88)
#define FPU_FPCCR_OFFSET     ((uint32_t)0x0F34)
#define FPU_FPCAR_OFFSET     ((uint32_t)0x0F38)
#define FPU_FPDSCR_OFFSET    ((uint32_t)0x0F3C)
#define FPU_MVFR0_OFFSET     ((uint32_t)0x0F40)
#define FPU_MVFR1_OFFSET     ((uint32_t)0x0F44)


/* TODO CPACR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CPACR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FPU_CPACR            (((CPACR_TypeDef*)(FPU_BASE+FPU_CPACR_OFFSET )))
#define FPU_CPACR_R          (*((__IO int32_t *)(FPU_BASE+FPU_CPACR_OFFSET)))

/*--------*/
#define FPU_CPACR_R_CP10_MASK      ((uint32_t)0x00300000)
#define FPU_CPACR_R_CP10_BIT       (20)
#define FPU_CPACR_R_CP10_DENIED    ((uint32_t)0x00000000)
#define FPU_CPACR_R_CP10_PRIVILEGE ((uint32_t)0x00100000)
#define FPU_CPACR_R_CP10_FULL      ((uint32_t)0x00300000)

#define FPU_CPACR_CP10_MASK        ((uint32_t)0x00000003)
#define FPU_CPACR_CP10_DENIED      ((uint32_t)0x00000000)
#define FPU_CPACR_CP10_PRIVILEGE   ((uint32_t)0x00000001)
#define FPU_CPACR_CP10_FULL        ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FPU_CPACR_R_CP11_MASK      ((uint32_t)0x00C00000)
#define FPU_CPACR_R_CP11_BIT       (22)
#define FPU_CPACR_R_CP11_DENIED    ((uint32_t)0x00000000)
#define FPU_CPACR_R_CP11_PRIVILEGE ((uint32_t)0x00400000)
#define FPU_CPACR_R_CP11_FULL      ((uint32_t)0x00C00000)

#define FPU_CPACR_CP11_MASK        ((uint32_t)0x00000003)
#define FPU_CPACR_CP11_DENIED      ((uint32_t)0x00000000)
#define FPU_CPACR_CP11_PRIVILEGE   ((uint32_t)0x00000001)
#define FPU_CPACR_CP11_FULL        ((uint32_t)0x00000003)
/*--------*/

/* TODO FPCCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 FPCCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FPU_FPCCR            (((FPCCR_TypeDef*)(FPU_BASE+FPU_FPCCR_OFFSET )))
#define FPU_FPCCR_R          (*((__IO int32_t *)(FPU_BASE+FPU_FPCCR_OFFSET)))




/*--------*/
#define FPU_FPCCR_R_LSPACT_MASK      ((uint32_t)0x00000001)
#define FPU_FPCCR_R_LSPACT_BIT       (0)
#define FPU_FPCCR_R_LSPACT_NOSET     ((uint32_t)0x00000000)
#define FPU_FPCCR_R_LSPACT_SET       ((uint32_t)0x00000001)

#define FPU_FPCCR_LSPACT_MASK        ((uint32_t)0x00000001)
#define FPU_FPCCR_LSPACT_NOSET       ((uint32_t)0x00000000)
#define FPU_FPCCR_LSPACT_SET         ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define FPU_FPCCR_R_USER_MASK      ((uint32_t)0x00000002)
#define FPU_FPCCR_R_USER_BIT       (1)
#define FPU_FPCCR_R_USER_NOSET     ((uint32_t)0x00000000)
#define FPU_FPCCR_R_USER_SET       ((uint32_t)0x00000002)

#define FPU_FPCCR_USER_MASK        ((uint32_t)0x00000001)
#define FPU_FPCCR_USER_NOSET       ((uint32_t)0x00000000)
#define FPU_FPCCR_USER_SET         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FPU_FPCCR_R_THREAD_MASK      ((uint32_t)0x00000008)
#define FPU_FPCCR_R_THREAD_BIT       (3)
#define FPU_FPCCR_R_THREAD_NOSET     ((uint32_t)0x00000000)
#define FPU_FPCCR_R_THREAD_SET       ((uint32_t)0x00000008)

#define FPU_FPCCR_THREAD_MASK        ((uint32_t)0x00000001)
#define FPU_FPCCR_THREAD_NOSET       ((uint32_t)0x00000000)
#define FPU_FPCCR_THREAD_SET         ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define FPU_FPCCR_R_HFRDY_MASK      ((uint32_t)0x00000010)
#define FPU_FPCCR_R_HFRDY_BIT       (4)
#define FPU_FPCCR_R_HFRDY_NOSET     ((uint32_t)0x00000000)
#define FPU_FPCCR_R_HFRDY_SET       ((uint32_t)0x00000010)

#define FPU_FPCCR_HFRDY_MASK        ((uint32_t)0x00000001)
#define FPU_FPCCR_HFRDY_NOSET       ((uint32_t)0x00000000)
#define FPU_FPCCR_HFRDY_SET         ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define FPU_FPCCR_R_MMRDY_MASK      ((uint32_t)0x00000020)
#define FPU_FPCCR_R_MMRDY_BIT       (5)
#define FPU_FPCCR_R_MMRDY_NOSET     ((uint32_t)0x00000000)
#define FPU_FPCCR_R_MMRDY_SET       ((uint32_t)0x00000020)

#define FPU_FPCCR_MMRDY_MASK        ((uint32_t)0x00000001)
#define FPU_FPCCR_MMRDY_NOSET       ((uint32_t)0x00000000)
#define FPU_FPCCR_MMRDY_SET         ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define FPU_FPCCR_R_BFRDY_MASK      ((uint32_t)0x00000040)
#define FPU_FPCCR_R_BFRDY_BIT       (6)
#define FPU_FPCCR_R_BFRDY_NOSET     ((uint32_t)0x00000000)
#define FPU_FPCCR_R_BFRDY_SET       ((uint32_t)0x00000040)

#define FPU_FPCCR_BFRDY_MASK        ((uint32_t)0x00000001)
#define FPU_FPCCR_BFRDY_NOSET       ((uint32_t)0x00000000)
#define FPU_FPCCR_BFRDY_SET         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FPU_FPCCR_R_MONRDY_MASK      ((uint32_t)0x00000100)
#define FPU_FPCCR_R_MONRDY_BIT       (8)
#define FPU_FPCCR_R_MONRDY_NOSET     ((uint32_t)0x00000000)
#define FPU_FPCCR_R_MONRDY_SET       ((uint32_t)0x00000100)

#define FPU_FPCCR_MONRDY_MASK        ((uint32_t)0x00000001)
#define FPU_FPCCR_MONRDY_NOSET       ((uint32_t)0x00000000)
#define FPU_FPCCR_MONRDY_SET         ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FPU_FPCCR_R_LSPEN_MASK      ((uint32_t)0x40000000)
#define FPU_FPCCR_R_LSPEN_BIT       (30)
#define FPU_FPCCR_R_LSPEN_NOSET     ((uint32_t)0x00000000)
#define FPU_FPCCR_R_LSPEN_SET       ((uint32_t)0x40000000)

#define FPU_FPCCR_LSPEN_MASK        ((uint32_t)0x00000001)
#define FPU_FPCCR_LSPEN_NOSET       ((uint32_t)0x00000000)
#define FPU_FPCCR_LSPEN_SET         ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define FPU_FPCCR_R_ASPEN_MASK      ((uint32_t)0x80000000)
#define FPU_FPCCR_R_ASPEN_BIT       (31)
#define FPU_FPCCR_R_ASPEN_NOSET     ((uint32_t)0x00000000)
#define FPU_FPCCR_R_ASPEN_SET       ((uint32_t)0x80000000)

#define FPU_FPCCR_ASPEN_MASK        ((uint32_t)0x00000001)
#define FPU_FPCCR_ASPEN_NOSET       ((uint32_t)0x00000000)
#define FPU_FPCCR_ASPEN_SET         ((uint32_t)0x00000001)
/*--------*/

/* TODO FPCAR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 FPCAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/


#define FPU_FPCAR            (((FPCAR_TypeDef*)(FPU_BASE+FPU_FPCAR_OFFSET )))
#define FPU_FPCAR_R          (*((__IO int32_t *)(FPU_BASE+FPU_FPCAR_OFFSET)))


/*--------*/
#define FPU_FPCAR_R_ADDRESS_MASK      ((uint32_t)0xFFFFFFF8)
#define FPU_FPCAR_R_ADDRESS_BIT       (3)

#define FPU_FPCAR_ADDRESS_MASK        ((uint32_t)0x1FFFFFFF)
/*--------*/


/*TODO FPDSCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 FPDSCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FPU_FPDSCR            (((FPDSCR_TypeDef*)(FPU_BASE+FPU_FPDSCR_OFFSET )))
#define FPU_FPDSCR_R          (*((__IO int32_t *)(FPU_BASE+FPU_FPDSCR_OFFSET)))

/*--------*/
#define FPU_FPDSCR_R_RMODE_MASK      ((uint32_t)0x00C00000)
#define FPU_FPDSCR_R_RMODE_BIT       (22)
#define FPU_FPDSCR_R_RMODE_RN        ((uint32_t)0x00000000)
#define FPU_FPDSCR_R_RMODE_RP        ((uint32_t)0x00400000)
#define FPU_FPDSCR_R_RMODE_RM        ((uint32_t)0x00800000)
#define FPU_FPDSCR_R_RMODE_RZ        ((uint32_t)0x00C00000)

#define FPU_FPDSCR_RMODE_MASK        ((uint32_t)0x00000003)
#define FPU_FPDSCR_RMODE_RN          ((uint32_t)0x00000000)
#define FPU_FPDSCR_RMODE_RP          ((uint32_t)0x00000001)
#define FPU_FPDSCR_RMODE_RM          ((uint32_t)0x00000002)
#define FPU_FPDSCR_RMODE_RZ          ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FPU_FPDSCR_R_FZ_MASK      ((uint32_t)0x01000000)
#define FPU_FPDSCR_R_FZ_BIT       (24)
#define FPU_FPDSCR_R_FZ_0         ((uint32_t)0x00000000)
#define FPU_FPDSCR_R_FZ_1         ((uint32_t)0x01000000)

#define FPU_FPDSCR_FZ_MASK        ((uint32_t)0x00000001)
#define FPU_FPDSCR_FZ_0           ((uint32_t)0x00000000)
#define FPU_FPDSCR_FZ_1           ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define FPU_FPDSCR_R_DN_MASK      ((uint32_t)0x02000000)
#define FPU_FPDSCR_R_DN_BIT       (25)
#define FPU_FPDSCR_R_DN_0         ((uint32_t)0x00000000)
#define FPU_FPDSCR_R_DN_1         ((uint32_t)0x02000000)

#define FPU_FPDSCR_DN_MASK        ((uint32_t)0x00000001)
#define FPU_FPDSCR_DN_0           ((uint32_t)0x00000000)
#define FPU_FPDSCR_DN_1           ((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define FPU_FPDSCR_R_AHP_MASK      ((uint32_t)0x04000000)
#define FPU_FPDSCR_R_AHP_BIT       (26)
#define FPU_FPDSCR_R_AHP_0         ((uint32_t)0x00000000)
#define FPU_FPDSCR_R_AHP_1         ((uint32_t)0x04000000)

#define FPU_FPDSCR_AHP_MASK        ((uint32_t)0x00000001)
#define FPU_FPDSCR_AHP_0           ((uint32_t)0x00000000)
#define FPU_FPDSCR_AHP_1           ((uint32_t)0x00000001)
/*--------*/

/* TODO MVFR0 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 MVFR0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FPU_MVFR0            (((MVFR0_TypeDef*)(FPU_BASE+FPU_MVFR0_OFFSET )))
#define FPU_MVFR0_R          (*((__I uint32_t *)(FPU_BASE+FPU_MVFR0_OFFSET)))

/*--------*/
#define FPU_MVFR0_R_A_SIMD_registers_MASK      ((uint32_t)0x0000000F)
#define FPU_MVFR0_R_A_SIMD_registers_BIT       (0)

#define FPU_MVFR0_A_SIMD_registers_MASK        ((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FPU_MVFR0_R_Single_precision_MASK      ((uint32_t)0x000000F0)
#define FPU_MVFR0_R_Single_precision_BIT       (4)
#define FPU_MVFR0_R_Single_precision_PRESENT   ((uint32_t)0x00000020)
#define FPU_MVFR0_R_Single_precision_NOPRESENT ((uint32_t)0x00000000)

#define FPU_MVFR0_Single_precision_MASK        ((uint32_t)0x0000000F)
#define FPU_MVFR0_Single_precision_PRESENT     ((uint32_t)0x00000002)
#define FPU_MVFR0_Single_precision_NOPRESENT   ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define FPU_MVFR0_R_Double_precision_MASK      ((uint32_t)0x00000F00)
#define FPU_MVFR0_R_Double_precision_BIT       (8)
#define FPU_MVFR0_R_Double_precision_PRESENT   ((uint32_t)0x00000200)
#define FPU_MVFR0_R_Double_precision_NOPRESENT ((uint32_t)0x00000000)

#define FPU_MVFR0_Double_precision_MASK        ((uint32_t)0x0000000F)
#define FPU_MVFR0_Double_precision_PRESENT     ((uint32_t)0x00000002)
#define FPU_MVFR0_Double_precision_NOPRESENT   ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define FPU_MVFR0_R_FP_excep_trapping_MASK      ((uint32_t)0x0000F000)
#define FPU_MVFR0_R_FP_excep_trapping_BIT       (12)

#define FPU_MVFR0_FP_excep_trapping_MASK        ((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FPU_MVFR0_R_Divide_MASK      			((uint32_t)0x000F0000)
#define FPU_MVFR0_R_Divide_BIT       			(16)

#define FPU_MVFR0_Divide_MASK        			((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FPU_MVFR0_R_Square_root_MASK      		((uint32_t)0x00F00000)
#define FPU_MVFR0_R_Square_root_BIT       		(20)

#define FPU_MVFR0_Square_root_MASK        		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FPU_MVFR0_R_Short_vectors_MASK      	((uint32_t)0x0F000000)
#define FPU_MVFR0_R_Short_vectors_BIT       	(24)

#define FPU_MVFR0_Short_vectors_MASK        	((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FPU_MVFR0_R_FP_rounding_modes_MASK      ((uint32_t)0xF0000000)
#define FPU_MVFR0_R_FP_rounding_modes_BIT       (28)

#define FPU_MVFR0_FP_rounding_modes_MASK        ((uint32_t)0x0000000F)
/*--------*/

/* TODO MVFR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 MVFR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FPU_MVFR1            (((MVFR1_TypeDef*)(FPU_BASE+FPU_MVFR1_OFFSET )))
#define FPU_MVFR1_R          (*((__I uint32_t *)(FPU_BASE+FPU_MVFR1_OFFSET)))


/*--------*/
#define FPU_MVFR1_R_FtZ_mode_MASK      ((uint32_t)0x0000000F)
#define FPU_MVFR1_R_FtZ_mode_BIT       (0)

#define FPU_MVFR1_FtZ_mode_MASK        ((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FPU_MVFR1_R_D_NaN_mode_MASK      ((uint32_t)0x000000F0)
#define FPU_MVFR1_R_D_NaN_mode_BIT       (4)

#define FPU_MVFR1_D_NaN_mode_MASK        ((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FPU_MVFR1_R_FP_HPFP_MASK      	((uint32_t)0x0F000000)
#define FPU_MVFR1_R_FP_HPFP_BIT       	(24)

#define FPU_MVFR1_FP_HPFP_MASK        	((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FPU_MVFR1_R_FP_fused_MAC_MASK      ((uint32_t)0xF0000000)
#define FPU_MVFR1_R_FP_fused_MAC_BIT       (28)

#define FPU_MVFR1_FP_fused_MAC_MASK        ((uint32_t)0x0000000F)
/*--------*/

/* TODO functions */
int32_t FPU_Init(void);
int32_t FPU_GetType(void);

#endif /* FPU_H_ */
