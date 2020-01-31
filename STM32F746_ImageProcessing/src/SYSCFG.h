/*
 * SYSCFG.h
 *
 *  Created on: 10 ago. 2018
 *      Author: InDev
 */

#ifndef SYSCFG_H_
#define SYSCFG_H_


#include "Core.h"
#include <stdint.h>


#define SYSCFG_BASE            ((uint32_t)0x40013800)
#define SYSCFG_OFFSET          ((uint32_t)0x00013800)

typedef __IO struct
{
    __I  uint32_t MEM_BOOT      :1;
         uint32_t reserved     	:9;
    __IO uint32_t SWP_FMC      	:2;
         uint32_t reserved1	    :20;
}SYSCFG_MEMRMP_TypeDef;/*0x00000000*/

typedef __IO struct
{
    	 uint32_t reserved     	:16;
    __IO uint32_t ADCxDC2       :3;
    	 uint32_t reserved1	    :4;
    __IO uint32_t MII_RMII_SEL  :1;
         uint32_t reserved2	    :8;
}SYSCFG_PMC_TypeDef;/*0x00000004*/

typedef __IO struct
{
    __IO uint32_t EXTI0         :4;
    __IO uint32_t EXTI1         :4;
    __IO uint32_t EXTI2         :4;
    __IO uint32_t EXTI3         :4;
         uint32_t reserved1	    :16;
}SYSCFG_EXTICR1_TypeDef;/*0x00000008*/

typedef __IO struct
{
    __IO uint32_t EXTI4         :4;
    __IO uint32_t EXTI5         :4;
    __IO uint32_t EXTI6         :4;
    __IO uint32_t EXTI7         :4;
         uint32_t reserved1	    :16;
}SYSCFG_EXTICR2_TypeDef;/*0x0000000C*/

typedef __IO struct
{
    __IO uint32_t EXTI8         :4;
    __IO uint32_t EXTI9         :4;
    __IO uint32_t EXTI10        :4;
    __IO uint32_t EXTI11        :4;
         uint32_t reserved1	    :16;
}SYSCFG_EXTICR3_TypeDef;/*0x00000010*/

typedef __IO struct
{
    __IO uint32_t EXTI12        :4;
    __IO uint32_t EXTI13        :4;
    __IO uint32_t EXTI14        :4;
    __IO uint32_t EXTI15        :4;
         uint32_t reserved1	    :16;
}SYSCFG_EXTICR4_TypeDef;/*0x00000014*/

typedef __IO struct
{
    __IO uint32_t CMP_PD        :1;
    	 uint32_t reserved	    :7;
    __I  uint32_t READY		  	:1;
         uint32_t reserved1	    :23;
}SYSCFG_CMPCR_TypeDef;/*0x00000020*/


typedef struct
{
	union
	{
		__IO uint32_t 			MEMRMP;             /*!< SYSCFG memory remap register,                      Address offset: 0x00      */
		SYSCFG_MEMRMP_TypeDef 	MEMRMP_Bit;
	};
	union
	{
		__IO uint32_t 			PMC;              /*!< SYSCFG peripheral mode configuration register,     Address offset: 0x04      */
		SYSCFG_PMC_TypeDef 		PMC_Bit;
	};
	union
	{
		__IO uint32_t 			EXTICR1;            /*!< SYSCFG external interrupt configuration registers, Address offset: 0x08-0x14 */
		SYSCFG_EXTICR1_TypeDef 	EXTICR1_Bit;
	};
	union
	{
		__IO uint32_t 			EXTICR2;            /*!< SYSCFG external interrupt configuration registers, Address offset: 0x08-0x14 */
		SYSCFG_EXTICR2_TypeDef 	EXTICR2_Bit;
	};
	union
	{
		__IO uint32_t 			EXTICR3;             /*!< SYSCFG external interrupt configuration registers, Address offset: 0x08-0x14 */
		SYSCFG_EXTICR3_TypeDef 	EXTICR3_Bit;
	};
	union
	{
		__IO uint32_t 			EXTICR4;             /*!< SYSCFG external interrupt configuration registers, Address offset: 0x08-0x14 */
		SYSCFG_EXTICR4_TypeDef 	EXTICR4_Bit;
	};
	uint32_t      				reserved[2];
	union
	{
		__IO uint32_t 			CMPCR;            /*!< SYSCFG Compensation cell control register,         Address offset: 0x20      */
		SYSCFG_CMPCR_TypeDef 	CMPCR_Bit;
	};
}SYSCFG_TypeDef;




#define SYSCFG              ((SYSCFG_TypeDef *) SYSCFG_BASE)



#define	SYSCFG_MEMRMP_OFFSET		((uint32_t)0x00000000)
#define	SYSCFG_PMC_OFFSET			((uint32_t)0x00000004)
#define	SYSCFG_EXTICR1_OFFSET		((uint32_t)0x00000008)
#define	SYSCFG_EXTICR2_OFFSET		((uint32_t)0x0000000C)
#define	SYSCFG_EXTICR3_OFFSET		((uint32_t)0x00000010)
#define	SYSCFG_EXTICR4_OFFSET		((uint32_t)0x00000014)
#define	SYSCFG_CMPCR_OFFSET			((uint32_t)0x00000020)

/*TODO MEMRMP*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 MEMRMP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SYSCFG_MEMRMP            (((SYSCFG_MEMRMP_TypeDef*)(SYSCFG_BASE+SYSCFG_MEMRMP_OFFSET )))
#define SYSCFG_MEMRMP_R          (*((__IO uint32_t *)(SYSCFG_BASE+SYSCFG_MEMRMP_OFFSET)))

/*--------*/
#define SYSCFG_MEMRMP_R_MEM_BOOT_MASK    	((uint32_t)0x00000001)
#define SYSCFG_MEMRMP_R_MEM_BOOT_BIT    	((uint32_t)0)
#define SYSCFG_MEMRMP_R_MEM_BOOT_ADD0    	((uint32_t)0x00000000)
#define SYSCFG_MEMRMP_R_MEM_BOOT_ADD1    	((uint32_t)0x00000001)

#define SYSCFG_MEMRMP_MEM_BOOT_MASK    		((uint32_t)0x00000001)
#define SYSCFG_MEMRMP_MEM_BOOT_ADD0    		((uint32_t)0x00000000)
#define SYSCFG_MEMRMP_MEM_BOOT_ADD1    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCFG_MEMRMP_R_SWP_FMC_MASK    	((uint32_t)0x00000C00)
#define SYSCFG_MEMRMP_R_SWP_FMC_BIT    		((uint32_t)10)
#define SYSCFG_MEMRMP_R_SWP_FMC_NO			((uint32_t)0x00000000)
#define SYSCFG_MEMRMP_R_SWP_FMC_SWAP    	((uint32_t)0x00004000)

#define SYSCFG_MEMRMP_SWP_FMC_MASK    		((uint32_t)0x00000003)
#define SYSCFG_MEMRMP_SWP_FMC_NO    		((uint32_t)0x00000000)
#define SYSCFG_MEMRMP_SWP_FMC_SWAP    		((uint32_t)0x00000001)
/*--------*/

/*TODO PMC*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 PMC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SYSCFG_PMC            (((SYSCFG_PMC_TypeDef*)(SYSCFG_BASE+SYSCFG_PMC_OFFSET )))
#define SYSCFG_PMC_R          (*((__IO uint32_t *)(SYSCFG_BASE+SYSCFG_PMC_OFFSET)))

/*--------*/
#define SYSCFG_PMC_R_ADCxDC2_MASK    	((uint32_t)0x00070000)
#define SYSCFG_PMC_R_ADCxDC2_BIT    	((uint32_t)16)

#define SYSCFG_PMC_ADCxDC2_MASK    		((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define SYSCFG_PMC_R_MII_RMII_SEL_MASK	((uint32_t)0x00800000)
#define SYSCFG_PMC_R_MII_RMII_SEL_BIT	((uint32_t)23)
#define SYSCFG_PMC_R_MII_RMII_SEL_MMI	((uint32_t)0x00000000)
#define SYSCFG_PMC_R_MII_RMII_SEL_RMMI	((uint32_t)0x00800000)

#define SYSCFG_PMC_MII_RMII_SEL_MASK	((uint32_t)0x00000001)
#define SYSCFG_PMC_MII_RMII_SEL_MMI		((uint32_t)0x00000000)
#define SYSCFG_PMC_MII_RMII_SEL_RMMI	((uint32_t)0x00000001)
/*--------*/

/*TODO EXTICR1*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 EXTICR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SYSCFG_EXTICR1            (((SYSCFG_EXTICR1_TypeDef*)(SYSCFG_BASE+SYSCFG_EXTICR1_OFFSET )))
#define SYSCFG_EXTICR1_R          (*((__IO uint32_t *)(SYSCFG_BASE+SYSCFG_EXTICR1_OFFSET)))

/*--------*/
#define SYSCFG_EXTICR1_R_EXTI0_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR1_R_EXTI0_BIT    	((uint32_t)0)
#define SYSCFG_EXTICR1_R_EXTI0_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR1_R_EXTI0_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR1_R_EXTI0_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR1_R_EXTI0_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR1_R_EXTI0_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR1_R_EXTI0_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR1_R_EXTI0_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR1_R_EXTI0_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR1_R_EXTI0_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR1_R_EXTI0_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR1_R_EXTI0_PK    	((uint32_t)0x0000000A)

#define SYSCFG_EXTICR1_EXTI0_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR1_EXTI0_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR1_EXTI0_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR1_EXTI0_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR1_EXTI0_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR1_EXTI0_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR1_EXTI0_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR1_EXTI0_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR1_EXTI0_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR1_EXTI0_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR1_EXTI0_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR1_EXTI0_PK    		((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR1_R_EXTI1_MASK    	((uint32_t)0x000000F0)
#define SYSCFG_EXTICR1_R_EXTI1_BIT    	((uint32_t)4)
#define SYSCFG_EXTICR1_R_EXTI1_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR1_R_EXTI1_PB    	((uint32_t)0x00000010)
#define SYSCFG_EXTICR1_R_EXTI1_PC    	((uint32_t)0x00000020)
#define SYSCFG_EXTICR1_R_EXTI1_PD    	((uint32_t)0x00000030)
#define SYSCFG_EXTICR1_R_EXTI1_PE    	((uint32_t)0x00000040)
#define SYSCFG_EXTICR1_R_EXTI1_PF    	((uint32_t)0x00000050)
#define SYSCFG_EXTICR1_R_EXTI1_PG    	((uint32_t)0x00000060)
#define SYSCFG_EXTICR1_R_EXTI1_PH    	((uint32_t)0x00000070)
#define SYSCFG_EXTICR1_R_EXTI1_PI    	((uint32_t)0x00000080)
#define SYSCFG_EXTICR1_R_EXTI1_PJ    	((uint32_t)0x00000090)
#define SYSCFG_EXTICR1_R_EXTI1_PK    	((uint32_t)0x000000A0)

#define SYSCFG_EXTICR1_EXTI1_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR1_EXTI1_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR1_EXTI1_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR1_EXTI1_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR1_EXTI1_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR1_EXTI1_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR1_EXTI1_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR1_EXTI1_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR1_EXTI1_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR1_EXTI1_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR1_EXTI1_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR1_EXTI1_PK    		((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR1_R_EXTI2_MASK    	((uint32_t)0x00000F00)
#define SYSCFG_EXTICR1_R_EXTI2_BIT    	((uint32_t)8)
#define SYSCFG_EXTICR1_R_EXTI2_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR1_R_EXTI2_PB    	((uint32_t)0x00000100)
#define SYSCFG_EXTICR1_R_EXTI2_PC    	((uint32_t)0x00000200)
#define SYSCFG_EXTICR1_R_EXTI2_PD    	((uint32_t)0x00000300)
#define SYSCFG_EXTICR1_R_EXTI2_PE    	((uint32_t)0x00000400)
#define SYSCFG_EXTICR1_R_EXTI2_PF    	((uint32_t)0x00000500)
#define SYSCFG_EXTICR1_R_EXTI2_PG    	((uint32_t)0x00000600)
#define SYSCFG_EXTICR1_R_EXTI2_PH    	((uint32_t)0x00000700)
#define SYSCFG_EXTICR1_R_EXTI2_PI    	((uint32_t)0x00000800)
#define SYSCFG_EXTICR1_R_EXTI2_PJ    	((uint32_t)0x00000900)
#define SYSCFG_EXTICR1_R_EXTI2_PK    	((uint32_t)0x00000A00)

#define SYSCFG_EXTICR1_EXTI2_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR1_EXTI2_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR1_EXTI2_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR1_EXTI2_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR1_EXTI2_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR1_EXTI2_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR1_EXTI2_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR1_EXTI2_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR1_EXTI2_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR1_EXTI2_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR1_EXTI2_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR1_EXTI2_PK    		((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR1_R_EXTI3_MASK    	((uint32_t)0x0000F000)
#define SYSCFG_EXTICR1_R_EXTI3_BIT    	((uint32_t)12)
#define SYSCFG_EXTICR1_R_EXTI3_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR1_R_EXTI3_PB    	((uint32_t)0x00001000)
#define SYSCFG_EXTICR1_R_EXTI3_PC    	((uint32_t)0x00002000)
#define SYSCFG_EXTICR1_R_EXTI3_PD    	((uint32_t)0x00003000)
#define SYSCFG_EXTICR1_R_EXTI3_PE    	((uint32_t)0x00004000)
#define SYSCFG_EXTICR1_R_EXTI3_PF    	((uint32_t)0x00005000)
#define SYSCFG_EXTICR1_R_EXTI3_PG    	((uint32_t)0x00006000)
#define SYSCFG_EXTICR1_R_EXTI3_PH    	((uint32_t)0x00007000)
#define SYSCFG_EXTICR1_R_EXTI3_PI    	((uint32_t)0x00008000)
#define SYSCFG_EXTICR1_R_EXTI3_PJ    	((uint32_t)0x00009000)
#define SYSCFG_EXTICR1_R_EXTI3_PK    	((uint32_t)0x0000A000)

#define SYSCFG_EXTICR1_EXTI3_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR1_EXTI3_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR1_EXTI3_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR1_EXTI3_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR1_EXTI3_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR1_EXTI3_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR1_EXTI3_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR1_EXTI3_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR1_EXTI3_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR1_EXTI3_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR1_EXTI3_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR1_EXTI3_PK    		((uint32_t)0x0000000A)
/*--------*/



/*TODO EXTICR2*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 EXTICR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SYSCFG_EXTICR2            (((SYSCFG_EXTICR2_TypeDef*)(SYSCFG_BASE+SYSCFG_EXTICR2_OFFSET )))
#define SYSCFG_EXTICR2_R          (*((__IO uint32_t *)(SYSCFG_BASE+SYSCFG_EXTICR2_OFFSET)))

/*--------*/
#define SYSCFG_EXTICR2_R_EXTI4_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR2_R_EXTI4_BIT    	((uint32_t)0)
#define SYSCFG_EXTICR2_R_EXTI4_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR2_R_EXTI4_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR2_R_EXTI4_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR2_R_EXTI4_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR2_R_EXTI4_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR2_R_EXTI4_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR2_R_EXTI4_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR2_R_EXTI4_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR2_R_EXTI4_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR2_R_EXTI4_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR2_R_EXTI4_PK    	((uint32_t)0x0000000A)

#define SYSCFG_EXTICR2_EXTI4_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR2_EXTI4_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR2_EXTI4_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR2_EXTI4_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR2_EXTI4_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR2_EXTI4_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR2_EXTI4_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR2_EXTI4_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR2_EXTI4_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR2_EXTI4_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR2_EXTI4_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR2_EXTI4_PK    		((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR2_R_EXTI5_MASK    	((uint32_t)0x000000F0)
#define SYSCFG_EXTICR2_R_EXTI5_BIT    	((uint32_t)4)
#define SYSCFG_EXTICR2_R_EXTI5_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR2_R_EXTI5_PB    	((uint32_t)0x00000010)
#define SYSCFG_EXTICR2_R_EXTI5_PC    	((uint32_t)0x00000020)
#define SYSCFG_EXTICR2_R_EXTI5_PD    	((uint32_t)0x00000030)
#define SYSCFG_EXTICR2_R_EXTI5_PE    	((uint32_t)0x00000040)
#define SYSCFG_EXTICR2_R_EXTI5_PF    	((uint32_t)0x00000050)
#define SYSCFG_EXTICR2_R_EXTI5_PG    	((uint32_t)0x00000060)
#define SYSCFG_EXTICR2_R_EXTI5_PH    	((uint32_t)0x00000070)
#define SYSCFG_EXTICR2_R_EXTI5_PI    	((uint32_t)0x00000080)
#define SYSCFG_EXTICR2_R_EXTI5_PJ    	((uint32_t)0x00000090)
#define SYSCFG_EXTICR2_R_EXTI5_PK    	((uint32_t)0x000000A0)

#define SYSCFG_EXTICR2_EXTI5_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR2_EXTI5_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR2_EXTI5_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR2_EXTI5_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR2_EXTI5_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR2_EXTI5_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR2_EXTI5_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR2_EXTI5_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR2_EXTI5_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR2_EXTI5_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR2_EXTI5_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR2_EXTI5_PK    		((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR2_R_EXTI6_MASK    	((uint32_t)0x00000F00)
#define SYSCFG_EXTICR2_R_EXTI6_BIT    	((uint32_t)8)
#define SYSCFG_EXTICR2_R_EXTI6_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR2_R_EXTI6_PB    	((uint32_t)0x00000100)
#define SYSCFG_EXTICR2_R_EXTI6_PC    	((uint32_t)0x00000200)
#define SYSCFG_EXTICR2_R_EXTI6_PD    	((uint32_t)0x00000300)
#define SYSCFG_EXTICR2_R_EXTI6_PE    	((uint32_t)0x00000400)
#define SYSCFG_EXTICR2_R_EXTI6_PF    	((uint32_t)0x00000500)
#define SYSCFG_EXTICR2_R_EXTI6_PG    	((uint32_t)0x00000600)
#define SYSCFG_EXTICR2_R_EXTI6_PH    	((uint32_t)0x00000700)
#define SYSCFG_EXTICR2_R_EXTI6_PI    	((uint32_t)0x00000800)
#define SYSCFG_EXTICR2_R_EXTI6_PJ    	((uint32_t)0x00000900)
#define SYSCFG_EXTICR2_R_EXTI6_PK    	((uint32_t)0x00000A00)

#define SYSCFG_EXTICR2_EXTI6_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR2_EXTI6_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR2_EXTI6_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR2_EXTI6_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR2_EXTI6_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR2_EXTI6_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR2_EXTI6_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR2_EXTI6_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR2_EXTI6_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR2_EXTI6_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR2_EXTI6_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR2_EXTI6_PK    		((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR2_R_EXTI7_MASK    	((uint32_t)0x0000F000)
#define SYSCFG_EXTICR2_R_EXTI7_BIT    	((uint32_t)12)
#define SYSCFG_EXTICR2_R_EXTI7_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR2_R_EXTI7_PB    	((uint32_t)0x00001000)
#define SYSCFG_EXTICR2_R_EXTI7_PC    	((uint32_t)0x00002000)
#define SYSCFG_EXTICR2_R_EXTI7_PD    	((uint32_t)0x00003000)
#define SYSCFG_EXTICR2_R_EXTI7_PE    	((uint32_t)0x00004000)
#define SYSCFG_EXTICR2_R_EXTI7_PF    	((uint32_t)0x00005000)
#define SYSCFG_EXTICR2_R_EXTI7_PG    	((uint32_t)0x00006000)
#define SYSCFG_EXTICR2_R_EXTI7_PH    	((uint32_t)0x00007000)
#define SYSCFG_EXTICR2_R_EXTI7_PI    	((uint32_t)0x00008000)
#define SYSCFG_EXTICR2_R_EXTI7_PJ    	((uint32_t)0x00009000)
#define SYSCFG_EXTICR2_R_EXTI7_PK    	((uint32_t)0x0000A000)

#define SYSCFG_EXTICR2_EXTI7_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR2_EXTI7_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR2_EXTI7_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR2_EXTI7_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR2_EXTI7_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR2_EXTI7_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR2_EXTI7_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR2_EXTI7_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR2_EXTI7_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR2_EXTI7_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR2_EXTI7_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR2_EXTI7_PK    		((uint32_t)0x0000000A)
/*--------*/


/*TODO EXTICR3*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 EXTICR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SYSCFG_EXTICR3            (((SYSCFG_EXTICR3_TypeDef*)(SYSCFG_BASE+SYSCFG_EXTICR3_OFFSET )))
#define SYSCFG_EXTICR3_R          (*((__IO uint32_t *)(SYSCFG_BASE+SYSCFG_EXTICR3_OFFSET)))

/*--------*/
#define SYSCFG_EXTICR3_R_EXTI8_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR3_R_EXTI8_BIT    	((uint32_t)0)
#define SYSCFG_EXTICR3_R_EXTI8_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR3_R_EXTI8_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR3_R_EXTI8_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR3_R_EXTI8_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR3_R_EXTI8_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR3_R_EXTI8_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR3_R_EXTI8_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR3_R_EXTI8_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR3_R_EXTI8_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR3_R_EXTI8_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR3_R_EXTI8_PK    	((uint32_t)0x0000000A)

#define SYSCFG_EXTICR3_EXTI8_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR3_EXTI8_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR3_EXTI8_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR3_EXTI8_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR3_EXTI8_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR3_EXTI8_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR3_EXTI8_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR3_EXTI8_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR3_EXTI8_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR3_EXTI8_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR3_EXTI8_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR3_EXTI8_PK    		((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR3_R_EXTI9_MASK    	((uint32_t)0x000000F0)
#define SYSCFG_EXTICR3_R_EXTI9_BIT    	((uint32_t)4)
#define SYSCFG_EXTICR3_R_EXTI9_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR3_R_EXTI9_PB    	((uint32_t)0x00000010)
#define SYSCFG_EXTICR3_R_EXTI9_PC    	((uint32_t)0x00000020)
#define SYSCFG_EXTICR3_R_EXTI9_PD    	((uint32_t)0x00000030)
#define SYSCFG_EXTICR3_R_EXTI9_PE    	((uint32_t)0x00000040)
#define SYSCFG_EXTICR3_R_EXTI9_PF    	((uint32_t)0x00000050)
#define SYSCFG_EXTICR3_R_EXTI9_PG    	((uint32_t)0x00000060)
#define SYSCFG_EXTICR3_R_EXTI9_PH    	((uint32_t)0x00000070)
#define SYSCFG_EXTICR3_R_EXTI9_PI    	((uint32_t)0x00000080)
#define SYSCFG_EXTICR3_R_EXTI9_PJ    	((uint32_t)0x00000090)
#define SYSCFG_EXTICR3_R_EXTI9_PK    	((uint32_t)0x000000A0)

#define SYSCFG_EXTICR3_EXTI9_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR3_EXTI9_PA    		((uint32_t)0x00000000)
#define SYSCFG_EXTICR3_EXTI9_PB    		((uint32_t)0x00000001)
#define SYSCFG_EXTICR3_EXTI9_PC    		((uint32_t)0x00000002)
#define SYSCFG_EXTICR3_EXTI9_PD    		((uint32_t)0x00000003)
#define SYSCFG_EXTICR3_EXTI9_PE    		((uint32_t)0x00000004)
#define SYSCFG_EXTICR3_EXTI9_PF    		((uint32_t)0x00000005)
#define SYSCFG_EXTICR3_EXTI9_PG    		((uint32_t)0x00000006)
#define SYSCFG_EXTICR3_EXTI9_PH    		((uint32_t)0x00000007)
#define SYSCFG_EXTICR3_EXTI9_PI    		((uint32_t)0x00000008)
#define SYSCFG_EXTICR3_EXTI9_PJ    		((uint32_t)0x00000009)
#define SYSCFG_EXTICR3_EXTI9_PK    		((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR3_R_EXTI10_MASK    ((uint32_t)0x00000F00)
#define SYSCFG_EXTICR3_R_EXTI10_BIT    	((uint32_t)8)
#define SYSCFG_EXTICR3_R_EXTI10_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR3_R_EXTI10_PB    	((uint32_t)0x00000100)
#define SYSCFG_EXTICR3_R_EXTI10_PC    	((uint32_t)0x00000200)
#define SYSCFG_EXTICR3_R_EXTI10_PD    	((uint32_t)0x00000300)
#define SYSCFG_EXTICR3_R_EXTI10_PE    	((uint32_t)0x00000400)
#define SYSCFG_EXTICR3_R_EXTI10_PF    	((uint32_t)0x00000500)
#define SYSCFG_EXTICR3_R_EXTI10_PG    	((uint32_t)0x00000600)
#define SYSCFG_EXTICR3_R_EXTI10_PH    	((uint32_t)0x00000700)
#define SYSCFG_EXTICR3_R_EXTI10_PI    	((uint32_t)0x00000800)
#define SYSCFG_EXTICR3_R_EXTI10_PJ    	((uint32_t)0x00000900)
#define SYSCFG_EXTICR3_R_EXTI10_PK    	((uint32_t)0x00000A00)

#define SYSCFG_EXTICR3_EXTI10_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR3_EXTI10_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR3_EXTI10_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR3_EXTI10_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR3_EXTI10_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR3_EXTI10_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR3_EXTI10_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR3_EXTI10_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR3_EXTI10_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR3_EXTI10_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR3_EXTI10_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR3_EXTI10_PK    	((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR3_R_EXTI11_MASK    ((uint32_t)0x0000F000)
#define SYSCFG_EXTICR3_R_EXTI11_BIT    	((uint32_t)12)
#define SYSCFG_EXTICR3_R_EXTI11_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR3_R_EXTI11_PB    	((uint32_t)0x00001000)
#define SYSCFG_EXTICR3_R_EXTI11_PC    	((uint32_t)0x00002000)
#define SYSCFG_EXTICR3_R_EXTI11_PD    	((uint32_t)0x00003000)
#define SYSCFG_EXTICR3_R_EXTI11_PE    	((uint32_t)0x00004000)
#define SYSCFG_EXTICR3_R_EXTI11_PF    	((uint32_t)0x00005000)
#define SYSCFG_EXTICR3_R_EXTI11_PG    	((uint32_t)0x00006000)
#define SYSCFG_EXTICR3_R_EXTI11_PH    	((uint32_t)0x00007000)
#define SYSCFG_EXTICR3_R_EXTI11_PI    	((uint32_t)0x00008000)
#define SYSCFG_EXTICR3_R_EXTI11_PJ    	((uint32_t)0x00009000)
#define SYSCFG_EXTICR3_R_EXTI11_PK    	((uint32_t)0x0000A000)

#define SYSCFG_EXTICR3_EXTI11_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR3_EXTI11_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR3_EXTI11_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR3_EXTI11_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR3_EXTI11_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR3_EXTI11_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR3_EXTI11_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR3_EXTI11_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR3_EXTI11_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR3_EXTI11_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR3_EXTI11_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR3_EXTI11_PK    	((uint32_t)0x0000000A)
/*--------*/



/*TODO EXTICR4*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 EXTICR4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SYSCFG_EXTICR4            (((SYSCFG_EXTICR4_TypeDef*)(SYSCFG_BASE+SYSCFG_EXTICR4_OFFSET )))
#define SYSCFG_EXTICR4_R          (*((__IO uint32_t *)(SYSCFG_BASE+SYSCFG_EXTICR4_OFFSET)))

/*--------*/
#define SYSCFG_EXTICR4_R_EXTI12_MASK    ((uint32_t)0x0000000F)
#define SYSCFG_EXTICR4_R_EXTI12_BIT    	((uint32_t)0)
#define SYSCFG_EXTICR4_R_EXTI12_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR4_R_EXTI12_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR4_R_EXTI12_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR4_R_EXTI12_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR4_R_EXTI12_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR4_R_EXTI12_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR4_R_EXTI12_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR4_R_EXTI12_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR4_R_EXTI12_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR4_R_EXTI12_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR4_R_EXTI12_PK    	((uint32_t)0x0000000A)

#define SYSCFG_EXTICR4_EXTI12_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR4_EXTI12_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR4_EXTI12_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR4_EXTI12_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR4_EXTI12_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR4_EXTI12_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR4_EXTI12_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR4_EXTI12_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR4_EXTI12_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR4_EXTI12_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR4_EXTI12_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR4_EXTI12_PK    	((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR4_R_EXTI13_MASK    ((uint32_t)0x000000F0)
#define SYSCFG_EXTICR4_R_EXTI13_BIT    	((uint32_t)4)
#define SYSCFG_EXTICR4_R_EXTI13_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR4_R_EXTI13_PB    	((uint32_t)0x00000010)
#define SYSCFG_EXTICR4_R_EXTI13_PC    	((uint32_t)0x00000020)
#define SYSCFG_EXTICR4_R_EXTI13_PD    	((uint32_t)0x00000030)
#define SYSCFG_EXTICR4_R_EXTI13_PE    	((uint32_t)0x00000040)
#define SYSCFG_EXTICR4_R_EXTI13_PF    	((uint32_t)0x00000050)
#define SYSCFG_EXTICR4_R_EXTI13_PG    	((uint32_t)0x00000060)
#define SYSCFG_EXTICR4_R_EXTI13_PH    	((uint32_t)0x00000070)
#define SYSCFG_EXTICR4_R_EXTI13_PI    	((uint32_t)0x00000080)
#define SYSCFG_EXTICR4_R_EXTI13_PJ    	((uint32_t)0x00000090)
#define SYSCFG_EXTICR4_R_EXTI13_PK    	((uint32_t)0x000000A0)

#define SYSCFG_EXTICR4_EXTI13_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR4_EXTI13_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR4_EXTI13_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR4_EXTI13_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR4_EXTI13_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR4_EXTI13_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR4_EXTI13_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR4_EXTI13_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR4_EXTI13_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR4_EXTI13_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR4_EXTI13_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR4_EXTI13_PK    	((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR4_R_EXTI14_MASK    ((uint32_t)0x00000F00)
#define SYSCFG_EXTICR4_R_EXTI14_BIT    	((uint32_t)8)
#define SYSCFG_EXTICR4_R_EXTI14_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR4_R_EXTI14_PB    	((uint32_t)0x00000100)
#define SYSCFG_EXTICR4_R_EXTI14_PC    	((uint32_t)0x00000200)
#define SYSCFG_EXTICR4_R_EXTI14_PD    	((uint32_t)0x00000300)
#define SYSCFG_EXTICR4_R_EXTI14_PE    	((uint32_t)0x00000400)
#define SYSCFG_EXTICR4_R_EXTI14_PF    	((uint32_t)0x00000500)
#define SYSCFG_EXTICR4_R_EXTI14_PG    	((uint32_t)0x00000600)
#define SYSCFG_EXTICR4_R_EXTI14_PH    	((uint32_t)0x00000700)
#define SYSCFG_EXTICR4_R_EXTI14_PI    	((uint32_t)0x00000800)
#define SYSCFG_EXTICR4_R_EXTI14_PJ    	((uint32_t)0x00000900)
#define SYSCFG_EXTICR4_R_EXTI14_PK    	((uint32_t)0x00000A00)

#define SYSCFG_EXTICR4_EXTI14_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR4_EXTI14_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR4_EXTI14_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR4_EXTI14_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR4_EXTI14_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR4_EXTI14_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR4_EXTI14_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR4_EXTI14_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR4_EXTI14_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR4_EXTI14_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR4_EXTI14_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR4_EXTI14_PK    	((uint32_t)0x0000000A)
/*--------*/

/*--------*/
#define SYSCFG_EXTICR4_R_EXTI15_MASK    ((uint32_t)0x0000F000)
#define SYSCFG_EXTICR4_R_EXTI15_BIT    	((uint32_t)12)
#define SYSCFG_EXTICR4_R_EXTI15_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR4_R_EXTI15_PB    	((uint32_t)0x00001000)
#define SYSCFG_EXTICR4_R_EXTI15_PC    	((uint32_t)0x00002000)
#define SYSCFG_EXTICR4_R_EXTI15_PD    	((uint32_t)0x00003000)
#define SYSCFG_EXTICR4_R_EXTI15_PE    	((uint32_t)0x00004000)
#define SYSCFG_EXTICR4_R_EXTI15_PF    	((uint32_t)0x00005000)
#define SYSCFG_EXTICR4_R_EXTI15_PG    	((uint32_t)0x00006000)
#define SYSCFG_EXTICR4_R_EXTI15_PH    	((uint32_t)0x00007000)
#define SYSCFG_EXTICR4_R_EXTI15_PI    	((uint32_t)0x00008000)
#define SYSCFG_EXTICR4_R_EXTI15_PJ    	((uint32_t)0x00009000)
#define SYSCFG_EXTICR4_R_EXTI15_PK    	((uint32_t)0x0000A000)

#define SYSCFG_EXTICR4_EXTI15_MASK    	((uint32_t)0x0000000F)
#define SYSCFG_EXTICR4_EXTI15_PA    	((uint32_t)0x00000000)
#define SYSCFG_EXTICR4_EXTI15_PB    	((uint32_t)0x00000001)
#define SYSCFG_EXTICR4_EXTI15_PC    	((uint32_t)0x00000002)
#define SYSCFG_EXTICR4_EXTI15_PD    	((uint32_t)0x00000003)
#define SYSCFG_EXTICR4_EXTI15_PE    	((uint32_t)0x00000004)
#define SYSCFG_EXTICR4_EXTI15_PF    	((uint32_t)0x00000005)
#define SYSCFG_EXTICR4_EXTI15_PG    	((uint32_t)0x00000006)
#define SYSCFG_EXTICR4_EXTI15_PH    	((uint32_t)0x00000007)
#define SYSCFG_EXTICR4_EXTI15_PI    	((uint32_t)0x00000008)
#define SYSCFG_EXTICR4_EXTI15_PJ    	((uint32_t)0x00000009)
#define SYSCFG_EXTICR4_EXTI15_PK    	((uint32_t)0x0000000A)
/*--------*/

/*TODO CMPCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 CMPCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SYSCFG_CMPCR            (((SYSCFG_CMPCR_TypeDef*)(SYSCFG_BASE+SYSCFG_CMPCR_OFFSET )))
#define SYSCFG_CMPCR_R          (*((__IO uint32_t *)(SYSCFG_BASE+SYSCFG_CMPCR_OFFSET)))

/*--------*/
#define SYSCFG_CMPCR_R_CMP_PD_MASK    	((uint32_t)0x00000001)
#define SYSCFG_CMPCR_R_CMP_PD_BIT    	((uint32_t)0)
#define SYSCFG_CMPCR_R_CMP_PD_DIS    	((uint32_t)0x00000000)
#define SYSCFG_CMPCR_R_CMP_PD_EN    	((uint32_t)0x00000001)

#define SYSCFG_CMPCR_CMP_PD_MASK    	((uint32_t)0x00000001)
#define SYSCFG_CMPCR_CMP_PD_DIS    		((uint32_t)0x00000000)
#define SYSCFG_CMPCR_CMP_PD_EN    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SYSCFG_CMPCR_R_READY_MASK    	((uint32_t)0x00000100)
#define SYSCFG_CMPCR_R_READY_BIT    	((uint32_t)8)
#define SYSCFG_CMPCR_R_READY_NORDY		((uint32_t)0x00000000)
#define SYSCFG_CMPCR_R_READY_RDY    	((uint32_t)0x00000100)

#define SYSCFG_CMPCR_READY_MASK    		((uint32_t)0x00000001)
#define SYSCFG_CMPCR_READY_NORDY   		((uint32_t)0x00000000)
#define SYSCFG_CMPCR_READY_RDY   		((uint32_t)0x00000001)
/*--------*/



#endif /* SYSCFG_H_ */
