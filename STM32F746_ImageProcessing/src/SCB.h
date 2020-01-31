/*
 * SCB.h
 *
 *  Created on: 22 jul. 2018
 *      Author: InDev
 */

#ifndef SCB_H_
#define SCB_H_

#include "Core.h"
#include <stdint.h>                      		/* standard types definitions                      */


#define SCB_BASE            ((uint32_t)0xE000E000)


typedef __IO struct
{
    __I  uint32_t INTLINESNUM      	:4;
    	 uint32_t reserved		  	:28;
}ICTR_TypeDef;

typedef __IO struct
{
         uint32_t reserved      	:2;
    __IO uint32_t DISFOLD	      	:1;
    	 uint32_t reserved1		  	:7;
    __IO uint32_t FPEXCODIS	      	:1;
    __IO uint32_t DISRAMODE	      	:1;
    __IO uint32_t DISITMATBFLUSH   	:1;
         uint32_t reserved2	      	:19;
}ACTLR_TypeDef;


typedef __IO struct
{
    __I uint32_t Revision      		:4;
    __I uint32_t PartNo		   		:12;
    __I uint32_t Constant      		:4;
    __I uint32_t Variant       		:4;
    __I uint32_t Implementer   		:8;
}CPUID_TypeDef;

typedef __IO struct
{
    __I  uint32_t VECTACTIVE       	:9;
         uint32_t reserved     		:2;
    __I  uint32_t RETOBASE	        :1;
    __I  uint32_t VECTPENDING       :7;
         uint32_t reserved1    		:3;
    __I  uint32_t ISRPENDING        :1;
         uint32_t reserved2    		:2;
    __IO uint32_t PENDSTCLR    		:1;
    __IO uint32_t PENDSTSET    		:1;
    __IO uint32_t PENDSVCLR     	:1;
    __IO uint32_t PENDSVSET       	:1;
         uint32_t reserved3    		:2;
    __IO uint32_t NMIPENDSET       	:1;
}ICSR_TypeDef   ;

typedef __IO struct
{
         uint32_t reserved  		:9;
    __IO uint32_t OFFSET    		:21;
         uint32_t reserved1 		:2;
}VTOR_TypeDef;

typedef __IO struct
{
    __IO uint32_t VECTRESET       	:1;
    __IO uint32_t VECTCLRACTIVE     :1;
    __IO uint32_t SYSRESETREQ       :1;
         uint32_t reserved          :5;
    __IO uint32_t PRIGROUP          :3;
         uint32_t reserved1         :4;
    __I  uint32_t ENDIANESS         :1;
    __IO uint32_t VECTKEY           :16;
}AIRCR_TypeDef;




typedef __IO struct
{
         uint32_t reserved     		:1;
    __IO uint32_t SLEEPONEXIT    	:1;
    __IO uint32_t SLEEPDEEP    		:1;
         uint32_t reserved1    		:1;
    __IO uint32_t SEVONPEND    		:1;
         uint32_t reserved2    		:27;
}SCR_TypeDef;



typedef __IO struct
{
    __IO uint32_t NONBASETHRDENA    :1;
    __IO uint32_t USERSETMPEND     	:1;
         uint32_t reserved     		:1;
    __IO uint32_t UNALIGN_TRP    	:1;
    __IO uint32_t DIV_0_TRP         :1;
         uint32_t reserved1    		:3;
    __IO uint32_t BFHFNMIGN    		:1;
    __I  uint32_t STKALIGN     		:1;
         uint32_t reserved2    		:6;
    __IO uint32_t DC         		:1;
    __IO uint32_t IC         		:1;
    __I  uint32_t BP         		:1;
         uint32_t reserved3    		:13;
}CCR_TypeDef;


typedef __IO struct
{
         uint32_t reserved           :4;
    __IO uint32_t PRI0               :4;
         uint32_t reserved1          :4;
    __IO uint32_t PRI1               :4;
         uint32_t reserved2          :4;
    __IO uint32_t PRI2               :4;
         uint32_t reserved3          :4;
         uint32_t PRI3		         :4;
}SHPR__TypeDef;
typedef __IO struct
{
         uint32_t reserved          :4;
    __IO uint32_t MEM               :4;
         uint32_t reserved1         :4;
    __IO uint32_t BUS               :4;
         uint32_t reserved2         :4;
    __IO uint32_t USAGE             :4;
         uint32_t reserved3         :8;
}SHPR1_TypeDef;


typedef __IO struct
{
         uint32_t reserved     		:28 ;
    __IO uint32_t SVC          		:4;
}SHPR2_TypeDef;

typedef __IO struct
{
         uint32_t reserved     		:20;
    __IO uint32_t PENDSV       		:4;
         uint32_t reserved1    		:4;
    __IO uint32_t TICK         		:4;
}SHPR3_TypeDef;


typedef __IO struct
{
	union
	{
		__IO uint32_t	SHPR1;
		SHPR1_TypeDef	SHPR1_Bit;
	};
	union
	{
		__IO uint32_t	SHPR2;
		SHPR2_TypeDef	SHPR2_Bit;
	};
	union
	{
		__IO uint32_t	SHPR3;
		SHPR3_TypeDef	SHPR3_Bit;
	};
}SHPR_TypeDef;

typedef __IO struct
{
	SHPR__TypeDef	SHPR[3];

}SHPRw_TypeDef;

typedef __IO struct
{
    __IO uint32_t MEMFAULTACT       :1;
    __IO uint32_t BUSFAULTACT       :1;
         uint32_t reserved   		:1;
    __IO uint32_t USGFAULTACT       :1;
         uint32_t reserved1  		:3;
    __IO uint32_t SVCALLACT       	:1;
    __IO uint32_t MONITORACT        :1;
         uint32_t reserved2  		:1;
    __IO uint32_t PENDSVACT      	:1;
    __IO uint32_t SYSTICKACT      	:1;
    __IO uint32_t USGFAULTPENDED    :1;
    __IO uint32_t MEMFAULTPENDED    :1;
    __IO uint32_t BUSFAULTPENDED    :1;
    __IO uint32_t SVCALLPENDED      :1;
    __IO uint32_t MEMFAULTENA       :1;
    __IO uint32_t BUSFAULTENA       :1;
    __IO uint32_t USGFAULTENA       :1;
         uint32_t reserved3  		:13;
}SHCSR_TypeDef;

typedef __IO struct
{
    __IO uint8_t IACCVIOL       	:1;
    __IO uint8_t DACCVIOL       	:1;
         uint8_t reserved       	:1;
    __IO uint8_t MUNSTKERR			:1;
    __IO uint8_t MSTKERR			:1;
    __IO uint8_t MLSPERR			:1;
         uint8_t reserved1      	:1;
    __IO uint8_t MMARVALID			:1;
}MMFSR_TypeDef;


typedef __IO struct
{
    __IO uint8_t IBUSERR       		:1;
    __IO uint8_t PRECISERR       	:1;
    __IO uint8_t IMPRECISERR       	:1;
    __IO uint8_t UNSTKERR       	:1;
    __IO uint8_t STKERR       		:1;
    __IO uint8_t LSPERR       		:1;
         uint8_t reserved       	:1;
    __IO uint8_t BFARVALID			:1;
}BFSR_TypeDef;


typedef __IO struct
{
    __IO uint16_t UNDEFINSTR       	:1;
    __IO uint16_t INVSTATE       	:1;
    __IO uint16_t INVPC       		:1;
    __IO uint16_t NOCP       		:1;
         uint16_t reserved       	:4;
    __IO uint16_t UNALIGNED			:1;
    __IO uint16_t DIVBYZERO			:1;
         uint16_t reserved1       	:6;
}UFSR_TypeDef;

typedef __IO struct
{
	union
	{
		__IO uint8_t	MMFSR;
		MMFSR_TypeDef	MMFSR_Bit;
	};
	union
	{
		__IO uint8_t	BFSR;
		BFSR_TypeDef	BFSR_Bit;
	};
	union
	{
		__IO uint16_t	UFSR;
		UFSR_TypeDef	UFSR_Bit;
	};
}CFSR_TypeDef;


typedef __IO struct
{
         uint32_t reserved   		:1;
    __IO uint32_t VECTTBL       	:1;
         uint32_t reserved1  		:28;
    __IO uint32_t FORCED     		:1;
    __IO uint32_t DEBUG_VT        	:1;
}HFSR_TypeDef;


typedef __IO struct
{
	__IO uint32_t	HALTED	:1;
	__IO uint32_t	BKPT	:1;
	__IO uint32_t	DWTTRAP	:1;
	__IO uint32_t	VCATCH	:1;
	__IO uint32_t	EXTERNAL:1;
	     uint32_t	reserved:27;
}DFSR_TypeDef;

typedef __IO struct
{
    __IO uint32_t MMFAR       		:32;
}MMFAR_TypeDef;

typedef __IO struct
{
    __IO uint32_t BFAR       		:32;
}BFAR_TypeDef;

typedef __IO struct
{
    __IO uint32_t IMPDEF       		:32;
}AFSR_TypeDef;


typedef __IO struct
{
    uint32_t         	reserved[1U];

    union
    {
        __I  uint32_t	ICTR;
        ICTR_TypeDef	ICTR_Bit;
    };
    union
    {
        __IO uint32_t	ACTLR;
        ACTLR_TypeDef	ACTLR_Bit;
    };
    uint32_t         	reserved1[829U];
    union
    {
        __IO uint32_t  	CPUID;
        CPUID_TypeDef   CPUID_Bit;
    };
    union
    {
        __IO uint32_t 	ICSR;
        ICSR_TypeDef    ICSR_Bit;
    };
    union
    {
        __IO uint32_t   VTOR;
        VTOR_TypeDef 	VTOR_Bit;
    };
    union
    {
        __IO uint32_t 	AIRCR;
        AIRCR_TypeDef   AIRCR_Bit;
    };
    union
    {
        __IO uint32_t 	SCR;
        SCR_TypeDef     SCR_Bit;
    };
    union
    {
        __IO uint32_t   CCR;
        CCR_TypeDef    	CCR_Bit;
    };
    union
	{
    	__IO uint32_t	SHPR[3U];
    	SHPR_TypeDef	SHPRt;
	};
/*    union
    {
        __IO uint32_t  	SHPR1;
        SHPR1_TypeDef   SHPR1_Bit;
    };
    union
    {
        __IO uint32_t  	SHPR2;
        SHPR2_TypeDef   SHPR2_Bit;
    };
    union
    {
        __IO uint32_t   SHPR3;
        SHPR3_TypeDef  	SHPR3_Bit;
    };*/
    union
    {
        __IO uint32_t	SHCSR;
        SHCSR_TypeDef  	SHCSR_Bit;
    };
    union
    {
        __IO uint32_t  	CFSR;
        CFSR_TypeDef   	CFSR_Bit;
    };
    union
    {
        __IO uint32_t   HFSR;
        HFSR_TypeDef  	HFSR_Bit;
    };
    union
	{
        __IO uint32_t   DFSR;
    	DFSR_TypeDef	DFSR_Bit;
	};
    union
    {
        __IO uint32_t 	MMFAR;
        MMFAR_TypeDef   MMFAR_Bit;
    };
    union
    {
        __IO uint32_t   BFAR;
        BFAR_TypeDef   	BFAR_Bit;
    };
    union
    {
        __IO uint32_t   AFSR;
        AFSR_TypeDef   	AFSR_Bit;
    };
    __I  uint32_t ID_PFR[2U];             /*!< Offset: 0x040 (R/ )  Processor Feature Register */
    __I  uint32_t ID_DFR;                 /*!< Offset: 0x048 (R/ )  Debug Feature Register */
    __I  uint32_t ID_AFR;                 /*!< Offset: 0x04C (R/ )  Auxiliary Feature Register */
    __I  uint32_t ID_MFR[4U];             /*!< Offset: 0x050 (R/ )  Memory Model Feature Register */
    __I  uint32_t ID_ISAR[5U];            /*!< Offset: 0x060 (R/ )  Instruction Set Attributes Register */
         uint32_t reserved2[1U];


    __IO uint32_t ITCMCR;                 /*!< Offset: 0x290 (R/W)  Instruction Tightly-Coupled Memory Control Register */
    __IO uint32_t DTCMCR;                 /*!< Offset: 0x294 (R/W)  Data Tightly-Coupled Memory Control Registers */
    __IO uint32_t AHBPCR;                 /*!< Offset: 0x298 (R/W)  AHBP Control Register */
    __IO uint32_t CACR;                   /*!< Offset: 0x29C (R/W)  L1 Cache Control Register */
    __IO uint32_t AHBSCR;                 /*!< Offset: 0x2A0 (R/W)  AHB Slave Control Register */
         uint32_t RESERVED8[1U];
    __IO uint32_t ABFSR;                  /*!< Offset: 0x2A8 (R/W)  Auxiliary Bus Fault Status Register */

}SCB_TypeDef;

#define SCB                 (((SCB_TypeDef*)(SCB_BASE)))

#define SCB_ICTR_OFFSET     ((uint32_t)0x0004)
#define SCB_ACTLR_OFFSET    ((uint32_t)0x0008)
#define SCB_CPUID_OFFSET    ((uint32_t)0x0D00)
#define SCB_ICSR_OFFSET     ((uint32_t)0x0D04)
#define SCB_VTOR_OFFSET     ((uint32_t)0x0D08)
#define SCB_AIRCR_OFFSET    ((uint32_t)0x0D0C)
#define SCB_SCR_OFFSET      ((uint32_t)0x0D10)
#define SCB_CCR_OFFSET      ((uint32_t)0x0D14)
#define SCB_SHPR1_OFFSET    ((uint32_t)0x0D18)
#define SCB_SHPR2_OFFSET    ((uint32_t)0x0D1C)
#define SCB_SHPR3_OFFSET    ((uint32_t)0x0D20)
#define SCB_SHCSR_OFFSET    ((uint32_t)0x0D24)
#define SCB_CFSR_OFFSET     ((uint32_t)0x0D28)
#define SCB_MMSR_OFFSET     ((uint32_t)0x0D28)
#define SCB_BFSR_OFFSET     ((uint32_t)0x0D29)
#define SCB_UFSR_OFFSET     ((uint32_t)0x0D2A)
#define SCB_HFSR_OFFSET     ((uint32_t)0x0D2C)
#define SCB_MMAR_OFFSET     ((uint32_t)0x0D34)
#define SCB_BFAR_OFFSET     ((uint32_t)0x0D38)
#define SCB_AFSR_OFFSET     ((uint32_t)0x0D3C)


/*TODO ICTR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 ICTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_ICTR            (((ICTR_TypeDef*)(SCB_BASE+SCB_ICTR_OFFSET )))
#define SCB_ICTR_R          (*((__I uint32_t *)(SCB_BASE+SCB_ICTR_OFFSET)))

/*--------*/
#define SCB_ICTR_R_INTLINESNUM_MASK    	((uint32_t)0x00000007)
#define SCB_ICTR_R_INTLINESNUM_BIT     	(0)
#define SCB_ICTR_R_INTLINESNUM_0_32    	((uint32_t)0x00000000)
#define SCB_ICTR_R_INTLINESNUM_33_64   	((uint32_t)0x00000001)
#define SCB_ICTR_R_INTLINESNUM_65_96   	((uint32_t)0x00000002)
#define SCB_ICTR_R_INTLINESNUM_97_128   ((uint32_t)0x00000003)
#define SCB_ICTR_R_INTLINESNUM_129_160  ((uint32_t)0x00000004)
#define SCB_ICTR_R_INTLINESNUM_161_192  ((uint32_t)0x00000005)
#define SCB_ICTR_R_INTLINESNUM_193_224  ((uint32_t)0x00000006)
#define SCB_ICTR_R_INTLINESNUM_225_256  ((uint32_t)0x00000007)

#define SCB_ICTR_INTLINESNUM_MASK    	((uint32_t)0x00000007)
#define SCB_ICTR_INTLINESNUM_0_32    	((uint32_t)0x00000000)
#define SCB_ICTR_INTLINESNUM_33_64   	((uint32_t)0x00000001)
#define SCB_ICTR_INTLINESNUM_65_96   	((uint32_t)0x00000002)
#define SCB_ICTR_INTLINESNUM_97_128   	((uint32_t)0x00000003)
#define SCB_ICTR_INTLINESNUM_129_160  	((uint32_t)0x00000004)
#define SCB_ICTR_INTLINESNUM_161_192  	((uint32_t)0x00000005)
#define SCB_ICTR_INTLINESNUM_193_224  	((uint32_t)0x00000006)
#define SCB_ICTR_INTLINESNUM_225_256  	((uint32_t)0x00000007)
/*--------*/



/*TODO ACTLR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 ACTLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_ACTLR            			(((ACTLR_TypeDef*)(SCB_BASE+SCB_ACTLR_OFFSET )))
#define SCB_ACTLR_R          			(*((__IO uint32_t *)(SCB_BASE+SCB_ACTLR_OFFSET)))


/*--------*/
#define SCB_ACTLR_R_DISFOLD_MASK    	((uint32_t)0x00000004)
#define SCB_ACTLR_R_DISFOLD_BIT     	(2)
#define SCB_ACTLR_R_DISFOLD_DIS     	((uint32_t)0x00000004)
#define SCB_ACTLR_R_DISFOLD_EN      	((uint32_t)0x00000000)

#define SCB_ACTLR_DISFOLD_MASK    		((uint32_t)0x000000001)
#define SCB_ACTLR_DISFOLD_DIS     		((uint32_t)0x000000001)
#define SCB_ACTLR_DISFOLD_EN      		((uint32_t)0x000000000)
/*--------*/

/*--------*/
#define SCB_ACTLR_R_PEXCODIS_MASK    	((uint32_t)0x00000400)
#define SCB_ACTLR_R_PEXCODIS_BIT     	(10)
#define SCB_ACTLR_R_PEXCODIS_DIS     	((uint32_t)0x00000400)
#define SCB_ACTLR_R_PEXCODIS_EN      	((uint32_t)0x00000000)

#define SCB_ACTLR_FPEXCODIS_MASK    	((uint32_t)0x00000001)
#define SCB_ACTLR_FPEXCODIS_DIS     	((uint32_t)0x00000001)
#define SCB_ACTLR_FPEXCODIS_EN      	((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_ACTLR_R_DISRAMODE_MASK    	((uint32_t)0x00000800)
#define SCB_ACTLR_R_DISRAMODE_BIT     	(11)
#define SCB_ACTLR_R_DISRAMODE_DIS     	((uint32_t)0x00000800)
#define SCB_ACTLR_R_DISRAMODE_EN      	((uint32_t)0x00000000)

#define SCB_ACTLR_DISRAMODE_MASK    	((uint32_t)0x00000001)
#define SCB_ACTLR_DISRAMODE_DIS     	((uint32_t)0x00000001)
#define SCB_ACTLR_DISRAMODE_EN      	((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_ACTLR_R_DISITMATBFLUSH_MASK    	((uint32_t)0x00001000)
#define SCB_ACTLR_R_DISITMATBFLUSH_BIT     	(12)
#define SCB_ACTLR_R_DISITMATBFLUSH_DIS     	((uint32_t)0x00001000)
#define SCB_ACTLR_R_DISITMATBFLUSH_EN      	((uint32_t)0x00000000)

#define SCB_ACTLR_DISITMATBFLUSH_MASK    	((uint32_t)0x00000001)
#define SCB_ACTLR_DISITMATBFLUSH_DIS     	((uint32_t)0x00000001)
#define SCB_ACTLR_DISITMATBFLUSH_EN      	((uint32_t)0x00000000)
/*--------*/

/*TODO CPUID*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 CPUID ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_CPUID            (((CPUID_TypeDef*)(SCB_BASE+SCB_CPUID_OFFSET )))
#define SCB_CPUID_R          (*((__I uint32_t *)(SCB_BASE+SCB_CPUID_OFFSET)))

/*--------*/
#define SCB_CPUID_R_Revision_MASK    	((uint32_t)0x0000000F)
#define SCB_CPUID_R_Revision_BIT     	(0)
#define SCB_CPUID_R_Revision_rnp0    	((uint32_t)0x00000000)
#define SCB_CPUID_R_Revision_rnp1    	((uint32_t)0x00000001)
#define SCB_CPUID_R_Revision_rnp2    	((uint32_t)0x00000002)
#define SCB_CPUID_R_Revision_rnp3    	((uint32_t)0x00000003)
#define SCB_CPUID_R_Revision_rnp4    	((uint32_t)0x00000004)
#define SCB_CPUID_R_Revision_rnp5    	((uint32_t)0x00000005)
#define SCB_CPUID_R_Revision_rnp6    	((uint32_t)0x00000006)
#define SCB_CPUID_R_Revision_rnp7    	((uint32_t)0x00000007)
#define SCB_CPUID_R_Revision_rnp8    	((uint32_t)0x00000008)
#define SCB_CPUID_R_Revision_rnp9    	((uint32_t)0x00000009)
#define SCB_CPUID_R_Revision_rnp10   	((uint32_t)0x0000000A)
#define SCB_CPUID_R_Revision_rnp11   	((uint32_t)0x0000000B)
#define SCB_CPUID_R_Revision_rnp12   	((uint32_t)0x0000000C)
#define SCB_CPUID_R_Revision_rnp13   	((uint32_t)0x0000000D)
#define SCB_CPUID_R_Revision_rnp14   	((uint32_t)0x0000000E)
#define SCB_CPUID_R_Revision_rnp15   	((uint32_t)0x0000000F)


#define SCB_CPUID_Revision_MASK        	((uint32_t)0x00000000F)
#define SCB_CPUID_Revision_rnp0        	((uint32_t)0x000000000)
#define SCB_CPUID_Revision_rnp1        	((uint32_t)0x000000001)
#define SCB_CPUID_Revision_rnp2        	((uint32_t)0x000000002)
#define SCB_CPUID_Revision_rnp3        	((uint32_t)0x000000003)
#define SCB_CPUID_Revision_rnp4        	((uint32_t)0x000000004)
#define SCB_CPUID_Revision_rnp5        	((uint32_t)0x000000005)
#define SCB_CPUID_Revision_rnp6        	((uint32_t)0x000000006)
#define SCB_CPUID_Revision_rnp7        	((uint32_t)0x000000007)
#define SCB_CPUID_Revision_rnp8        	((uint32_t)0x000000008)
#define SCB_CPUID_Revision_rnp9        	((uint32_t)0x000000009)
#define SCB_CPUID_Revision_rnp10       	((uint32_t)0x00000000A)
#define SCB_CPUID_Revision_rnp11       	((uint32_t)0x00000000B)
#define SCB_CPUID_Revision_rnp12       	((uint32_t)0x00000000C)
#define SCB_CPUID_Revision_rnp13       	((uint32_t)0x00000000D)
#define SCB_CPUID_Revision_rnp14       	((uint32_t)0x00000000E)
#define SCB_CPUID_Revision_rnp15       	((uint32_t)0x00000000F)
/*--------*/

/*--------*/
#define SCB_CPUID_R_PartNo_MASK 		((uint32_t)0x0000FFF0)
#define SCB_CPUID_R_PartNo_BIT  		(4)
#define SCB_CPUID_R_PartNo_M4   		((uint32_t)0x0000C240)
#define SCB_CPUID_R_PartNo_M7   		((uint32_t)0x0000C270)

#define SCB_CPUID_PartNo_MASK    		((uint32_t)0x00000FFF)
#define SCB_CPUID_PartNo_M4      		((uint32_t)0x00000C24)
#define SCB_CPUID_PartNo_M7      		((uint32_t)0x00000C27)
/*--------*/

/*--------*/
#define SCB_CPUID_R_Constant_MASK    	((uint32_t)0x000F0000)
#define SCB_CPUID_R_Constant_BIT     	(16)
#define SCB_CPUID_R_Constant_0XF     	((uint32_t)0x000F0000)

#define SCB_CPUID_Constant_MASK    		((uint32_t)0x0000000F)
#define SCB_CPUID_Constant_0xF     		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define SCB_CPUID_R_Variant_MASK    	((uint32_t)0x00F00000)
#define SCB_CPUID_R_Variant_BIT     	(20)
#define SCB_CPUID_R_Variant_r0pn    	((uint32_t)0x00000000)
#define SCB_CPUID_R_Variant_r1pn    	((uint32_t)0x00100000)
#define SCB_CPUID_R_Variant_r2pn    	((uint32_t)0x00200000)
#define SCB_CPUID_R_Variant_r3pn    	((uint32_t)0x00300000)
#define SCB_CPUID_R_Variant_r4pn    	((uint32_t)0x00400000)
#define SCB_CPUID_R_Variant_r5pn    	((uint32_t)0x00500000)
#define SCB_CPUID_R_Variant_r6pn    	((uint32_t)0x00600000)
#define SCB_CPUID_R_Variant_r7pn    	((uint32_t)0x00700000)
#define SCB_CPUID_R_Variant_r8pn    	((uint32_t)0x00800000)
#define SCB_CPUID_R_Variant_r9pn    	((uint32_t)0x00900000)
#define SCB_CPUID_R_Variant_r10pn   	((uint32_t)0x00A00000)
#define SCB_CPUID_R_Variant_r11pn   	((uint32_t)0x00B00000)
#define SCB_CPUID_R_Variant_r12pn   	((uint32_t)0x00C00000)
#define SCB_CPUID_R_Variant_r13pn   	((uint32_t)0x00D00000)
#define SCB_CPUID_R_Variant_r14pn   	((uint32_t)0x00E00000)
#define SCB_CPUID_R_Variant_r15pn   	((uint32_t)0x00F00000)

#define SCB_CPUID_Variant_MASK        	((uint32_t)0x0000000F)
#define SCB_CPUID_Variant_r0pn        	((uint32_t)0x00000000)
#define SCB_CPUID_Variant_r1pn        	((uint32_t)0x00000001)
#define SCB_CPUID_Variant_r2pn        	((uint32_t)0x00000002)
#define SCB_CPUID_Variant_r3pn        	((uint32_t)0x00000003)
#define SCB_CPUID_Variant_r4pn        	((uint32_t)0x00000004)
#define SCB_CPUID_Variant_r5pn        	((uint32_t)0x00000005)
#define SCB_CPUID_Variant_r6pn        	((uint32_t)0x00000006)
#define SCB_CPUID_Variant_r7pn        	((uint32_t)0x00000007)
#define SCB_CPUID_Variant_r8pn        	((uint32_t)0x00000008)
#define SCB_CPUID_Variant_r9pn        	((uint32_t)0x00000009)
#define SCB_CPUID_Variant_r10pn       	((uint32_t)0x0000000A)
#define SCB_CPUID_Variant_r11pn       	((uint32_t)0x0000000B)
#define SCB_CPUID_Variant_r12pn       	((uint32_t)0x0000000C)
#define SCB_CPUID_Variant_r13pn       	((uint32_t)0x0000000D)
#define SCB_CPUID_Variant_r14pn       	((uint32_t)0x0000000E)
#define SCB_CPUID_Variant_r15pn       	((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define SCB_CPUID_R_Implementer_MASK    ((uint32_t)0xFF000000)
#define SCB_CPUID_R_Implementer_BIT     (24)
#define SCB_CPUID_R_Implementer_ARM     ((uint32_t)0x41000000)

#define SCB_CPUID_Implementer_MASK    	((uint32_t)0x000000FF)
#define SCB_CPUID_Implementer_ARM     	((uint32_t)0x00000041)
/*--------*/

/*TODO ICSR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 ICSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_ICSR            (((ICSR_TypeDef*)(SCB_BASE+SCB_ICSR_OFFSET )))
#define SCB_ICSR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_ICSR_OFFSET)))

/*--------*/
#define SCB_ICSR_R_VECACT_MASK       			((uint32_t)0x000000FF)
#define SCB_ICSR_R_VECACT_BIT        			(0)
#define SCB_ICSR_R_VECACT_THREADMODE 			((uint32_t)0x00000000)
#define SCB_ICSR_R_VECACT_RESET      			((uint32_t)0x00000001)
#define SCB_ICSR_R_VECACT_NMI        			((uint32_t)0x00000002)
#define SCB_ICSR_R_VECACT_HARDFAULT  			((uint32_t)0x00000003)
#define SCB_ICSR_R_VECACT_MEMMANAGE  			((uint32_t)0x00000004)
#define SCB_ICSR_R_VECACT_BUSFAULT   			((uint32_t)0x00000005)
#define SCB_ICSR_R_VECACT_USAGEFAULT 			((uint32_t)0x00000006)
#define SCB_ICSR_R_VECACT_RES7       			((uint32_t)0x00000007)
#define SCB_ICSR_R_VECACT_RES8       			((uint32_t)0x00000008)
#define SCB_ICSR_R_VECACT_RES9       			((uint32_t)0x00000009)
#define SCB_ICSR_R_VECACT_RES10      			((uint32_t)0x0000000A)
#define SCB_ICSR_R_VECACT_SVCALL     			((uint32_t)0x0000000B)
#define SCB_ICSR_R_VECACT_DEBUGMON   			((uint32_t)0x0000000C)
#define SCB_ICSR_R_VECACT_RES13      			((uint32_t)0x0000000D)
#define SCB_ICSR_R_VECACT_PENDSV     			((uint32_t)0x0000000E)
#define SCB_ICSR_R_VECACT_SYSTICK    			((uint32_t)0x0000000F)
#define SCB_ICSR_R_VECACT_WWDG       			((uint32_t)0x00000010)
#define SCB_ICSR_R_VECACT_PVD        			((uint32_t)0x00000011)
#define SCB_ICSR_R_VECACT_TAMP_STAMP 			((uint32_t)0x00000012)
#define SCB_ICSR_R_VECACT_RTC_WKUP		   	    ((uint32_t)0x00000013)
#define SCB_ICSR_R_VECACT_FLASH			        ((uint32_t)0x00000014)
#define SCB_ICSR_R_VECACT_RCC			        ((uint32_t)0x00000015)
#define SCB_ICSR_R_VECACT_EXTI0			        ((uint32_t)0x00000016)
#define SCB_ICSR_R_VECACT_EXTI1			        ((uint32_t)0x00000017)
#define SCB_ICSR_R_VECACT_EXTI2       		    ((uint32_t)0x00000018)
#define SCB_ICSR_R_VECACT_EXTI3			  		((uint32_t)0x00000019)
#define SCB_ICSR_R_VECACT_EXTI4      		    ((uint32_t)0x0000001A)
#define SCB_ICSR_R_VECACT_DMA1_Stream0			((uint32_t)0x0000001B)
#define SCB_ICSR_R_VECACT_DMA1_Stream1			((uint32_t)0x0000001C)
#define SCB_ICSR_R_VECACT_DMA1_Stream2			((uint32_t)0x0000001D)
#define SCB_ICSR_R_VECACT_DMA1_Stream3			((uint32_t)0x0000001E)
#define SCB_ICSR_R_VECACT_DMA1_Stream4			((uint32_t)0x0000001F)
#define SCB_ICSR_R_VECACT_DMA1_Stream5			((uint32_t)0x00000020)
#define SCB_ICSR_R_VECACT_DMA1_Stream6			((uint32_t)0x00000021)
#define SCB_ICSR_R_VECACT_ADC			      	((uint32_t)0x00000022)
#define SCB_ICSR_R_VECACT_CAN1_TX		        ((uint32_t)0x00000023)
#define SCB_ICSR_R_VECACT_CAN1_RX0		        ((uint32_t)0x00000024)
#define SCB_ICSR_R_VECACT_CAN1_RX1		    	((uint32_t)0x00000025)
#define SCB_ICSR_R_VECACT_CAN1_SCE	    		((uint32_t)0x00000026)
#define SCB_ICSR_R_VECACT_EXTI9_5   			((uint32_t)0x00000027)
#define SCB_ICSR_R_VECACT_TIM1_BRK_TIM9    		((uint32_t)0x00000028)
#define SCB_ICSR_R_VECACT_TIM1_UP_TIM10			((uint32_t)0x00000029)
#define SCB_ICSR_R_VECACT_TIM1_TRG_COM_TIM11	((uint32_t)0x0000002A)
#define SCB_ICSR_R_VECACT_TIM1_CC				((uint32_t)0x0000002B)
#define SCB_ICSR_R_VECACT_TIM2					((uint32_t)0x0000002C)
#define SCB_ICSR_R_VECACT_TIM3      			((uint32_t)0x0000002D)
#define SCB_ICSR_R_VECACT_TIM4      			((uint32_t)0x0000002E)
#define SCB_ICSR_R_VECACT_I2C1_EV     			((uint32_t)0x0000002F)
#define SCB_ICSR_R_VECACT_I2C1_ER    			((uint32_t)0x00000030)
#define SCB_ICSR_R_VECACT_I2C2_EV    			((uint32_t)0x00000031)
#define SCB_ICSR_R_VECACT_I2C2_ER    			((uint32_t)0x00000032)
#define SCB_ICSR_R_VECACT_SPI1    				((uint32_t)0x00000033)
#define SCB_ICSR_R_VECACT_SPI2    				((uint32_t)0x00000034)
#define SCB_ICSR_R_VECACT_USART1     			((uint32_t)0x00000035)
#define SCB_ICSR_R_VECACT_USART2     			((uint32_t)0x00000036)
#define SCB_ICSR_R_VECACT_USART3     			((uint32_t)0x00000037)
#define SCB_ICSR_R_VECACT_EXTI15_10   			((uint32_t)0x00000038)
#define SCB_ICSR_R_VECACT_RTC_Alarm				((uint32_t)0x00000039)
#define SCB_ICSR_R_VECACT_OTG_FS_WKUP   		((uint32_t)0x0000003A)
#define SCB_ICSR_R_VECACT_TIM8_BRK_TIM12		((uint32_t)0x0000003B)
#define SCB_ICSR_R_VECACT_TIM8_UP_TIM13			((uint32_t)0x0000003C)
#define SCB_ICSR_R_VECACT_TIM8_TRG_COM_TIM14	((uint32_t)0x0000003D)
#define SCB_ICSR_R_VECACT_TIM8_CC				((uint32_t)0x0000003E)
#define SCB_ICSR_R_VECACT_DMA1_Stream7			((uint32_t)0x0000003F)
#define SCB_ICSR_R_VECACT_FMC					((uint32_t)0x00000040)
#define SCB_ICSR_R_VECACT_SDIO					((uint32_t)0x00000041)
#define SCB_ICSR_R_VECACT_TIM5					((uint32_t)0x00000042)
#define SCB_ICSR_R_VECACT_SPI3					((uint32_t)0x00000043)
#define SCB_ICSR_R_VECACT_UART4					((uint32_t)0x00000044)
#define SCB_ICSR_R_VECACT_UART5					((uint32_t)0x00000045)
#define SCB_ICSR_R_VECACT_TIM6_DAC				((uint32_t)0x00000046)
#define SCB_ICSR_R_VECACT_TIM7					((uint32_t)0x00000047)
#define SCB_ICSR_R_VECACT_DMA2_Stream0			((uint32_t)0x00000048)
#define SCB_ICSR_R_VECACT_DMA2_Stream1			((uint32_t)0x00000049)
#define SCB_ICSR_R_VECACT_DMA2_Stream2			((uint32_t)0x0000004A)
#define SCB_ICSR_R_VECACT_DMA2_Stream3			((uint32_t)0x0000004B)
#define SCB_ICSR_R_VECACT_DMA2_Stream4			((uint32_t)0x0000004C)
#define SCB_ICSR_R_VECACT_ETH					((uint32_t)0x0000004D)
#define SCB_ICSR_R_VECACT_UETH_WKUP				((uint32_t)0x0000004E)
#define SCB_ICSR_R_VECACT_CAN2_TX				((uint32_t)0x0000004F)
#define SCB_ICSR_R_VECACT_CAN2_RX0				((uint32_t)0x00000050)
#define SCB_ICSR_R_VECACT_CAN2_RX1				((uint32_t)0x00000051)
#define SCB_ICSR_R_VECACT_CAN2_SCE				((uint32_t)0x00000052)
#define SCB_ICSR_R_VECACT_OTG_FS				((uint32_t)0x00000053)
#define SCB_ICSR_R_VECACT_DMA2_Stream5			((uint32_t)0x00000054)
#define SCB_ICSR_R_VECACT_DMA2_Stream6			((uint32_t)0x00000055)
#define SCB_ICSR_R_VECACT_DMA2_Stream7			((uint32_t)0x00000056)
#define SCB_ICSR_R_VECACT_USART6				((uint32_t)0x00000057)
#define SCB_ICSR_R_VECACT_I2C3_EV				((uint32_t)0x00000058)
#define SCB_ICSR_R_VECACT_I2C3_ER				((uint32_t)0x00000059)
#define SCB_ICSR_R_VECACT_OTG_HS_EP1_OUT		((uint32_t)0x0000005A)
#define SCB_ICSR_R_VECACT_OTG_HS_EP1_IN			((uint32_t)0x0000005B)
#define SCB_ICSR_R_VECACT_OTG_HS_WKUP			((uint32_t)0x0000005C)
#define SCB_ICSR_R_VECACT_OTG_HS				((uint32_t)0x0000005D)
#define SCB_ICSR_R_VECACT_DCMI					((uint32_t)0x0000005E)
#define SCB_ICSR_R_VECACT_RES95					((uint32_t)0x0000005F)
#define SCB_ICSR_R_VECACT_RNG		    		((uint32_t)0x00000060)
#define SCB_ICSR_R_VECACT_FPU					((uint32_t)0x00000061)
#define SCB_ICSR_R_VECACT_UART7					((uint32_t)0x00000062)
#define SCB_ICSR_R_VECACT_UART8					((uint32_t)0x00000063)
#define SCB_ICSR_R_VECACT_SPI4					((uint32_t)0x00000064)
#define SCB_ICSR_R_VECACT_SPI5					((uint32_t)0x00000065)
#define SCB_ICSR_R_VECACT_SPI6					((uint32_t)0x00000066)
#define SCB_ICSR_R_VECACT_SAI1					((uint32_t)0x00000067)
#define SCB_ICSR_R_VECACT_LTDC					((uint32_t)0x00000068)
#define SCB_ICSR_R_VECACT_LTDC_ER				((uint32_t)0x00000069)
#define SCB_ICSR_R_VECACT_DMA2D					((uint32_t)0x0000006A)
#define SCB_ICSR_R_VECACT_SAI2					((uint32_t)0x0000006B)
#define SCB_ICSR_R_VECACT_QUADSPI				((uint32_t)0x0000006C)
#define SCB_ICSR_R_VECACT_LPTIM1				((uint32_t)0x0000006D)
#define SCB_ICSR_R_VECACT_CEC   				((uint32_t)0x0000006E)
#define SCB_ICSR_R_VECACT_I2C4_EV				((uint32_t)0x0000006F)
#define SCB_ICSR_R_VECACT_I2C4_ER				((uint32_t)0x00000070)
#define SCB_ICSR_R_VECACT_SPDIF_RX				((uint32_t)0x00000071)

#define SCB_ICSR_VECACT_MASK       				((uint32_t)0x000000FF)
#define SCB_ICSR_VECACT_BIT    	    			(0)
#define SCB_ICSR_VECACT_THREADMODE	 			((uint32_t)0x00000000)
#define SCB_ICSR_VECACTESERVED   				((uint32_t)0x00000001)
#define SCB_ICSR_VECACT_NMI        				((uint32_t)0x00000002)
#define SCB_ICSR_VECACT_HARDFAULT  				((uint32_t)0x00000003)
#define SCB_ICSR_VECACT_MEMMANAGE	  			((uint32_t)0x00000004)
#define SCB_ICSR_VECACT_BUSFAULT   				((uint32_t)0x00000005)
#define SCB_ICSR_VECACT_USAGEFAULT 				((uint32_t)0x00000006)
#define SCB_ICSR_VECACTES7       				((uint32_t)0x00000007)
#define SCB_ICSR_VECACTES8  	     			((uint32_t)0x00000008)
#define SCB_ICSR_VECACTES9      	 			((uint32_t)0x00000009)
#define SCB_ICSR_VECACTES10      				((uint32_t)0x0000000A)
#define SCB_ICSR_VECACT_SVCALL     				((uint32_t)0x0000000B)
#define SCB_ICSR_VECACT_DEBUGMON   				((uint32_t)0x0000000C)
#define SCB_ICSR_VECACTES13 	     			((uint32_t)0x0000000D)
#define SCB_ICSR_VECACT_PENDSV  	   			((uint32_t)0x0000000E)
#define SCB_ICSR_VECACT_SYSTICK    				((uint32_t)0x0000000F)
#define SCB_ICSR_VECACT_WWDG       				((uint32_t)0x00000010)
#define SCB_ICSR_VECACT_PVD        				((uint32_t)0x00000011)
#define SCB_ICSR_VECACT_TAMP_STAMP 				((uint32_t)0x00000012)
#define SCB_ICSR_VECACTTC_WKUP			   	    ((uint32_t)0x00000013)
#define SCB_ICSR_VECACT_FLASH			        ((uint32_t)0x00000014)
#define SCB_ICSR_VECACTCC				        ((uint32_t)0x00000015)
#define SCB_ICSR_VECACT_EXTI0			        ((uint32_t)0x00000016)
#define SCB_ICSR_VECACT_EXTI1			        ((uint32_t)0x00000017)
#define SCB_ICSR_VECACT_EXTI2       		    ((uint32_t)0x00000018)
#define SCB_ICSR_VECACT_EXTI3			  		((uint32_t)0x00000019)
#define SCB_ICSR_VECACT_EXTI4      			    ((uint32_t)0x0000001A)
#define SCB_ICSR_VECACT_DMA1_Stream0			((uint32_t)0x0000001B)
#define SCB_ICSR_VECACT_DMA1_Stream1			((uint32_t)0x0000001C)
#define SCB_ICSR_VECACT_DMA1_Stream2			((uint32_t)0x0000001D)
#define SCB_ICSR_VECACT_DMA1_Stream3			((uint32_t)0x0000001E)
#define SCB_ICSR_VECACT_DMA1_Stream4			((uint32_t)0x0000001F)
#define SCB_ICSR_VECACT_DMA1_Stream5			((uint32_t)0x00000020)
#define SCB_ICSR_VECACT_DMA1_Stream6			((uint32_t)0x00000021)
#define SCB_ICSR_VECACT_ADC				      	((uint32_t)0x00000022)
#define SCB_ICSR_VECACT_CAN1_TX			        ((uint32_t)0x00000023)
#define SCB_ICSR_VECACT_CAN1X0		    	    ((uint32_t)0x00000024)
#define SCB_ICSR_VECACT_CAN1X1		    		((uint32_t)0x00000025)
#define SCB_ICSR_VECACT_CAN1_SCE	    		((uint32_t)0x00000026)
#define SCB_ICSR_VECACT_EXTI9_5   				((uint32_t)0x00000027)
#define SCB_ICSR_VECACT_TIM1_BRK_TIM9    		((uint32_t)0x00000028)
#define SCB_ICSR_VECACT_TIM1_UP_TIM10			((uint32_t)0x00000029)
#define SCB_ICSR_VECACT_TIM1_TRG_COM_TIM11		((uint32_t)0x0000002A)
#define SCB_ICSR_VECACT_TIM1_CC					((uint32_t)0x0000002B)
#define SCB_ICSR_VECACT_TIM2					((uint32_t)0x0000002C)
#define SCB_ICSR_VECACT_TIM3      				((uint32_t)0x0000002D)
#define SCB_ICSR_VECACT_TIM4      				((uint32_t)0x0000002E)
#define SCB_ICSR_VECACT_I2C1_EV     			((uint32_t)0x0000002F)
#define SCB_ICSR_VECACT_I2C1_ER    				((uint32_t)0x00000030)
#define SCB_ICSR_VECACT_I2C2_EV    				((uint32_t)0x00000031)
#define SCB_ICSR_VECACT_I2C2_ER	    			((uint32_t)0x00000032)
#define SCB_ICSR_VECACT_SPI1    				((uint32_t)0x00000033)
#define SCB_ICSR_VECACT_SPI2    				((uint32_t)0x00000034)
#define SCB_ICSR_VECACT_USART1 	    			((uint32_t)0x00000035)
#define SCB_ICSR_VECACT_USART2  	   			((uint32_t)0x00000036)
#define SCB_ICSR_VECACT_USART3     				((uint32_t)0x00000037)
#define SCB_ICSR_VECACT_EXTI15_10   			((uint32_t)0x00000038)
#define SCB_ICSR_VECACTTC_Alarm					((uint32_t)0x00000039)
#define SCB_ICSR_VECACT_OTG_FS_WKUP 	  		((uint32_t)0x0000003A)
#define SCB_ICSR_VECACT_TIM8_BRK_TIM12			((uint32_t)0x0000003B)
#define SCB_ICSR_VECACT_TIM8_UP_TIM13			((uint32_t)0x0000003C)
#define SCB_ICSR_VECACT_TIM8_TRG_COM_TIM14		((uint32_t)0x0000003D)
#define SCB_ICSR_VECACT_TIM8_CC					((uint32_t)0x0000003E)
#define SCB_ICSR_VECACT_DMA1_Stream7			((uint32_t)0x0000003F)
#define SCB_ICSR_VECACT_FMC						((uint32_t)0x00000040)
#define SCB_ICSR_VECACT_SDIO					((uint32_t)0x00000041)
#define SCB_ICSR_VECACT_TIM5					((uint32_t)0x00000042)
#define SCB_ICSR_VECACT_SPI3					((uint32_t)0x00000043)
#define SCB_ICSR_VECACT_UART4					((uint32_t)0x00000044)
#define SCB_ICSR_VECACT_UART5					((uint32_t)0x00000045)
#define SCB_ICSR_VECACT_TIM6_DAC				((uint32_t)0x00000046)
#define SCB_ICSR_VECACT_TIM7					((uint32_t)0x00000047)
#define SCB_ICSR_VECACT_DMA2_Stream0			((uint32_t)0x00000048)
#define SCB_ICSR_VECACT_DMA2_Stream1			((uint32_t)0x00000049)
#define SCB_ICSR_VECACT_DMA2_Stream2			((uint32_t)0x0000004A)
#define SCB_ICSR_VECACT_DMA2_Stream3			((uint32_t)0x0000004B)
#define SCB_ICSR_VECACT_DMA2_Stream4			((uint32_t)0x0000004C)
#define SCB_ICSR_VECACT_ETH						((uint32_t)0x0000004D)
#define SCB_ICSR_VECACT_UETH_WKUP				((uint32_t)0x0000004E)
#define SCB_ICSR_VECACT_CAN2_TX					((uint32_t)0x0000004F)
#define SCB_ICSR_VECACT_CAN2X0					((uint32_t)0x00000050)
#define SCB_ICSR_VECACT_CAN2X1					((uint32_t)0x00000051)
#define SCB_ICSR_VECACT_CAN2_SCE				((uint32_t)0x00000052)
#define SCB_ICSR_VECACT_OTG_FS					((uint32_t)0x00000053)
#define SCB_ICSR_VECACT_DMA2_Stream5			((uint32_t)0x00000054)
#define SCB_ICSR_VECACT_DMA2_Stream6			((uint32_t)0x00000055)
#define SCB_ICSR_VECACT_DMA2_Stream7			((uint32_t)0x00000056)
#define SCB_ICSR_VECACT_USART6					((uint32_t)0x00000057)
#define SCB_ICSR_VECACT_I2C3_EV					((uint32_t)0x00000058)
#define SCB_ICSR_VECACT_I2C3_ER					((uint32_t)0x00000059)
#define SCB_ICSR_VECACT_OTG_HS_EP1_OUT			((uint32_t)0x0000005A)
#define SCB_ICSR_VECACT_OTG_HS_EP1_IN			((uint32_t)0x0000005B)
#define SCB_ICSR_VECACT_OTG_HS_WKUP				((uint32_t)0x0000005C)
#define SCB_ICSR_VECACT_OTG_HS					((uint32_t)0x0000005D)
#define SCB_ICSR_VECACT_DCMI					((uint32_t)0x0000005E)
#define SCB_ICSR_VECACT_RES95					((uint32_t)0x0000005F)
#define SCB_ICSR_VECACT_RNG 					((uint32_t)0x00000060)
#define SCB_ICSR_VECACT_FPU						((uint32_t)0x00000061)
#define SCB_ICSR_VECACT_UART7					((uint32_t)0x00000062)
#define SCB_ICSR_VECACT_UART8					((uint32_t)0x00000063)
#define SCB_ICSR_VECACT_SPI4					((uint32_t)0x00000064)
#define SCB_ICSR_VECACT_SPI5					((uint32_t)0x00000065)
#define SCB_ICSR_VECACT_SPI6					((uint32_t)0x00000066)
#define SCB_ICSR_VECACT_SAI1					((uint32_t)0x00000067)
#define SCB_ICSR_VECACT_LTDC					((uint32_t)0x00000068)
#define SCB_ICSR_VECACT_LTDC_ER					((uint32_t)0x00000069)
#define SCB_ICSR_VECACT_DMA2D					((uint32_t)0x0000006A)
#define SCB_ICSR_VECACT_SAI2					((uint32_t)0x0000006B)
#define SCB_ICSR_VECACT_QUADSPI					((uint32_t)0x0000006C)
#define SCB_ICSR_VECACT_LPTIM1					((uint32_t)0x0000006D)
#define SCB_ICSR_VECACT_CEC   					((uint32_t)0x0000006E)
#define SCB_ICSR_VECACT_I2C4_EV					((uint32_t)0x0000006F)
#define SCB_ICSR_VECACT_I2C4_ER					((uint32_t)0x00000070)
#define SCB_ICSR_VECACT_SPDIF_RX				((uint32_t)0x00000071)
/*--------*/

/*--------*/
#define SCB_ICSR_R_RETTOBASE_MASK      			((uint32_t)0x00000800)
#define SCB_ICSR_R_RETTOBASE_BIT       			(11)
#define SCB_ICSR_R_RETTOBASE_ISR       			((uint32_t)0x00000800)
#define SCB_ICSR_R_RETTOBASE_NOISR     			((uint32_t)0x00000000)

#define SCB_ICSR_RETTOBASE_MASK      			((uint32_t)0x00000001)
#define SCB_ICSR_RETTOBASE_ISR 			      	((uint32_t)0x00000001)
#define SCB_ICSR_RETTOBASE_NOISR     			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_ICSR_R_VECPEND_MASK       			((uint32_t)0x000FF000)
#define SCB_ICSR_R_VECPEND_BIT        			(12)
#define SCB_ICSR_R_VECPEND_THREADMODE 			((uint32_t)0x00000000)
#define SCB_ICSR_R_VECPEND_RESERVED   			((uint32_t)0x00001000)
#define SCB_ICSR_R_VECPEND_NMI        			((uint32_t)0x00002000)
#define SCB_ICSR_R_VECPEND_HARDFAULT  			((uint32_t)0x00003000)
#define SCB_ICSR_R_VECPEND_MEMMANAGE  			((uint32_t)0x00004000)
#define SCB_ICSR_R_VECPEND_BUSFAULT   			((uint32_t)0x00005000)
#define SCB_ICSR_R_VECPEND_USAGEFAULT 			((uint32_t)0x00006000)
#define SCB_ICSR_R_VECPEND_RES7       			((uint32_t)0x00007000)
#define SCB_ICSR_R_VECPEND_RES8       			((uint32_t)0x00008000)
#define SCB_ICSR_R_VECPEND_RES9       			((uint32_t)0x00009000)
#define SCB_ICSR_R_VECPEND_RES10      			((uint32_t)0x0000A000)
#define SCB_ICSR_R_VECPEND_SVCALL     			((uint32_t)0x0000B000)
#define SCB_ICSR_R_VECPEND_DEBUGMON   			((uint32_t)0x0000C000)
#define SCB_ICSR_R_VECPEND_RES13      			((uint32_t)0x0000D000)
#define SCB_ICSR_R_VECPEND_PENDSV     			((uint32_t)0x0000E000)
#define SCB_ICSR_R_VECPEND_SYSTICK    			((uint32_t)0x0000F000)
#define SCB_ICSR_R_VECPEND_WWDG       			((uint32_t)0x00010000)
#define SCB_ICSR_R_VECPEND_PVD        			((uint32_t)0x00011000)
#define SCB_ICSR_R_VECPEND_TAMP_STAMP 			((uint32_t)0x00012000)
#define SCB_ICSR_R_VECPEND_RTC_WKUP		   	    ((uint32_t)0x00013000)
#define SCB_ICSR_R_VECPEND_FLASH			    ((uint32_t)0x00014000)
#define SCB_ICSR_R_VECPEND_RCC			        ((uint32_t)0x00015000)
#define SCB_ICSR_R_VECPEND_EXTI0			    ((uint32_t)0x00016000)
#define SCB_ICSR_R_VECPEND_EXTI1			    ((uint32_t)0x00017000)
#define SCB_ICSR_R_VECPEND_EXTI2       		    ((uint32_t)0x00018000)
#define SCB_ICSR_R_VECPEND_EXTI3		  		((uint32_t)0x00019000)
#define SCB_ICSR_R_VECPEND_EXTI4      		    ((uint32_t)0x0001A000)
#define SCB_ICSR_R_VECPEND_DMA1_Stream0			((uint32_t)0x0001B000)
#define SCB_ICSR_R_VECPEND_DMA1_Stream1			((uint32_t)0x0001C000)
#define SCB_ICSR_R_VECPEND_DMA1_Stream2			((uint32_t)0x0001D000)
#define SCB_ICSR_R_VECPEND_DMA1_Stream3			((uint32_t)0x0001E000)
#define SCB_ICSR_R_VECPEND_DMA1_Stream4			((uint32_t)0x0001F000)
#define SCB_ICSR_R_VECPEND_DMA1_Stream5			((uint32_t)0x00020000)
#define SCB_ICSR_R_VECPEND_DMA1_Stream6			((uint32_t)0x00021000)
#define SCB_ICSR_R_VECPEND_ADC			      	((uint32_t)0x00022000)
#define SCB_ICSR_R_VECPEND_CAN1_TX		        ((uint32_t)0x00023000)
#define SCB_ICSR_R_VECPEND_CAN1_RX0		        ((uint32_t)0x00024000)
#define SCB_ICSR_R_VECPEND_CAN1_RX1		    	((uint32_t)0x00025000)
#define SCB_ICSR_R_VECPEND_CAN1_SCE	    		((uint32_t)0x00026000)
#define SCB_ICSR_R_VECPEND_EXTI9_5   			((uint32_t)0x00027000)
#define SCB_ICSR_R_VECPEND_TIM1_BRK_TIM9   		((uint32_t)0x00028000)
#define SCB_ICSR_R_VECPEND_TIM1_UP_TIM10		((uint32_t)0x00029000)
#define SCB_ICSR_R_VECPEND_TIM1_TRG_COM_TIM11	((uint32_t)0x0002A000)
#define SCB_ICSR_R_VECPEND_TIM1_CC				((uint32_t)0x0002B000)
#define SCB_ICSR_R_VECPEND_TIM2					((uint32_t)0x0002C000)
#define SCB_ICSR_R_VECPEND_TIM3      			((uint32_t)0x0002D000)
#define SCB_ICSR_R_VECPEND_TIM4      			((uint32_t)0x0002E000)
#define SCB_ICSR_R_VECPEND_I2C1_EV     			((uint32_t)0x0002F000)
#define SCB_ICSR_R_VECPEND_I2C1_ER    			((uint32_t)0x00030000)
#define SCB_ICSR_R_VECPEND_I2C2_EV    			((uint32_t)0x00031000)
#define SCB_ICSR_R_VECPEND_I2C2_ER    			((uint32_t)0x00032000)
#define SCB_ICSR_R_VECPEND_SPI1    				((uint32_t)0x00033000)
#define SCB_ICSR_R_VECPEND_SPI2    				((uint32_t)0x00034000)
#define SCB_ICSR_R_VECPEND_USART1     			((uint32_t)0x00035000)
#define SCB_ICSR_R_VECPEND_USART2     			((uint32_t)0x00036000)
#define SCB_ICSR_R_VECPEND_USART3     			((uint32_t)0x00037000)
#define SCB_ICSR_R_VECPEND_EXTI15_10   			((uint32_t)0x00038000)
#define SCB_ICSR_R_VECPEND_RTC_Alarm			((uint32_t)0x00039000)
#define SCB_ICSR_R_VECPEND_OTG_FS_WKUP   		((uint32_t)0x0003A000)
#define SCB_ICSR_R_VECPEND_TIM8_BRK_TIM12		((uint32_t)0x0003B000)
#define SCB_ICSR_R_VECPEND_TIM8_UP_TIM13		((uint32_t)0x0003C000)
#define SCB_ICSR_R_VECPEND_TIM8_TRG_COM_TIM14	((uint32_t)0x0003D000)
#define SCB_ICSR_R_VECPEND_TIM8_CC				((uint32_t)0x0003E000)
#define SCB_ICSR_R_VECPEND_DMA1_Stream7			((uint32_t)0x0003F000)
#define SCB_ICSR_R_VECPEND_FMC					((uint32_t)0x00040000)
#define SCB_ICSR_R_VECPEND_SDIO					((uint32_t)0x00041000)
#define SCB_ICSR_R_VECPEND_TIM5					((uint32_t)0x00042000)
#define SCB_ICSR_R_VECPEND_SPI3					((uint32_t)0x00043000)
#define SCB_ICSR_R_VECPEND_UART4				((uint32_t)0x00044000)
#define SCB_ICSR_R_VECPEND_UART5				((uint32_t)0x00045000)
#define SCB_ICSR_R_VECPEND_TIM6_DAC				((uint32_t)0x00046000)
#define SCB_ICSR_R_VECPEND_TIM7					((uint32_t)0x00047000)
#define SCB_ICSR_R_VECPEND_DMA2_Stream0			((uint32_t)0x00048000)
#define SCB_ICSR_R_VECPEND_DMA2_Stream1			((uint32_t)0x00049000)
#define SCB_ICSR_R_VECPEND_DMA2_Stream2			((uint32_t)0x0004A000)
#define SCB_ICSR_R_VECPEND_DMA2_Stream3			((uint32_t)0x0004B000)
#define SCB_ICSR_R_VECPEND_DMA2_Stream4			((uint32_t)0x0004C000)
#define SCB_ICSR_R_VECPEND_ETH					((uint32_t)0x0004D000)
#define SCB_ICSR_R_VECPEND_UETH_WKUP			((uint32_t)0x0004E000)
#define SCB_ICSR_R_VECPEND_CAN2_TX				((uint32_t)0x0004F000)
#define SCB_ICSR_R_VECPEND_CAN2_RX0				((uint32_t)0x00050000)
#define SCB_ICSR_R_VECPEND_CAN2_RX1				((uint32_t)0x00051000)
#define SCB_ICSR_R_VECPEND_CAN2_SCE				((uint32_t)0x00052000)
#define SCB_ICSR_R_VECPEND_OTG_FS				((uint32_t)0x00053000)
#define SCB_ICSR_R_VECPEND_DMA2_Stream5			((uint32_t)0x00054000)
#define SCB_ICSR_R_VECPEND_DMA2_Stream6			((uint32_t)0x00055000)
#define SCB_ICSR_R_VECPEND_DMA2_Stream7			((uint32_t)0x00056000)
#define SCB_ICSR_R_VECPEND_USART6				((uint32_t)0x00057000)
#define SCB_ICSR_R_VECPEND_I2C3_EV				((uint32_t)0x00058000)
#define SCB_ICSR_R_VECPEND_I2C3_ER				((uint32_t)0x00059000)
#define SCB_ICSR_R_VECPEND_OTG_HS_EP1_OUT		((uint32_t)0x0005A000)
#define SCB_ICSR_R_VECPEND_OTG_HS_EP1_IN		((uint32_t)0x0005B000)
#define SCB_ICSR_R_VECPEND_OTG_HS_WKUP			((uint32_t)0x0005C000)
#define SCB_ICSR_R_VECPEND_OTG_HS				((uint32_t)0x0005D000)
#define SCB_ICSR_R_VECPEND_DCMI					((uint32_t)0x0005E000)
#define SCB_ICSR_R_VECPEND_RES95				((uint32_t)0x0005F000)
#define SCB_ICSR_R_VECPEND_RNG					((uint32_t)0x00060000)
#define SCB_ICSR_R_VECPEND_FPU					((uint32_t)0x00061000)
#define SCB_ICSR_R_VECPEND_UART7				((uint32_t)0x00062000)
#define SCB_ICSR_R_VECPEND_UART8				((uint32_t)0x00063000)
#define SCB_ICSR_R_VECPEND_SPI4					((uint32_t)0x00064000)
#define SCB_ICSR_R_VECPEND_SPI5					((uint32_t)0x00065000)
#define SCB_ICSR_R_VECPEND_SPI6					((uint32_t)0x00066000)
#define SCB_ICSR_R_VECPEND_SAI1					((uint32_t)0x00067000)
#define SCB_ICSR_R_VECPEND_LTDC					((uint32_t)0x00068000)
#define SCB_ICSR_R_VECPEND_LTDC_ER				((uint32_t)0x00069000)
#define SCB_ICSR_R_VECPEND_DMA2D				((uint32_t)0x0006A000)
#define SCB_ICSR_R_VECPEND_SAI2					((uint32_t)0x0006B000)
#define SCB_ICSR_R_VECPEND_QUADSPI				((uint32_t)0x0006C000)
#define SCB_ICSR_R_VECPEND_LPTIM1				((uint32_t)0x0006D000)
#define SCB_ICSR_R_VECPEND_CEC					((uint32_t)0x0006E000)
#define SCB_ICSR_R_VECPEND_I2C4_EV				((uint32_t)0x0006F000)
#define SCB_ICSR_R_VECPEND_I2C4_ER				((uint32_t)0x00070000)
#define SCB_ICSR_R_VECPEND_SPDIF_RX				((uint32_t)0x00071000)

#define SCB_ICSR_VECPEND_MASK       			((uint32_t)0x000000FF)
#define SCB_ICSR_VECPEND_BIT    	    		(0)
#define SCB_ICSR_VECPEND_THREADMODE	 			((uint32_t)0x00000000)
#define SCB_ICSR_VECPENDESERVED   				((uint32_t)0x00000001)
#define SCB_ICSR_VECPEND_NMI        			((uint32_t)0x00000002)
#define SCB_ICSR_VECPEND_HARDFAULT  			((uint32_t)0x00000003)
#define SCB_ICSR_VECPEND_MEMMANAGE	  			((uint32_t)0x00000004)
#define SCB_ICSR_VECPEND_BUSFAULT   			((uint32_t)0x00000005)
#define SCB_ICSR_VECPEND_USAGEFAULT 			((uint32_t)0x00000006)
#define SCB_ICSR_VECPENDES7       				((uint32_t)0x00000007)
#define SCB_ICSR_VECPENDES8  	     			((uint32_t)0x00000008)
#define SCB_ICSR_VECPENDES9      	 			((uint32_t)0x00000009)
#define SCB_ICSR_VECPENDES10      				((uint32_t)0x0000000A)
#define SCB_ICSR_VECPEND_SVCALL     			((uint32_t)0x0000000B)
#define SCB_ICSR_VECPEND_DEBUGMON   			((uint32_t)0x0000000C)
#define SCB_ICSR_VECPENDES13 	     			((uint32_t)0x0000000D)
#define SCB_ICSR_VECPEND_PENDSV  	   			((uint32_t)0x0000000E)
#define SCB_ICSR_VECPEND_SYSTICK    			((uint32_t)0x0000000F)
#define SCB_ICSR_VECPEND_WWDG       			((uint32_t)0x00000010)
#define SCB_ICSR_VECPEND_PVD        			((uint32_t)0x00000011)
#define SCB_ICSR_VECPEND_TAMP_STAMP 			((uint32_t)0x00000012)
#define SCB_ICSR_VECPENDTC_WKUP			   	    ((uint32_t)0x00000013)
#define SCB_ICSR_VECPEND_FLASH			        ((uint32_t)0x00000014)
#define SCB_ICSR_VECPENDCC				        ((uint32_t)0x00000015)
#define SCB_ICSR_VECPEND_EXTI0			        ((uint32_t)0x00000016)
#define SCB_ICSR_VECPEND_EXTI1			        ((uint32_t)0x00000017)
#define SCB_ICSR_VECPEND_EXTI2       		    ((uint32_t)0x00000018)
#define SCB_ICSR_VECPEND_EXTI3			  		((uint32_t)0x00000019)
#define SCB_ICSR_VECPEND_EXTI4      		    ((uint32_t)0x0000001A)
#define SCB_ICSR_VECPEND_DMA1_Stream0			((uint32_t)0x0000001B)
#define SCB_ICSR_VECPEND_DMA1_Stream1			((uint32_t)0x0000001C)
#define SCB_ICSR_VECPEND_DMA1_Stream2			((uint32_t)0x0000001D)
#define SCB_ICSR_VECPEND_DMA1_Stream3			((uint32_t)0x0000001E)
#define SCB_ICSR_VECPEND_DMA1_Stream4			((uint32_t)0x0000001F)
#define SCB_ICSR_VECPEND_DMA1_Stream5			((uint32_t)0x00000020)
#define SCB_ICSR_VECPEND_DMA1_Stream6			((uint32_t)0x00000021)
#define SCB_ICSR_VECPEND_ADC			    	((uint32_t)0x00000022)
#define SCB_ICSR_VECPEND_CAN1_TX			    ((uint32_t)0x00000023)
#define SCB_ICSR_VECPEND_CAN1X0		    	    ((uint32_t)0x00000024)
#define SCB_ICSR_VECPEND_CAN1X1		    		((uint32_t)0x00000025)
#define SCB_ICSR_VECPEND_CAN1_SCE	    		((uint32_t)0x00000026)
#define SCB_ICSR_VECPEND_EXTI9_5   				((uint32_t)0x00000027)
#define SCB_ICSR_VECPEND_TIM1_BRK_TIM9    		((uint32_t)0x00000028)
#define SCB_ICSR_VECPEND_TIM1_UP_TIM10			((uint32_t)0x00000029)
#define SCB_ICSR_VECPEND_TIM1_TRG_COM_TIM11		((uint32_t)0x0000002A)
#define SCB_ICSR_VECPEND_TIM1_CC				((uint32_t)0x0000002B)
#define SCB_ICSR_VECPEND_TIM2					((uint32_t)0x0000002C)
#define SCB_ICSR_VECPEND_TIM3      				((uint32_t)0x0000002D)
#define SCB_ICSR_VECPEND_TIM4      				((uint32_t)0x0000002E)
#define SCB_ICSR_VECPEND_I2C1_EV     			((uint32_t)0x0000002F)
#define SCB_ICSR_VECPEND_I2C1_ER    			((uint32_t)0x00000030)
#define SCB_ICSR_VECPEND_I2C2_EV    			((uint32_t)0x00000031)
#define SCB_ICSR_VECPEND_I2C2_ER	    		((uint32_t)0x00000032)
#define SCB_ICSR_VECPEND_SPI1    				((uint32_t)0x00000033)
#define SCB_ICSR_VECPEND_SPI2    				((uint32_t)0x00000034)
#define SCB_ICSR_VECPEND_USART1 	    		((uint32_t)0x00000035)
#define SCB_ICSR_VECPEND_USART2  	   			((uint32_t)0x00000036)
#define SCB_ICSR_VECPEND_USART3     			((uint32_t)0x00000037)
#define SCB_ICSR_VECPEND_EXTI15_10   			((uint32_t)0x00000038)
#define SCB_ICSR_VECPENDTC_Alarm				((uint32_t)0x00000039)
#define SCB_ICSR_VECPEND_OTG_FS_WKUP 	  		((uint32_t)0x0000003A)
#define SCB_ICSR_VECPEND_TIM8_BRK_TIM12			((uint32_t)0x0000003B)
#define SCB_ICSR_VECPEND_TIM8_UP_TIM13			((uint32_t)0x0000003C)
#define SCB_ICSR_VECPEND_TIM8_TRG_COM_TIM14		((uint32_t)0x0000003D)
#define SCB_ICSR_VECPEND_TIM8_CC				((uint32_t)0x0000003E)
#define SCB_ICSR_VECPEND_DMA1_Stream7			((uint32_t)0x0000003F)
#define SCB_ICSR_VECPEND_FMC					((uint32_t)0x00000040)
#define SCB_ICSR_VECPEND_SDIO					((uint32_t)0x00000041)
#define SCB_ICSR_VECPEND_TIM5					((uint32_t)0x00000042)
#define SCB_ICSR_VECPEND_SPI3					((uint32_t)0x00000043)
#define SCB_ICSR_VECPEND_UART4					((uint32_t)0x00000044)
#define SCB_ICSR_VECPEND_UART5					((uint32_t)0x00000045)
#define SCB_ICSR_VECPEND_TIM6_DAC				((uint32_t)0x00000046)
#define SCB_ICSR_VECPEND_TIM7					((uint32_t)0x00000047)
#define SCB_ICSR_VECPEND_DMA2_Stream0			((uint32_t)0x00000048)
#define SCB_ICSR_VECPEND_DMA2_Stream1			((uint32_t)0x00000049)
#define SCB_ICSR_VECPEND_DMA2_Stream2			((uint32_t)0x0000004A)
#define SCB_ICSR_VECPEND_DMA2_Stream3			((uint32_t)0x0000004B)
#define SCB_ICSR_VECPEND_DMA2_Stream4			((uint32_t)0x0000004C)
#define SCB_ICSR_VECPEND_ETH					((uint32_t)0x0000004D)
#define SCB_ICSR_VECPEND_UETH_WKUP				((uint32_t)0x0000004E)
#define SCB_ICSR_VECPEND_CAN2_TX				((uint32_t)0x0000004F)
#define SCB_ICSR_VECPEND_CAN2X0					((uint32_t)0x00000050)
#define SCB_ICSR_VECPEND_CAN2X1					((uint32_t)0x00000051)
#define SCB_ICSR_VECPEND_CAN2_SCE				((uint32_t)0x00000052)
#define SCB_ICSR_VECPEND_OTG_FS					((uint32_t)0x00000053)
#define SCB_ICSR_VECPEND_DMA2_Stream5			((uint32_t)0x00000054)
#define SCB_ICSR_VECPEND_DMA2_Stream6			((uint32_t)0x00000055)
#define SCB_ICSR_VECPEND_DMA2_Stream7			((uint32_t)0x00000056)
#define SCB_ICSR_VECPEND_USART6					((uint32_t)0x00000057)
#define SCB_ICSR_VECPEND_I2C3_EV				((uint32_t)0x00000058)
#define SCB_ICSR_VECPEND_I2C3_ER				((uint32_t)0x00000059)
#define SCB_ICSR_VECPEND_OTG_HS_EP1_OUT			((uint32_t)0x0000005A)
#define SCB_ICSR_VECPEND_OTG_HS_EP1_IN			((uint32_t)0x0000005B)
#define SCB_ICSR_VECPEND_OTG_HS_WKUP			((uint32_t)0x0000005C)
#define SCB_ICSR_VECPEND_OTG_HS					((uint32_t)0x0000005D)
#define SCB_ICSR_VECPEND_DCMI					((uint32_t)0x0000005E)
#define SCB_ICSR_VECPEND_RES95					((uint32_t)0x0000005F)
#define SCB_ICSR_VECPEND_RNG					((uint32_t)0x00000060)
#define SCB_ICSR_VECPEND_FPU					((uint32_t)0x00000061)
#define SCB_ICSR_VECPEND_UART7					((uint32_t)0x00000062)
#define SCB_ICSR_VECPEND_UART8					((uint32_t)0x00000063)
#define SCB_ICSR_VECPEND_SPI4					((uint32_t)0x00000064)
#define SCB_ICSR_VECPEND_SPI5					((uint32_t)0x00000065)
#define SCB_ICSR_VECPEND_SPI6					((uint32_t)0x00000066)
#define SCB_ICSR_VECPEND_SAI1					((uint32_t)0x00000067)
#define SCB_ICSR_VECPEND_LTDC					((uint32_t)0x00000068)
#define SCB_ICSR_VECPEND_LTDC_ER				((uint32_t)0x00000069)
#define SCB_ICSR_VECPEND_DMA2D					((uint32_t)0x0000006A)
#define SCB_ICSR_VECPEND_SAI2					((uint32_t)0x0000006B)
#define SCB_ICSR_VECPEND_QUADSPI				((uint32_t)0x0000006C)
#define SCB_ICSR_VECPEND_LPTIM1					((uint32_t)0x0000006D)
#define SCB_ICSR_VECPEND_CEC					((uint32_t)0x0000006E)
#define SCB_ICSR_VECPEND_I2C4_EV				((uint32_t)0x0000006F)
#define SCB_ICSR_VECPEND_I2C4_ER				((uint32_t)0x00000070)
#define SCB_ICSR_VECPEND_SPDIF_RX				((uint32_t)0x00000071)
/*--------*/

/*--------*/
#define SCB_ICSR_R_ISRPENDING_MASK      		((uint32_t)0x00400000)
#define SCB_ICSR_R_ISRPENDING_BIT       		(22)
#define SCB_ICSR_R_ISRPENDING_ISR       		((uint32_t)0x00400000)
#define SCB_ICSR_R_ISRPENDING_NOISR     		((uint32_t)0x00000000)

#define SCB_ICSR_ISRPENDING_MASK   			   	((uint32_t)0x00000001)
#define SCB_ICSR_ISRPENDING_ISR       			((uint32_t)0x00000001)
#define SCB_ICSR_ISRPENDING_NOISR     			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_ICSR_R_PENDSTCLR_MASK      			((uint32_t)0x02000000)
#define SCB_ICSR_R_PENDSTCLR_BIT       			(25)
#define SCB_ICSR_R_PENDSTCLR_REMOVE    			((uint32_t)0x02000000)
#define SCB_ICSR_R_PENDSTCLR_NOEFFECT  			((uint32_t)0x00000000)

#define SCB_ICSR_PENDSTCLR_MASK        		 	((uint32_t)0x00000001)
#define SCB_ICSR_PENDSTCLR_REMOVE       		((uint32_t)0x00000001)
#define SCB_ICSR_PENDSTCLR_NOEFFECT     		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_ICSR_R_PENDSTSET_MASK      			((uint32_t)0x04000000)
#define SCB_ICSR_R_PENDSTSET_BIT       			(26)
#define SCB_ICSR_R_PENDSTSET_PEND      			((uint32_t)0x04000000)
#define SCB_ICSR_R_PENDSTSET_NOPEND    			((uint32_t)0x00000000)
#define SCB_ICSR_R_PENDSTSET_SET       			((uint32_t)0x04000000)
#define SCB_ICSR_R_PENDSTSET_NOEFFECT  			((uint32_t)0x00000000)

#define SCB_ICSR_PENDSTSET_MASK      			((uint32_t)0x00000001)
#define SCB_ICSR_PENDSTSET_PEND      			((uint32_t)0x00000001)
#define SCB_ICSR_PENDSTSET_NOPEND    			((uint32_t)0x00000000)
#define SCB_ICSR_PENDSTSET_SET       			((uint32_t)0x00000001)
#define SCB_ICSR_PENDSTSET_NOEFFECT  			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_ICSR_R_PENDSVCLR_MASK      			((uint32_t)0x08000000)
#define SCB_ICSR_R_PENDSVCLR_BIT       			(27)
#define SCB_ICSR_R_PENDSVCLR_REMOVE    			((uint32_t)0x08000000)
#define SCB_ICSR_R_PENDSVCLR_NOEFFECT  			((uint32_t)0x00000000)

#define SCB_ICSR_PENDSVCLR_MASK      			((uint32_t)0x00000001)
#define SCB_ICSR_PENDSVCLR_REMOVE    			((uint32_t)0x00000001)
#define SCB_ICSR_PENDSVCLR_NOEFFECT  			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_ICSR_R_PENDSVSET_MASK      			((uint32_t)0x10000000)
#define SCB_ICSR_R_PENDSVSET_BIT       			(28)
#define SCB_ICSR_R_PENDSVSET_PEND      			((uint32_t)0x10000000)
#define SCB_ICSR_R_PENDSVSET_NOPEND    			((uint32_t)0x00000000)
#define SCB_ICSR_R_PENDSVSET_SET       			((uint32_t)0x10000000)
#define SCB_ICSR_R_PENDSVSET_NOEFFECT  			((uint32_t)0x00000000)

#define SCB_ICSR_PENDSVSET_MASK      			((uint32_t)0x00000001)
#define SCB_ICSR_PENDSVSET_PEND      			((uint32_t)0x00000001)
#define SCB_ICSR_PENDSVSET_NOPEND    			((uint32_t)0x00000000)
#define SCB_ICSR_PENDSVSET_SET       			((uint32_t)0x00000001)
#define SCB_ICSR_PENDSVSET_NOEFFECT  			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_ICSR_R_NMIPENDSET_MASK      		((uint32_t)0x80000000)
#define SCB_ICSR_R_NMIPENDSET_BIT       		(31)
#define SCB_ICSR_R_NMIPENDSET_PEND      		((uint32_t)0x80000000)
#define SCB_ICSR_R_NMIPENDSET_NOPEND    		((uint32_t)0x00000000)
#define SCB_ICSR_R_NMIPENDSET_SET       		((uint32_t)0x80000000)
#define SCB_ICSR_R_NMIPENDSET_NOEFFECT  		((uint32_t)0x00000000)

#define SCB_ICSR_NMIPENDSET_MASK      			((uint32_t)0x00000001)
#define SCB_ICSR_NMIPENDSET_PEND      			((uint32_t)0x00000001)
#define SCB_ICSR_NMIPENDSET_NOPEND    			((uint32_t)0x00000000)
#define SCB_ICSR_NMIPENDSET_SET       			((uint32_t)0x00000001)
#define SCB_ICSR_NMIPENDSET_NOEFFECT  			((uint32_t)0x00000000)
/*--------*/


/*TODO VTOR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 VTOR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_VTOR            (((VTOR_TypeDef*)(SCB_BASE+SCB_VTOR_TBLOFF )))
#define SCB_VTOR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_VTOR_TBLOFF)))

/*--------*/
#define SCB_VTOR_R_TBLOFF_MASK      			((uint32_t)0xFFFFFC00)
#define SCB_VTOR_R_TBLOFF_BIT       			(9)

#define SCB_VTOR_TBLOFF_MASK        			((uint32_t)0x003FFFFFF)
/*--------*/



/*TODO AIRCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 AIRCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_AIRCR            (((AIRCR_TypeDef*)(SCB_BASE+SCB_AIRCR_OFFSET )))
#define SCB_AIRCR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_AIRCR_OFFSET)))

/*--------*/
#define SCB_AIRCR_R_VECTRESET_MASK      		((uint32_t)0x00000001)
#define SCB_AIRCR_R_VECTRESET_BIT       		(0)
#define SCB_AIRCR_R_VECTRESET_NOUSE     		((uint32_t)0x00000001)
#define SCB_AIRCR_R_VECTRESET_NOEFFECT  		((uint32_t)0x00000000)

#define SCB_AIRCR_VECTRESET_MASK         		((uint32_t)0x00000001)
#define SCB_AIRCR_VECTRESET_NOUSE        		((uint32_t)0x00000001)
#define SCB_AIRCR_VECTRESET_NOEFFECT     		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_AIRCR_R_VECTCLRACTIVE_MASK      	((uint32_t)0x00000002)
#define SCB_AIRCR_R_VECTCLRACTIVE_BIT       	(1)
#define SCB_AIRCR_R_VECTCLRACTIVE_NOUSE     	((uint32_t)0x00000002)
#define SCB_AIRCR_R_VECTCLRACTIVE_NOEFFECT  	((uint32_t)0x00000000)

#define SCB_AIRCR_VECTCLRACTIVE_MASK         	((uint32_t)0x00000001)
#define SCB_AIRCR_VECTCLRACTIVE_NOUSE        	((uint32_t)0x00000001)
#define SCB_AIRCR_VECTCLRACTIVE_NOEFFECT     	((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_AIRCR_R_SYSRESETREQ_MASK      		((uint32_t)0x00000004)
#define SCB_AIRCR_R_SYSRESETREQ_BIT       		(2)
#define SCB_AIRCR_R_SYSRESETREQ_RESET     		((uint32_t)0x00000004)
#define SCB_AIRCR_R_SYSRESETREQ_NOEFFECT  		((uint32_t)0x00000000)

#define SCB_AIRCR_SYSRESETREQ_MASK         		((uint32_t)0x00000001)
#define SCB_AIRCR_SYSRESETREQ_RESET        		((uint32_t)0x00000001)
#define SCB_AIRCR_SYSRESETREQ_NOEFFECT     		((uint32_t)0x00000000)
/*--------*/

/*--------*/

typedef enum
{
	SCB_PRIGROUP_XXXXXXXY=0,
	SCB_PRIGROUP_XXXXXXYY=1,
	SCB_PRIGROUP_XXXXXYYY=2,
	SCB_PRIGROUP_XXXXYYYY=3,
	SCB_PRIGROUP_XXXYYYYY=4,
	SCB_PRIGROUP_XXYYYYYY=5,
	SCB_PRIGROUP_XYYYYYYY=6,
	SCB_PRIGROUP_YYYYYYYY=7,
}SCB_PRIGROUP_Type;

#define SCB_AIRCR_R_PRIGROUP_MASK      			((uint32_t)0x00000700)
#define SCB_AIRCR_R_PRIGROUP_BIT       			(8)
#define SCB_AIRCR_R_PRIGROUP_XXXXXXXY      		((uint32_t)0x00000000)
#define SCB_AIRCR_R_PRIGROUP_XXXXXXYY      		((uint32_t)0x00000100)
#define SCB_AIRCR_R_PRIGROUP_XXXXXYYY      		((uint32_t)0x00000200)
#define SCB_AIRCR_R_PRIGROUP_XXXXYYYY      		((uint32_t)0x00000300)
#define SCB_AIRCR_R_PRIGROUP_XXXYYYYY      		((uint32_t)0x00000400)
#define SCB_AIRCR_R_PRIGROUP_XXYYYYYY      		((uint32_t)0x00000500)
#define SCB_AIRCR_R_PRIGROUP_XYYYYYYY      		((uint32_t)0x00000600)
#define SCB_AIRCR_R_PRIGROUP_YYYYYYYY      		((uint32_t)0x00000700)

#define SCB_AIRCR_PRIGROUP_MASK      			((uint32_t)0x00000007)
#define SCB_AIRCR_PRIGROUP_XXXXXXXY       		((uint32_t)0x00000000)
#define SCB_AIRCR_PRIGROUP_XXXXXXYY    			((uint32_t)0x00000001)
#define SCB_AIRCR_PRIGROUP_XXXXXYYY       		((uint32_t)0x00000002)
#define SCB_AIRCR_PRIGROUP_XXXXYYYY       		((uint32_t)0x00000003)
#define SCB_AIRCR_PRIGROUP_XXXYYYYY       		((uint32_t)0x00000004)
#define SCB_AIRCR_PRIGROUP_XXYYYYYY       		((uint32_t)0x00000005)
#define SCB_AIRCR_PRIGROUP_XYYYYYYY       		((uint32_t)0x00000006)
#define SCB_AIRCR_PRIGROUP_YYYYYYYY       		((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define SCB_AIRCR_R_ENDIANESS_MASK      		((uint32_t)0x00008000)
#define SCB_AIRCR_R_ENDIANESS_BIT       		(15)
#define SCB_AIRCR_R_ENDIANESS_LITTLE    		((uint32_t)0x00000000)
#define SCB_AIRCR_R_ENDIANESS_BIG       		((uint32_t)0x00008000)

#define SCB_AIRCR_ENDIANESS_MASK      			((uint32_t)0x00000001)
#define SCB_AIRCR_ENDIANESS_LITTLE    			((uint32_t)0x00000000)
#define SCB_AIRCR_ENDIANESS_BIG       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_AIRCR_R_VECTKEY_MASK      			((uint32_t)0xFFFF0000)
#define SCB_AIRCR_R_VECTKEY_BIT       			(16)
#define SCB_AIRCR_R_VECTKEY_READ      			((uint32_t)0xFA050000)
#define SCB_AIRCR_R_VECTKEY_WRITE     			((uint32_t)0x05FA0000)

#define SCB_AIRCR_VECTKEY_MASK      			((uint32_t)0x0000FFFF)
#define SCB_AIRCR_VECTKEY_READ      			((uint32_t)0x0000FA05)
#define SCB_AIRCR_VECTKEY_WRITE     			((uint32_t)0x000005FA)
/*--------*/


/*TODO SCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 SCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_SCR            (((SCR_TypeDef*)(SCB_BASE+SCB_SCR_OFFSET )))
#define SCB_SCR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_SCR_OFFSET)))


//--------
#define SCB_SCR_R_SLEEPONEXIT_MASK      		((uint32_t)0x00000002)
#define SCB_SCR_R_SLEEPONEXIT_BIT       		(1)
#define SCB_SCR_R_SLEEPONEXIT_SLEEP     		((uint32_t)0x00000002)
#define SCB_SCR_R_SLEEPONEXIT_NOSLEEP   		((uint32_t)0x00000000)

#define SCB_SCR_SLEEPONEXIT_MASK         		((uint32_t)0x00000001)
#define SCB_SCR_SLEEPONEXIT_SLEEP        		((uint32_t)0x00000001)
#define SCB_SCR_SLEEPONEXIT_NOSLEEP      		((uint32_t)0x00000000)
//--------

//--------

typedef enum
{
	SCB_SLEEPDEEP_SLEEP=0,
	SCB_SLEEPDEEP_DEEPSLEEP=1,
}SCB_SLEEPDEEP_Type;

#define SCB_SCR_R_SLEEPDEEP_MASK      			((uint32_t)0x00000004)
#define SCB_SCR_R_SLEEPDEEP_BIT       			(2)
#define SCB_SCR_R_SLEEPDEEP_DEEPSLEEP 			((uint32_t)0x00000004)
#define SCB_SCR_R_SLEEPDEEP_SLEEP     			((uint32_t)0x00000000)

#define SCB_SCR_SLEEPDEEP_MASK         			((uint32_t)0x00000001)
#define SCB_SCR_SLEEPDEEP_DEEPSLEEP    			((uint32_t)0x00000001)
#define SCB_SCR_SLEEPDEEP_SLEEP        			((uint32_t)0x00000000)
//--------


//--------
#define SCB_SCR_R_SEVEONPEND_MASK      			((uint32_t)0x00000010)
#define SCB_SCR_R_SEVEONPEND_BIT       			(4)
#define SCB_SCR_R_SEVEONPEND_ALL       			((uint32_t)0x00000010)
#define SCB_SCR_R_SEVEONPEND_ONLY      			((uint32_t)0x00000000)

#define SCB_SCR_SEVEONPEND_MASK         		((uint32_t)0x00000001)
#define SCB_SCR_SEVEONPEND_ALL          		((uint32_t)0x00000001)
#define SCB_SCR_SEVEONPEND_ONLY         		((uint32_t)0x00000000)
//--------


/*TODO CCR*/

/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 CCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_CCR            (((CCR_TypeDef*)(SCB_BASE+SCB_CCR_OFFSET )))
#define SCB_CCR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_CCR_OFFSET)))

/*--------*/
#define SCB_CCR_R_NONBASETHRDENA_MASK      		((uint32_t)0x00000001)
#define SCB_CCR_R_NONBASETHRDENA_BIT       		(0)
#define SCB_CCR_R_NONBASETHRDENA_ALL       		((uint32_t)0x00000001)
#define SCB_CCR_R_NONBASETHRDENA_ONLY      		((uint32_t)0x00000000)

#define SCB_CCR_NONBASETHRDENA_MASK         	((uint32_t)0x00000001)
#define SCB_CCR_NONBASETHRDENA_ALL          	((uint32_t)0x00000001)
#define SCB_CCR_NONBASETHRDENA_ONLY         	((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_CCR_R_USERSETMPEND_MASK      		((uint32_t)0x00000002)
#define SCB_CCR_R_USERSETMPEND_BIT       		(1)
#define SCB_CCR_R_USERSETMPEND_EN        		((uint32_t)0x00000002)
#define SCB_CCR_R_USERSETMPEND_DIS       		((uint32_t)0x00000000)

#define SCB_CCR_USERSETMPEND_MASK         		((uint32_t)0x00000001)
#define SCB_CCR_USERSETMPEND_EN          		((uint32_t)0x00000001)
#define SCB_CCR_USERSETMPEND_DIS         		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_CCR_R_UNALIGN_TRP_MASK      		((uint32_t)0x00000008)
#define SCB_CCR_R_UNALIGN_TRP_BIT       		(3)
#define SCB_CCR_R_UNALIGN_TRP_TRAP      		((uint32_t)0x00000008)
#define SCB_CCR_R_UNALIGN_TRP_NOTRAP    		((uint32_t)0x00000000)

#define SCB_CCR_UNALIGN_TRP_MASK        		((uint32_t)0x00000001)
#define SCB_CCR_UNALIGN_TRP_TRAP        		((uint32_t)0x00000001)
#define SCB_CCR_UNALIGN_TRP_NOTRAP      		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_CCR_R_DIV_0_TRP_MASK      			((uint32_t)0x00000010)
#define SCB_CCR_R_DIV_0_TRP_BIT       			(4)
#define SCB_CCR_R_DIV_0_TRP_TRAP      			((uint32_t)0x00000010)
#define SCB_CCR_R_DIV_0_TRP_NOTRAP    			((uint32_t)0x00000000)

#define SCB_CCR_DIV_0_TRP_MASK        			((uint32_t)0x00000001)
#define SCB_CCR_DIV_0_TRP_TRAP        			((uint32_t)0x00000001)
#define SCB_CCR_DIV_0_TRP_NOTRAP      			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_CCR_R_BFHFNMIGN_MASK      			((uint32_t)0x00000100)
#define SCB_CCR_R_BFHFNMIGN_BIT       			(8)
#define SCB_CCR_R_BFHFNMIGN_EN        			((uint32_t)0x00000100)
#define SCB_CCR_R_BFHFNMIGN_DIS       			((uint32_t)0x00000000)

#define SCB_CCR_BFHFNMIGN_MASK        			((uint32_t)0x00000001)
#define SCB_CCR_BFHFNMIGN_EN          			((uint32_t)0x00000001)
#define SCB_CCR_BFHFNMIGN_DIS         			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_CCR_R_STKALIGN_MASK      			((uint32_t)0x00000200)
#define SCB_CCR_R_STKALIGN_BIT       			(9)
#define SCB_CCR_R_STKALIGN_8BYTE     			((uint32_t)0x00000200)
#define SCB_CCR_R_STKALIGN_4BYTE     			((uint32_t)0x00000000)

#define SCB_CCR_STKALIGN_MASK        			((uint32_t)0x00000001)
#define SCB_CCR_STKALIGN_8BYTE       			((uint32_t)0x00000001)
#define SCB_CCR_STKALIGN_4BYTE       			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_CCR_R_DC_MASK      			((uint32_t)0x00010000)
#define SCB_CCR_R_DC_BIT       			(16)
#define SCB_CCR_R_DC_EN     			((uint32_t)0x00010000)
#define SCB_CCR_R_DC_DIS     			((uint32_t)0x00000000)

#define SCB_CCR_DC_MASK        			((uint32_t)0x00000001)
#define SCB_CCR_DC_EN       			((uint32_t)0x00000001)
#define SCB_CCR_DC_DIS       			((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SCB_CCR_R_IC_MASK      			((uint32_t)0x00020000)
#define SCB_CCR_R_IC_BIT       			(17)
#define SCB_CCR_R_IC_EN     			((uint32_t)0x00020000)
#define SCB_CCR_R_IC_DIS     			((uint32_t)0x00000000)

#define SCB_CCR_IC_MASK        			((uint32_t)0x00000001)
#define SCB_CCR_IC_EN       			((uint32_t)0x00000001)
#define SCB_CCR_IC_DIS       			((uint32_t)0x00000000)
/*--------*/


/*--------*/
#define SCB_CCR_R_BP_MASK      			((uint32_t)0x00040000)
#define SCB_CCR_R_BP_BIT       			(18)
#define SCB_CCR_R_BP_EN     			((uint32_t)0x00040000)
#define SCB_CCR_R_BP_DIS     			((uint32_t)0x00000000)

#define SCB_CCR_BP_MASK        			((uint32_t)0x00000001)
#define SCB_CCR_BP_EN       			((uint32_t)0x00000001)
#define SCB_CCR_BP_DIS       			((uint32_t)0x00000000)
/*--------*/

#define SCB_SHPR            (((SHPR_TypeDef*)(SCB_BASE+SCB_SHPR1_OFFSET )))
#define SCB_SHPRw           (((SHPRw_TypeDef*)(SCB_BASE+SCB_SHPR1_OFFSET )))


/*TODO SHPR1*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 SHPR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_SHPR1            (((SHPR1_TypeDef*)(SCB_BASE+SCB_SHPR1_OFFSET )))
#define SCB_SHPR1_R          (*((__IO uint32_t *)(SCB_BASE+SCB_SHPR1_OFFSET)))


/*--------*/
#define SCB_SHPR1_R_MEM_MASK      				((uint32_t)0x000000F0)
#define SCB_SHPR1_R_MEM_BIT       				(4)
#define SCB_SHPR1_R_MEM_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR1_R_MEM_PRI1      				((uint32_t)0x00000010)
#define SCB_SHPR1_R_MEM_PRI2      				((uint32_t)0x00000020)
#define SCB_SHPR1_R_MEM_PRI3      				((uint32_t)0x00000030)
#define SCB_SHPR1_R_MEM_PRI4      				((uint32_t)0x00000040)
#define SCB_SHPR1_R_MEM_PRI5      				((uint32_t)0x00000050)
#define SCB_SHPR1_R_MEM_PRI6      				((uint32_t)0x00000060)
#define SCB_SHPR1_R_MEM_PRI7      				((uint32_t)0x00000070)
#define SCB_SHPR1_R_MEM_PRI8      				((uint32_t)0x00000080)
#define SCB_SHPR1_R_MEM_PRI9      				((uint32_t)0x00000090)
#define SCB_SHPR1_R_MEM_PRI10      				((uint32_t)0x000000A0)
#define SCB_SHPR1_R_MEM_PRI11      				((uint32_t)0x000000B0)
#define SCB_SHPR1_R_MEM_PRI12      				((uint32_t)0x000000C0)
#define SCB_SHPR1_R_MEM_PRI13      				((uint32_t)0x000000D0)
#define SCB_SHPR1_R_MEM_PRI14      				((uint32_t)0x000000E0)
#define SCB_SHPR1_R_MEM_PRI15      				((uint32_t)0x000000F0)

#define SCB_SHPR1_MEM_MASK      				((uint32_t)0x0000000F)
#define SCB_SHPR1_MEM_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR1_MEM_PRI1      				((uint32_t)0x00000001)
#define SCB_SHPR1_MEM_PRI2      				((uint32_t)0x00000002)
#define SCB_SHPR1_MEM_PRI3      				((uint32_t)0x00000003)
#define SCB_SHPR1_MEM_PRI4      				((uint32_t)0x00000004)
#define SCB_SHPR1_MEM_PRI5      				((uint32_t)0x00000005)
#define SCB_SHPR1_MEM_PRI6      				((uint32_t)0x00000006)
#define SCB_SHPR1_MEM_PRI7      				((uint32_t)0x00000007)
#define SCB_SHPR1_MEM_PRI8      				((uint32_t)0x00000008)
#define SCB_SHPR1_MEM_PRI9      				((uint32_t)0x00000009)
#define SCB_SHPR1_MEM_PRI10      				((uint32_t)0x0000000A)
#define SCB_SHPR1_MEM_PRI11      				((uint32_t)0x0000000B)
#define SCB_SHPR1_MEM_PRI12      				((uint32_t)0x0000000C)
#define SCB_SHPR1_MEM_PRI13      				((uint32_t)0x0000000D)
#define SCB_SHPR1_MEM_PRI14      				((uint32_t)0x0000000E)
#define SCB_SHPR1_MEM_PRI15      				((uint32_t)0x0000000F)
/*--------*/


/*--------*/
#define SCB_SHPR1_R_BUS_MASK      				((uint32_t)0x0000F000)
#define SCB_SHPR1_R_BUS_BIT       				(12)
#define SCB_SHPR1_R_BUS_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR1_R_BUS_PRI1      				((uint32_t)0x00001000)
#define SCB_SHPR1_R_BUS_PRI2      				((uint32_t)0x00002000)
#define SCB_SHPR1_R_BUS_PRI3      				((uint32_t)0x00003000)
#define SCB_SHPR1_R_BUS_PRI4      				((uint32_t)0x00004000)
#define SCB_SHPR1_R_BUS_PRI5      				((uint32_t)0x00005000)
#define SCB_SHPR1_R_BUS_PRI6      				((uint32_t)0x00006000)
#define SCB_SHPR1_R_BUS_PRI7      				((uint32_t)0x00007000)
#define SCB_SHPR1_R_BUS_PRI8      				((uint32_t)0x00008000)
#define SCB_SHPR1_R_BUS_PRI9      				((uint32_t)0x00009000)
#define SCB_SHPR1_R_BUS_PRI10      				((uint32_t)0x0000A000)
#define SCB_SHPR1_R_BUS_PRI11      				((uint32_t)0x0000B000)
#define SCB_SHPR1_R_BUS_PRI12      				((uint32_t)0x0000C000)
#define SCB_SHPR1_R_BUS_PRI13      				((uint32_t)0x0000D000)
#define SCB_SHPR1_R_BUS_PRI14      				((uint32_t)0x0000E000)
#define SCB_SHPR1_R_BUS_PRI15      				((uint32_t)0x0000F000)

#define SCB_SHPR1_BUS_MASK      				((uint32_t)0x0000000F)
#define SCB_SHPR1_BUS_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR1_BUS_PRI1      				((uint32_t)0x00000001)
#define SCB_SHPR1_BUS_PRI2      				((uint32_t)0x00000002)
#define SCB_SHPR1_BUS_PRI3      				((uint32_t)0x00000003)
#define SCB_SHPR1_BUS_PRI4      				((uint32_t)0x00000004)
#define SCB_SHPR1_BUS_PRI5      				((uint32_t)0x00000005)
#define SCB_SHPR1_BUS_PRI6      				((uint32_t)0x00000006)
#define SCB_SHPR1_BUS_PRI7      				((uint32_t)0x00000007)
#define SCB_SHPR1_BUS_PRI8      				((uint32_t)0x00000008)
#define SCB_SHPR1_BUS_PRI9      				((uint32_t)0x00000009)
#define SCB_SHPR1_BUS_PRI10      				((uint32_t)0x0000000A)
#define SCB_SHPR1_BUS_PRI11      				((uint32_t)0x0000000B)
#define SCB_SHPR1_BUS_PRI12      				((uint32_t)0x0000000C)
#define SCB_SHPR1_BUS_PRI13      				((uint32_t)0x0000000D)
#define SCB_SHPR1_BUS_PRI14      				((uint32_t)0x0000000E)
#define SCB_SHPR1_BUS_PRI15      				((uint32_t)0x0000000F)
/*--------*/


/*--------*/
#define SCB_SHPR1_R_USAGE_MASK      			((uint32_t)0x00F00000)
#define SCB_SHPR1_R_USAGE_BIT       			(20)
#define SCB_SHPR1_R_USAGE_PRI0      			((uint32_t)0x00000000)
#define SCB_SHPR1_R_USAGE_PRI1      			((uint32_t)0x00100000)
#define SCB_SHPR1_R_USAGE_PRI2      			((uint32_t)0x00200000)
#define SCB_SHPR1_R_USAGE_PRI3      			((uint32_t)0x00300000)
#define SCB_SHPR1_R_USAGE_PRI4      			((uint32_t)0x00400000)
#define SCB_SHPR1_R_USAGE_PRI5      			((uint32_t)0x00500000)
#define SCB_SHPR1_R_USAGE_PRI6      			((uint32_t)0x00600000)
#define SCB_SHPR1_R_USAGE_PRI7      			((uint32_t)0x00700000)
#define SCB_SHPR1_R_USAGE_PRI8      			((uint32_t)0x00800000)
#define SCB_SHPR1_R_USAGE_PRI9      			((uint32_t)0x00900000)
#define SCB_SHPR1_R_USAGE_PRI10      			((uint32_t)0x00A00000)
#define SCB_SHPR1_R_USAGE_PRI11      			((uint32_t)0x00B00000)
#define SCB_SHPR1_R_USAGE_PRI12      			((uint32_t)0x00C00000)
#define SCB_SHPR1_R_USAGE_PRI13      			((uint32_t)0x00D00000)
#define SCB_SHPR1_R_USAGE_PRI14      			((uint32_t)0x00E00000)
#define SCB_SHPR1_R_USAGE_PRI15      			((uint32_t)0x00F00000)

#define SCB_SHPR1_USAGE_MASK      				((uint32_t)0x0000000F)
#define SCB_SHPR1_USAGE_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR1_USAGE_PRI1      				((uint32_t)0x00000001)
#define SCB_SHPR1_USAGE_PRI2      				((uint32_t)0x00000002)
#define SCB_SHPR1_USAGE_PRI3      				((uint32_t)0x00000003)
#define SCB_SHPR1_USAGE_PRI4      				((uint32_t)0x00000004)
#define SCB_SHPR1_USAGE_PRI5      				((uint32_t)0x00000005)
#define SCB_SHPR1_USAGE_PRI6      				((uint32_t)0x00000006)
#define SCB_SHPR1_USAGE_PRI7      				((uint32_t)0x00000007)
#define SCB_SHPR1_USAGE_PRI8      				((uint32_t)0x00000008)
#define SCB_SHPR1_USAGE_PRI9      				((uint32_t)0x00000009)
#define SCB_SHPR1_USAGE_PRI10      				((uint32_t)0x0000000A)
#define SCB_SHPR1_USAGE_PRI11      				((uint32_t)0x0000000B)
#define SCB_SHPR1_USAGE_PRI12      				((uint32_t)0x0000000C)
#define SCB_SHPR1_USAGE_PRI13      				((uint32_t)0x0000000D)
#define SCB_SHPR1_USAGE_PRI14      				((uint32_t)0x0000000E)
#define SCB_SHPR1_USAGE_PRI15      				((uint32_t)0x0000000F)
/*--------*/


/*TODO SHPR2*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 SHPR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_SHPR2            (((SHPR2_TypeDef*)(SCB_BASE+SCB_SHPR2_OFFSET )))
#define SCB_SHPR2_R          (*((__IO uint32_t *)(SCB_BASE+SCB_SHPR2_OFFSET)))


/*--------*/
#define SCB_SHPR2_R_SVC_MASK      				((uint32_t)0xF0000000)
#define SCB_SHPR2_R_SVC_BIT       				(28)
#define SCB_SHPR2_R_SVC_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR2_R_SVC_PRI1      				((uint32_t)0x10000000)
#define SCB_SHPR2_R_SVC_PRI2      				((uint32_t)0x20000000)
#define SCB_SHPR2_R_SVC_PRI3      				((uint32_t)0x30000000)
#define SCB_SHPR2_R_SVC_PRI4      				((uint32_t)0x40000000)
#define SCB_SHPR2_R_SVC_PRI5      				((uint32_t)0x50000000)
#define SCB_SHPR2_R_SVC_PRI6      				((uint32_t)0x60000000)
#define SCB_SHPR2_R_SVC_PRI7      				((uint32_t)0x70000000)
#define SCB_SHPR2_R_SVC_PRI8      				((uint32_t)0x80000000)
#define SCB_SHPR2_R_SVC_PRI9      				((uint32_t)0x90000000)
#define SCB_SHPR2_R_SVC_PRI10      				((uint32_t)0xA0000000)
#define SCB_SHPR2_R_SVC_PRI11      				((uint32_t)0xB0000000)
#define SCB_SHPR2_R_SVC_PRI12      				((uint32_t)0xC0000000)
#define SCB_SHPR2_R_SVC_PRI13      				((uint32_t)0xD0000000)
#define SCB_SHPR2_R_SVC_PRI14      				((uint32_t)0xE0000000)
#define SCB_SHPR2_R_SVC_PRI15      				((uint32_t)0xF0000000)

#define SCB_SHPR2_SVC_MASK      				((uint32_t)0x0000000F)
#define SCB_SHPR2_SVC_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR2_SVC_PRI1      				((uint32_t)0x00000001)
#define SCB_SHPR2_SVC_PRI2      				((uint32_t)0x00000002)
#define SCB_SHPR2_SVC_PRI3      				((uint32_t)0x00000003)
#define SCB_SHPR2_SVC_PRI4      				((uint32_t)0x00000004)
#define SCB_SHPR2_SVC_PRI5      				((uint32_t)0x00000005)
#define SCB_SHPR2_SVC_PRI6      				((uint32_t)0x00000006)
#define SCB_SHPR2_SVC_PRI7      				((uint32_t)0x00000007)
#define SCB_SHPR2_SVC_PRI8      				((uint32_t)0x00000008)
#define SCB_SHPR2_SVC_PRI9      				((uint32_t)0x00000009)
#define SCB_SHPR2_SVC_PRI10      				((uint32_t)0x0000000A)
#define SCB_SHPR2_SVC_PRI11      				((uint32_t)0x0000000B)
#define SCB_SHPR2_SVC_PRI12      				((uint32_t)0x0000000C)
#define SCB_SHPR2_SVC_PRI13      				((uint32_t)0x0000000D)
#define SCB_SHPR2_SVC_PRI14      				((uint32_t)0x0000000E)
#define SCB_SHPR2_SVC_PRI15      				((uint32_t)0x0000000F)
/*--------*/

/*TODO SHPR3*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 SHPR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_SHPR3            (((SHPR3_TypeDef*)(SCB_BASE+SCB_SHPR3_OFFSET )))
#define SCB_SHPR3_R          (*((__IO uint32_t *)(SCB_BASE+SCB_SHPR3_OFFSET)))

/*--------*/
#define SCB_SHPR3_R_PENDSV_MASK      			((uint32_t)0x00F00000)
#define SCB_SHPR3_R_PENDSV_BIT       			(20)
#define SCB_SHPR3_R_PENDSV_PRI0      			((uint32_t)0x00000000)
#define SCB_SHPR3_R_PENDSV_PRI1      			((uint32_t)0x00100000)
#define SCB_SHPR3_R_PENDSV_PRI2      			((uint32_t)0x00200000)
#define SCB_SHPR3_R_PENDSV_PRI3      			((uint32_t)0x00300000)
#define SCB_SHPR3_R_PENDSV_PRI4      			((uint32_t)0x00400000)
#define SCB_SHPR3_R_PENDSV_PRI5      			((uint32_t)0x00500000)
#define SCB_SHPR3_R_PENDSV_PRI6      			((uint32_t)0x00600000)
#define SCB_SHPR3_R_PENDSV_PRI7      			((uint32_t)0x00700000)
#define SCB_SHPR3_R_PENDSV_PRI8      			((uint32_t)0x00800000)
#define SCB_SHPR3_R_PENDSV_PRI9      			((uint32_t)0x00900000)
#define SCB_SHPR3_R_PENDSV_PRI10      			((uint32_t)0x00A00000)
#define SCB_SHPR3_R_PENDSV_PRI11      			((uint32_t)0x00B00000)
#define SCB_SHPR3_R_PENDSV_PRI12      			((uint32_t)0x00C00000)
#define SCB_SHPR3_R_PENDSV_PRI13      			((uint32_t)0x00D00000)
#define SCB_SHPR3_R_PENDSV_PRI14      			((uint32_t)0x00E00000)
#define SCB_SHPR3_R_PENDSV_PRI15      			((uint32_t)0x00F00000)

#define SCB_SHPR3_PENDSV_MASK      				((uint32_t)0x0000000F)
#define SCB_SHPR3_PENDSV_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR3_PENDSV_PRI1      				((uint32_t)0x00000001)
#define SCB_SHPR3_PENDSV_PRI2      				((uint32_t)0x00000002)
#define SCB_SHPR3_PENDSV_PRI3      				((uint32_t)0x00000003)
#define SCB_SHPR3_PENDSV_PRI4      				((uint32_t)0x00000004)
#define SCB_SHPR3_PENDSV_PRI5      				((uint32_t)0x00000005)
#define SCB_SHPR3_PENDSV_PRI6      				((uint32_t)0x00000006)
#define SCB_SHPR3_PENDSV_PRI7      				((uint32_t)0x00000007)
#define SCB_SHPR3_PENDSV_PRI8      				((uint32_t)0x00000008)
#define SCB_SHPR3_PENDSV_PRI9      				((uint32_t)0x00000009)
#define SCB_SHPR3_PENDSV_PRI10     				((uint32_t)0x0000000A)
#define SCB_SHPR3_PENDSV_PRI11     				((uint32_t)0x0000000B)
#define SCB_SHPR3_PENDSV_PRI12     				((uint32_t)0x0000000C)
#define SCB_SHPR3_PENDSV_PRI13     				((uint32_t)0x0000000D)
#define SCB_SHPR3_PENDSV_PRI14     				((uint32_t)0x0000000E)
#define SCB_SHPR3_PENDSV_PRI15     				((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define SCB_SHPR3_R_TICK_MASK      				((uint32_t)0xF0000000)
#define SCB_SHPR3_R_TICK_BIT       				(28)
#define SCB_SHPR3_R_TICK_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR3_R_TICK_PRI1      				((uint32_t)0x10000000)
#define SCB_SHPR3_R_TICK_PRI2      				((uint32_t)0x20000000)
#define SCB_SHPR3_R_TICK_PRI3      				((uint32_t)0x30000000)
#define SCB_SHPR3_R_TICK_PRI4      				((uint32_t)0x40000000)
#define SCB_SHPR3_R_TICK_PRI5      				((uint32_t)0x50000000)
#define SCB_SHPR3_R_TICK_PRI6      				((uint32_t)0x60000000)
#define SCB_SHPR3_R_TICK_PRI7      				((uint32_t)0x70000000)
#define SCB_SHPR3_R_TICK_PRI8      				((uint32_t)0x80000000)
#define SCB_SHPR3_R_TICK_PRI9      				((uint32_t)0x90000000)
#define SCB_SHPR3_R_TICK_PRI10      			((uint32_t)0xA0000000)
#define SCB_SHPR3_R_TICK_PRI11      			((uint32_t)0xB0000000)
#define SCB_SHPR3_R_TICK_PRI12      			((uint32_t)0xC0000000)
#define SCB_SHPR3_R_TICK_PRI13      			((uint32_t)0xD0000000)
#define SCB_SHPR3_R_TICK_PRI14      			((uint32_t)0xE0000000)
#define SCB_SHPR3_R_TICK_PRI15      			((uint32_t)0xF0000000)

#define SCB_SHPR3_TICK_MASK      				((uint32_t)0x0000000F)
#define SCB_SHPR3_TICK_PRI0      				((uint32_t)0x00000000)
#define SCB_SHPR3_TICK_PRI1      				((uint32_t)0x00000001)
#define SCB_SHPR3_TICK_PRI2      				((uint32_t)0x00000002)
#define SCB_SHPR3_TICK_PRI3      				((uint32_t)0x00000003)
#define SCB_SHPR3_TICK_PRI4      				((uint32_t)0x00000004)
#define SCB_SHPR3_TICK_PRI5      				((uint32_t)0x00000005)
#define SCB_SHPR3_TICK_PRI6      				((uint32_t)0x00000006)
#define SCB_SHPR3_TICK_PRI7      				((uint32_t)0x00000007)
#define SCB_SHPR3_TICK_PRI8      				((uint32_t)0x00000008)
#define SCB_SHPR3_TICK_PRI9      				((uint32_t)0x00000009)
#define SCB_SHPR3_TICK_PRI10      				((uint32_t)0x0000000A)
#define SCB_SHPR3_TICK_PRI11      				((uint32_t)0x0000000B)
#define SCB_SHPR3_TICK_PRI12      				((uint32_t)0x0000000C)
#define SCB_SHPR3_TICK_PRI13      				((uint32_t)0x0000000D)
#define SCB_SHPR3_TICK_PRI14      				((uint32_t)0x0000000E)
#define SCB_SHPR3_TICK_PRI15      				((uint32_t)0x0000000F)
/*--------*/


/* TODO SHCSR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 SHCSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_SHCSR            (((SHCSR_TypeDef*)(SCB_BASE+SCB_SHCSR_OFFSET )))
#define SCB_SHCSR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_SHCSR_OFFSET)))

/*--------*/
#define SCB_SHCSR_R_MEMFAULTACT_MASK      		((uint32_t)0x00000001)
#define SCB_SHCSR_R_MEMFAULTACT_BIT       		(0)
#define SCB_SHCSR_R_MEMFAULTACT_NOACTIVE  		((uint32_t)0x00000000)
#define SCB_SHCSR_R_MEMFAULTACT_ACTIVE    		((uint32_t)0x00000001)

#define SCB_SHCSR_MEMFAULTACT_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_MEMFAULTACT_NOACTIVE    		((uint32_t)0x00000000)
#define SCB_SHCSR_MEMFAULTACT_ACTIVE      		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_BUSFAULTACT_MASK      		((uint32_t)0x00000002)
#define SCB_SHCSR_R_BUSFAULTACT_BIT       		(1)
#define SCB_SHCSR_R_BUSFAULTACT_NOACTIVE  		((uint32_t)0x00000000)
#define SCB_SHCSR_R_BUSFAULTACT_ACTIVE    		((uint32_t)0x00000002)

#define SCB_SHCSR_BUSFAULTACT_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_BUSFAULTACT_NOACTIVE    		((uint32_t)0x00000000)
#define SCB_SHCSR_BUSFAULTACT_ACTIVE      		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_USGFAULTACT_MASK      		((uint32_t)0x00000008)
#define SCB_SHCSR_R_USGFAULTACT_BIT       		(3)
#define SCB_SHCSR_R_USGFAULTACT_NOACTIVE  		((uint32_t)0x00000000)
#define SCB_SHCSR_R_USGFAULTACT_ACTIVE    		((uint32_t)0x00000008)

#define SCB_SHCSR_USGFAULTACT_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_USGFAULTACT_NOACTIVE    		((uint32_t)0x00000000)
#define SCB_SHCSR_USGFAULTACT_ACTIVE      		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_SVCALLACT_MASK      		((uint32_t)0x00000080)
#define SCB_SHCSR_R_SVCALLACT_BIT       		(7)
#define SCB_SHCSR_R_SVCALLACT_NOACTIVE  		((uint32_t)0x00000000)
#define SCB_SHCSR_R_SVCALLACT_ACTIVE    		((uint32_t)0x00000080)

#define SCB_SHCSR_SVCALLACT_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_SVCALLACT_NOACTIVE    		((uint32_t)0x00000000)
#define SCB_SHCSR_SVCALLACT_ACTIVE      		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_MONITORACT_MASK      		((uint32_t)0x00000100)
#define SCB_SHCSR_R_MONITORACT_BIT       		(8)
#define SCB_SHCSR_R_MONITORACT_NOACTIVE  		((uint32_t)0x00000000)
#define SCB_SHCSR_R_MONITORACT_ACTIVE    		((uint32_t)0x00000100)

#define SCB_SHCSR_MONITORACT_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_MONITORACT_NOACTIVE    		((uint32_t)0x00000000)
#define SCB_SHCSR_MONITORACT_ACTIVE      		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_PENDSVACT_MASK      		((uint32_t)0x00000400)
#define SCB_SHCSR_R_PENDSVACT_BIT       		(10)
#define SCB_SHCSR_R_PENDSVACT_NOACTIVE  		((uint32_t)0x00000000)
#define SCB_SHCSR_R_PENDSVACT_ACTIVE    		((uint32_t)0x00000400)

#define SCB_SHCSR_PENDSVACT_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_PENDSVACT_NOACTIVE    		((uint32_t)0x00000000)
#define SCB_SHCSR_PENDSVACT_ACTIVE      		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_SYSTICKACT_MASK      		((uint32_t)0x00000800)
#define SCB_SHCSR_R_SYSTICKACT_BIT       		(11)
#define SCB_SHCSR_R_SYSTICKACT_NOACTIVE  		((uint32_t)0x00000000)
#define SCB_SHCSR_R_SYSTICKACT_ACTIVE    		((uint32_t)0x00000800)

#define SCB_SHCSR_SYSTICKACT_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_SYSTICKACT_NOACTIVE    		((uint32_t)0x00000000)
#define SCB_SHCSR_SYSTICKACT_ACTIVE      		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_USGFAULTPENDED_MASK      	((uint32_t)0x00001000)
#define SCB_SHCSR_R_USGFAULTPENDED_BIT       	(12)
#define SCB_SHCSR_R_USGFAULTPENDED_NOPEND    	((uint32_t)0x00000000)
#define SCB_SHCSR_R_USGFAULTPENDED_PEND      	((uint32_t)0x00001000)

#define SCB_SHCSR_USGFAULTPENDED_MASK        	((uint32_t)0x00000001)
#define SCB_SHCSR_USGFAULTPENDED_NOPEND      	((uint32_t)0x00000000)
#define SCB_SHCSR_USGFAULTPENDED_PEND        	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_MEMFAULTPENDED_MASK      	((uint32_t)0x00002000)
#define SCB_SHCSR_R_MEMFAULTPENDED_BIT       	(13)
#define SCB_SHCSR_R_MEMFAULTPENDED_NOPEND    	((uint32_t)0x00000000)
#define SCB_SHCSR_R_MEMFAULTPENDED_PEND      	((uint32_t)0x00002000)

#define SCB_SHCSR_MEMFAULTPENDED_MASK        	((uint32_t)0x00000001)
#define SCB_SHCSR_MEMFAULTPENDED_NOPEND      	((uint32_t)0x00000000)
#define SCB_SHCSR_MEMFAULTPENDED_PEND        	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_BUSFAULTPENDED_MASK      	((uint32_t)0x00004000)
#define SCB_SHCSR_R_BUSFAULTPENDED_BIT       	(14)
#define SCB_SHCSR_R_BUSFAULTPENDED_NOPEND    	((uint32_t)0x00000000)
#define SCB_SHCSR_R_BUSFAULTPENDED_PEND      	((uint32_t)0x00004000)

#define SCB_SHCSR_BUSFAULTPENDED_MASK        	((uint32_t)0x00000001)
#define SCB_SHCSR_BUSFAULTPENDED_NOPEND      	((uint32_t)0x00000000)
#define SCB_SHCSR_BUSFAULTPENDED_PEND        	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_SVCALLPENDED_MASK      		((uint32_t)0x00008000)
#define SCB_SHCSR_R_SVCALLPENDED_BIT       		(15)
#define SCB_SHCSR_R_SVCALLPENDED_NOPEND    		((uint32_t)0x00000000)
#define SCB_SHCSR_R_SVCALLPENDED_PEND      		((uint32_t)0x00008000)

#define SCB_SHCSR_SVCALLPENDED_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_SVCALLPENDED_NOPEND      		((uint32_t)0x00000000)
#define SCB_SHCSR_SVCALLPENDED_PEND        		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_MEMFAULTENA_MASK      		((uint32_t)0x00010000)
#define SCB_SHCSR_R_MEMFAULTENA_BIT       		(16)
#define SCB_SHCSR_R_MEMFAULTENA_DIS       		((uint32_t)0x00000000)
#define SCB_SHCSR_R_MEMFAULTENA_EN        		((uint32_t)0x00010000)

#define SCB_SHCSR_MEMFAULTENA_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_MEMFAULTENA_DIS         		((uint32_t)0x00000000)
#define SCB_SHCSR_MEMFAULTENA_EN          		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_BUSFAULTENA_MASK      		((uint32_t)0x00020000)
#define SCB_SHCSR_R_BUSFAULTENA_BIT       		(17)
#define SCB_SHCSR_R_BUSFAULTENA_DIS       		((uint32_t)0x00000000)
#define SCB_SHCSR_R_BUSFAULTENA_EN        		((uint32_t)0x00020000)

#define SCB_SHCSR_BUSFAULTENA_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_BUSFAULTENA_DIS         		((uint32_t)0x00000000)
#define SCB_SHCSR_BUSFAULTENA_EN          		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_SHCSR_R_USGFAULTENA_MASK      		((uint32_t)0x00040000)
#define SCB_SHCSR_R_USGFAULTENA_BIT       		(18)
#define SCB_SHCSR_R_USGFAULTENA_DIS       		((uint32_t)0x00000000)
#define SCB_SHCSR_R_USGFAULTENA_EN        		((uint32_t)0x00040000)

#define SCB_SHCSR_USGFAULTENA_MASK        		((uint32_t)0x00000001)
#define SCB_SHCSR_USGFAULTENA_DIS         		((uint32_t)0x00000000)
#define SCB_SHCSR_USGFAULTENA_EN          		((uint32_t)0x00000001)
/*--------*/

/*TODO MMFSR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12.1 MMFSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_MMFSR            (((MMFSR_TypeDef*)(SCB_BASE+SCB_MMFSR_OFFSET )))
#define SCB_MMFSR_R          (*((__IO uint8_t *)(SCB_BASE+SCB_MMFSR_OFFSET)))

/*--------*/
#define SCB_MMFSR_R_IACCVIOL_MASK      			((uint32_t)0x00000001)
#define SCB_MMFSR_R_IACCVIOL_BIT       			(0)
#define SCB_MMFSR_R_IACCVIOL_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_MMFSR_R_IACCVIOL_OCCUR     			((uint32_t)0x00000001)
#define SCB_MMFSR_R_IACCVIOL_CLEAR     			((uint32_t)0x00000001)

#define SCB_MMFSR_IACCVIOL_MASK        			((uint32_t)0x00000001)
#define SCB_MMFSR_IACCVIOL_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_MMFSR_IACCVIOL_OCCUR       			((uint32_t)0x00000001)
#define SCB_MMFSR_IACCVIOL_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_MMFSR_R_DACCVIOL_MASK      			((uint32_t)0x00000002)
#define SCB_MMFSR_R_DACCVIOL_BIT       			(1)
#define SCB_MMFSR_R_DACCVIOL_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_MMFSR_R_DACCVIOL_OCCUR     			((uint32_t)0x00000002)
#define SCB_MMFSR_R_DACCVIOL_CLEAR     			((uint32_t)0x00000002)

#define SCB_MMFSR_DACCVIOL_MASK        			((uint32_t)0x00000001)
#define SCB_MMFSR_DACCVIOL_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_MMFSR_DACCVIOL_OCCUR       			((uint32_t)0x00000001)
#define SCB_MMFSR_DACCVIOL_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_MMFSR_R_MUNSTKERR_MASK      		((uint32_t)0x00000008)
#define SCB_MMFSR_R_MUNSTKERR_BIT       		(3)
#define SCB_MMFSR_R_MUNSTKERR_NOOCCUR   		((uint32_t)0x00000000)
#define SCB_MMFSR_R_MUNSTKERR_OCCUR     		((uint32_t)0x00000008)
#define SCB_MMFSR_R_MUNSTKERR_CLEAR     		((uint32_t)0x00000008)

#define SCB_MMFSR_MUNSTKERR_MASK        		((uint32_t)0x00000001)
#define SCB_MMFSR_MUNSTKERR_NOOCCUR     		((uint32_t)0x00000000)
#define SCB_MMFSR_MUNSTKERR_OCCUR       		((uint32_t)0x00000001)
#define SCB_MMFSR_MUNSTKERR_CLEAR       		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_MMFSR_R_MSTKERR_MASK      			((uint32_t)0x00000010)
#define SCB_MMFSR_R_MSTKERR_BIT       			(4)
#define SCB_MMFSR_R_MSTKERR_NOOCCUR  			((uint32_t)0x00000000)
#define SCB_MMFSR_R_MSTKERR_OCCUR     			((uint32_t)0x00000010)
#define SCB_MMFSR_R_MSTKERR_CLEAR     			((uint32_t)0x00000010)

#define SCB_MMFSR_MSTKERR_MASK        			((uint32_t)0x00000001)
#define SCB_MMFSR_MSTKERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_MMFSR_MSTKERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_MMFSR_MSTKERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_MMFSR_R_MLSPERR_MASK      			((uint32_t)0x00000020)
#define SCB_MMFSR_R_MLSPERR_BIT       			(5)
#define SCB_MMFSR_R_MLSPERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_MMFSR_R_MLSPERR_OCCUR     			((uint32_t)0x00000020)
#define SCB_MMFSR_R_MLSPERR_CLEAR     			((uint32_t)0x00000020)

#define SCB_MMFSR_MLSPERR_MASK        			((uint32_t)0x00000001)
#define SCB_MMFSR_MLSPERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_MMFSR_MLSPERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_MMFSR_MLSPERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_MMFSR_R_MMARVALID_MASK      		((uint32_t)0x00000080)
#define SCB_MMFSR_R_MMARVALID_BIT       		(7)
#define SCB_MMFSR_R_MMARVALID_NOVALID   		((uint32_t)0x00000000)
#define SCB_MMFSR_R_MMARVALID_VALID     		((uint32_t)0x00000080)
#define SCB_MMFSR_R_MMARVALID_CLEAR     		((uint32_t)0x00000080)

#define SCB_MMFSR_MMARVALID_MASK        		((uint32_t)0x00000001)
#define SCB_MMFSR_MMARVALID_NOVALID     		((uint32_t)0x00000000)
#define SCB_MMFSR_MMARVALID_VALID       		((uint32_t)0x00000001)
#define SCB_MMFSR_MMARVALID_CLEAR       		((uint32_t)0x00000001)
/*--------*/

/*TODO BFSR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12.2 BFSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_BFSR            (((BFSR_TypeDef*)(SCB_BASE+SCB_BFSR_OFFSET )))
#define SCB_BFSR_R          (*((__IO uint8_t *)(SCB_BASE+SCB_BFSR_OFFSET)))


/*--------*/
#define SCB_BFSR_R_IBUSERR_MASK      			((uint32_t)0x00000001)
#define SCB_BFSR_R_IBUSERR_BIT       			(0)
#define SCB_BFSR_R_IBUSERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_BFSR_R_IBUSERR_OCCUR     			((uint32_t)0x00000001)
#define SCB_BFSR_R_IBUSERR_CLEAR     			((uint32_t)0x00000001)

#define SCB_BFSR_IBUSERR_MASK        			((uint32_t)0x00000001)
#define SCB_BFSR_IBUSERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_BFSR_IBUSERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_BFSR_IBUSERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_BFSR_R_PRECISERR_MASK      			((uint32_t)0x00000002)
#define SCB_BFSR_R_PRECISERR_BIT       			(1)
#define SCB_BFSR_R_PRECISERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_BFSR_R_PRECISERR_OCCUR     			((uint32_t)0x00000002)
#define SCB_BFSR_R_PRECISERR_CLEAR     			((uint32_t)0x00000002)

#define SCB_BFSR_PRECISERR_MASK        			((uint32_t)0x00000001)
#define SCB_BFSR_PRECISERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_BFSR_PRECISERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_BFSR_PRECISERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_BFSR_R_IMPRECISERR_MASK      		((uint32_t)0x00000004)
#define SCB_BFSR_R_IMPRECISERR_BIT       		(2)
#define SCB_BFSR_R_IMPRECISERR_NOOCCUR   		((uint32_t)0x00000000)
#define SCB_BFSR_R_IMPRECISERR_OCCUR     		((uint32_t)0x00000004)
#define SCB_BFSR_R_IMPRECISERR_CLEAR     		((uint32_t)0x00000004)

#define SCB_BFSR_IMPRECISERR_MASK        		((uint32_t)0x00000001)
#define SCB_BFSR_IMPRECISERR_NOOCCUR     		((uint32_t)0x00000000)
#define SCB_BFSR_IMPRECISERR_OCCUR       		((uint32_t)0x00000001)
#define SCB_BFSR_IMPRECISERR_CLEAR       		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_BFSR_R_UNSTKERR_MASK      			((uint32_t)0x00000008)
#define SCB_BFSR_R_UNSTKERR_BIT       			(3)
#define SCB_BFSR_R_UNSTKERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_BFSR_R_UNSTKERR_OCCUR     			((uint32_t)0x00000008)
#define SCB_BFSR_R_UNSTKERR_CLEAR     			((uint32_t)0x00000008)

#define SCB_BFSR_UNSTKERR_MASK        			((uint32_t)0x00000001)
#define SCB_BFSR_UNSTKERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_BFSR_UNSTKERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_BFSR_UNSTKERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_BFSR_R_STKERR_MASK      			((uint32_t)0x00000010)
#define SCB_BFSR_R_STKERR_BIT       			(4)
#define SCB_BFSR_R_STKERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_BFSR_R_STKERR_OCCUR     			((uint32_t)0x00000010)
#define SCB_BFSR_R_STKERR_CLEAR     			((uint32_t)0x00000010)

#define SCB_BFSR_STKERR_MASK        			((uint32_t)0x00000001)
#define SCB_BFSR_STKERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_BFSR_STKERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_BFSR_STKERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_BFSR_R_LSPERR_MASK      			((uint32_t)0x00000020)
#define SCB_BFSR_R_LSPERR_BIT       			(5)
#define SCB_BFSR_R_LSPERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_BFSR_R_LSPERR_OCCUR     			((uint32_t)0x00000020)
#define SCB_BFSR_R_LSPERR_CLEAR     			((uint32_t)0x00000020)

#define SCB_BFSR_LSPERR_MASK        			((uint32_t)0x00000001)
#define SCB_BFSR_LSPERR_NOOCCUR    			 	((uint32_t)0x00000000)
#define SCB_BFSR_LSPERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_BFSR_LSPERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_BFSR_R_BFARVALID_MASK      			((uint32_t)0x00000080)
#define SCB_BFSR_R_BFARVALID_BIT       			(7)
#define SCB_BFSR_R_BFARVALID_NOVALID   			((uint32_t)0x00000000)
#define SCB_BFSR_R_BFARVALID_VALID     			((uint32_t)0x00000080)
#define SCB_BFSR_R_BFARVALID_CLEAR     			((uint32_t)0x00000080)

#define SCB_BFSR_BFARVALID_MASK        			((uint32_t)0x00000001)
#define SCB_BFSR_BFARVALID_NOVALID     			((uint32_t)0x00000000)
#define SCB_BFSR_BFARVALID_VALID       			((uint32_t)0x00000001)
#define SCB_BFSR_BFARVALID_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*TODO UFSR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12.3 UFSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_UFSR            (((UFSR_TypeDef*)(SCB_BASE+SCB_UFSR_OFFSET )))
#define SCB_UFSR_R          (*((__IO uint16_t *)(SCB_BASE+SCB_UFSR_OFFSET)))

/*--------*/
#define SCB_UFSR_R_UNDEFINSTR_MASK      		((uint32_t)0x00000001)
#define SCB_UFSR_R_UNDEFINSTR_BIT       		(0)
#define SCB_UFSR_R_UNDEFINSTR_NOOCCUR   		((uint32_t)0x00000000)
#define SCB_UFSR_R_UNDEFINSTR_OCCUR     		((uint32_t)0x00000001)
#define SCB_UFSR_R_UNDEFINSTR_CLEAR     		((uint32_t)0x00000001)

#define SCB_UFSR_UNDEFINSTR_MASK        		((uint32_t)0x00000001)
#define SCB_UFSR_UNDEFINSTR_NOOCCUR     		((uint32_t)0x00000000)
#define SCB_UFSR_UNDEFINSTR_OCCUR       		((uint32_t)0x00000001)
#define SCB_UFSR_UNDEFINSTR_CLEAR       		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_UFSR_R_INVSTATE_MASK      			((uint32_t)0x00000002)
#define SCB_UFSR_R_INVSTATE_BIT       			(1)
#define SCB_UFSR_R_INVSTATE_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_UFSR_R_INVSTATE_OCCUR     			((uint32_t)0x00000002)
#define SCB_UFSR_R_INVSTATE_CLEAR     			((uint32_t)0x00000002)

#define SCB_UFSR_INVSTATE_MASK        			((uint32_t)0x00000001)
#define SCB_UFSR_INVSTATE_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_UFSR_INVSTATE_OCCUR       			((uint32_t)0x00000001)
#define SCB_UFSR_INVSTATE_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_UFSR_R_INVPC_MASK      				((uint32_t)0x00000004)
#define SCB_UFSR_R_INVPC_BIT       				(2)
#define SCB_UFSR_R_INVPC_NOOCCUR   				((uint32_t)0x00000000)
#define SCB_UFSR_R_INVPC_OCCUR     				((uint32_t)0x00000004)
#define SCB_UFSR_R_INVPC_CLEAR     				((uint32_t)0x00000004)

#define SCB_UFSR_INVPC_MASK        				((uint32_t)0x00000001)
#define SCB_UFSR_INVPC_NOOCCUR     				((uint32_t)0x00000000)
#define SCB_UFSR_INVPC_OCCUR       				((uint32_t)0x00000001)
#define SCB_UFSR_INVPC_CLEAR       				((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_UFSR_R_NOCP_MASK      				((uint32_t)0x00000008)
#define SCB_UFSR_R_NOCP_BIT       				(3)
#define SCB_UFSR_R_NOCP_NOOCCUR   				((uint32_t)0x00000000)
#define SCB_UFSR_R_NOCP_OCCUR     				((uint32_t)0x00000008)
#define SCB_UFSR_R_NOCP_CLEAR     				((uint32_t)0x00000008)

#define SCB_UFSR_NOCP_MASK        				((uint32_t)0x00000001)
#define SCB_UFSR_NOCP_NOOCCUR     				((uint32_t)0x00000000)
#define SCB_UFSR_NOCP_OCCUR       				((uint32_t)0x00000001)
#define SCB_UFSR_NOCP_CLEAR       				((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_UFSR_R_UNALIGNED_MASK      			((uint32_t)0x00000100)
#define SCB_UFSR_R_UNALIGNED_BIT       			(8)
#define SCB_UFSR_R_UNALIGNED_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_UFSR_R_UNALIGNED_OCCUR     			((uint32_t)0x00000100)
#define SCB_UFSR_R_UNALIGNED_CLEAR     			((uint32_t)0x00000100)

#define SCB_UFSR_UNALIGNED_MASK        			((uint32_t)0x00000001)
#define SCB_UFSR_UNALIGNED_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_UFSR_UNALIGNED_OCCUR       			((uint32_t)0x00000001)
#define SCB_UFSR_UNALIGNED_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_UFSR_R_DIVBYZERO_MASK      			((uint32_t)0x00000200)
#define SCB_UFSR_R_DIVBYZERO_BIT       			(9)
#define SCB_UFSR_R_DIVBYZERO_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_UFSR_R_DIVBYZERO_OCCUR     			((uint32_t)0x00000200)
#define SCB_UFSR_R_DIVBYZERO_CLEAR     			((uint32_t)0x00000200)

#define SCB_UFSR_DIVBYZERO_MASK        			((uint32_t)0x00000001)
#define SCB_UFSR_DIVBYZERO_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_UFSR_DIVBYZERO_OCCUR       			((uint32_t)0x00000001)
#define SCB_UFSR_DIVBYZERO_CLEAR       			((uint32_t)0x00000001)
/*--------*/




/*TODO CFSR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 CFSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_CFSR            (((CFSR_TypeDef*)(SCB_BASE+SCB_CFSR_OFFSET )))
#define SCB_CFSR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_CFSR_OFFSET)))

/*--------*/
#define SCB_CFSR_R_IACCVIOL_MASK      			((uint32_t)0x00000001)
#define SCB_CFSR_R_IACCVIOL_BIT       			(0)
#define SCB_CFSR_R_IACCVIOL_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_IACCVIOL_OCCUR     			((uint32_t)0x00000001)
#define SCB_CFSR_R_IACCVIOL_CLEAR     			((uint32_t)0x00000001)

#define SCB_CFSR_IACCVIOL_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_IACCVIOL_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_IACCVIOL_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_IACCVIOL_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_DACCVIOL_MASK      			((uint32_t)0x00000002)
#define SCB_CFSR_R_DACCVIOL_BIT       			(1)
#define SCB_CFSR_R_DACCVIOL_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_DACCVIOL_OCCUR     			((uint32_t)0x00000002)
#define SCB_CFSR_R_DACCVIOL_CLEAR     			((uint32_t)0x00000002)

#define SCB_CFSR_DACCVIOL_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_DACCVIOL_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_DACCVIOL_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_DACCVIOL_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_MUNSTKERR_MASK      			((uint32_t)0x00000008)
#define SCB_CFSR_R_MUNSTKERR_BIT       			(3)
#define SCB_CFSR_R_MUNSTKERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_MUNSTKERR_OCCUR     			((uint32_t)0x00000008)
#define SCB_CFSR_R_MUNSTKERR_CLEAR     			((uint32_t)0x00000008)

#define SCB_CFSR_MUNSTKERR_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_MUNSTKERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_MUNSTKERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_MUNSTKERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_MSTKERR_MASK      			((uint32_t)0x00000010)
#define SCB_CFSR_R_MSTKERR_BIT       			(4)
#define SCB_CFSR_R_MSTKERR_NOOCCUR  			((uint32_t)0x00000000)
#define SCB_CFSR_R_MSTKERR_OCCUR     			((uint32_t)0x00000010)
#define SCB_CFSR_R_MSTKERR_CLEAR     			((uint32_t)0x00000010)

#define SCB_CFSR_MSTKERR_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_MSTKERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_MSTKERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_MSTKERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_MLSPERR_MASK      			((uint32_t)0x00000020)
#define SCB_CFSR_R_MLSPERR_BIT       			(5)
#define SCB_CFSR_R_MLSPERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_MLSPERR_OCCUR     			((uint32_t)0x00000020)
#define SCB_CFSR_R_MLSPERR_CLEAR     			((uint32_t)0x00000020)

#define SCB_CFSR_MLSPERR_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_MLSPERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_MLSPERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_MLSPERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_MMARVALID_MASK      			((uint32_t)0x00000080)
#define SCB_CFSR_R_MMARVALID_BIT       			(7)
#define SCB_CFSR_R_MMARVALID_NOVALID   			((uint32_t)0x00000000)
#define SCB_CFSR_R_MMARVALID_VALID     			((uint32_t)0x00000080)
#define SCB_CFSR_R_MMARVALID_CLEAR     			((uint32_t)0x00000080)

#define SCB_CFSR_MMARVALID_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_MMARVALID_NOVALID     			((uint32_t)0x00000000)
#define SCB_CFSR_MMARVALID_VALID       			((uint32_t)0x00000001)
#define SCB_CFSR_MMARVALID_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_IBUSERR_MASK      			((uint32_t)0x00000100)
#define SCB_CFSR_R_IBUSERR_BIT       			(8)
#define SCB_CFSR_R_IBUSERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_IBUSERR_OCCUR     			((uint32_t)0x00000100)
#define SCB_CFSR_R_IBUSERR_CLEAR     			((uint32_t)0x00000100)

#define SCB_CFSR_IBUSERR_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_IBUSERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_IBUSERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_IBUSERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_PRECISERR_MASK      			((uint32_t)0x00000200)
#define SCB_CFSR_R_PRECISERR_BIT       			(9)
#define SCB_CFSR_R_PRECISERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_PRECISERR_OCCUR     			((uint32_t)0x00000200)
#define SCB_CFSR_R_PRECISERR_CLEAR     			((uint32_t)0x00000200)

#define SCB_CFSR_PRECISERR_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_PRECISERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_PRECISERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_PRECISERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_IMPRECISERR_MASK      		((uint32_t)0x00000400)
#define SCB_CFSR_R_IMPRECISERR_BIT       		(10)
#define SCB_CFSR_R_IMPRECISERR_NOOCCUR   		((uint32_t)0x00000000)
#define SCB_CFSR_R_IMPRECISERR_OCCUR     		((uint32_t)0x00000400)
#define SCB_CFSR_R_IMPRECISERR_CLEAR     		((uint32_t)0x00000400)

#define SCB_CFSR_IMPRECISERR_MASK        		((uint32_t)0x00000001)
#define SCB_CFSR_IMPRECISERR_NOOCCUR     		((uint32_t)0x00000000)
#define SCB_CFSR_IMPRECISERR_OCCUR       		((uint32_t)0x00000001)
#define SCB_CFSR_IMPRECISERR_CLEAR       		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_UNSTKERR_MASK      			((uint32_t)0x00000800)
#define SCB_CFSR_R_UNSTKERR_BIT       			(11)
#define SCB_CFSR_R_UNSTKERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_UNSTKERR_OCCUR     			((uint32_t)0x00000800)
#define SCB_CFSR_R_UNSTKERR_CLEAR     			((uint32_t)0x00000800)

#define SCB_CFSR_UNSTKERR_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_UNSTKERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_UNSTKERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_UNSTKERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_STKERR_MASK      			((uint32_t)0x00001000)
#define SCB_CFSR_R_STKERR_BIT       			(12)
#define SCB_CFSR_R_STKERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_STKERR_OCCUR     			((uint32_t)0x00001000)
#define SCB_CFSR_R_STKERR_CLEAR     			((uint32_t)0x00001000)

#define SCB_CFSR_STKERR_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_STKERR_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_STKERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_STKERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_LSPERR_MASK      			((uint32_t)0x00002000)
#define SCB_CFSR_R_LSPERR_BIT       			(13)
#define SCB_CFSR_R_LSPERR_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_LSPERR_OCCUR     			((uint32_t)0x00002000)
#define SCB_CFSR_R_LSPERR_CLEAR     			((uint32_t)0x00002000)

#define SCB_CFSR_LSPERR_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_LSPERR_NOOCCUR    			 	((uint32_t)0x00000000)
#define SCB_CFSR_LSPERR_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_LSPERR_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_BFARVALID_MASK      			((uint32_t)0x00008000)
#define SCB_CFSR_R_BFARVALID_BIT       			(15)
#define SCB_CFSR_R_BFARVALID_NOVALID   			((uint32_t)0x00000000)
#define SCB_CFSR_R_BFARVALID_VALID     			((uint32_t)0x00008000)
#define SCB_CFSR_R_BFARVALID_CLEAR     			((uint32_t)0x00008000)

#define SCB_CFSR_BFARVALID_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_BFARVALID_NOVALID     			((uint32_t)0x00000000)
#define SCB_CFSR_BFARVALID_VALID       			((uint32_t)0x00000001)
#define SCB_CFSR_BFARVALID_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_UNDEFINSTR_MASK      		((uint32_t)0x00010000)
#define SCB_CFSR_R_UNDEFINSTR_BIT       		(16)
#define SCB_CFSR_R_UNDEFINSTR_NOOCCUR   		((uint32_t)0x00000000)
#define SCB_CFSR_R_UNDEFINSTR_OCCUR     		((uint32_t)0x00010000)
#define SCB_CFSR_R_UNDEFINSTR_CLEAR     		((uint32_t)0x00010000)

#define SCB_CFSR_UNDEFINSTR_MASK        		((uint32_t)0x00000001)
#define SCB_CFSR_UNDEFINSTR_NOOCCUR     		((uint32_t)0x00000000)
#define SCB_CFSR_UNDEFINSTR_OCCUR       		((uint32_t)0x00000001)
#define SCB_CFSR_UNDEFINSTR_CLEAR       		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_INVSTATE_MASK      			((uint32_t)0x00020000)
#define SCB_CFSR_R_INVSTATE_BIT       			(17)
#define SCB_CFSR_R_INVSTATE_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_INVSTATE_OCCUR     			((uint32_t)0x00020000)
#define SCB_CFSR_R_INVSTATE_CLEAR     			((uint32_t)0x00020000)

#define SCB_CFSR_INVSTATE_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_INVSTATE_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_INVSTATE_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_INVSTATE_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_INVPC_MASK      				((uint32_t)0x00040000)
#define SCB_CFSR_R_INVPC_BIT       				(18)
#define SCB_CFSR_R_INVPC_NOOCCUR   				((uint32_t)0x00000000)
#define SCB_CFSR_R_INVPC_OCCUR     				((uint32_t)0x00040000)
#define SCB_CFSR_R_INVPC_CLEAR     				((uint32_t)0x00040000)

#define SCB_CFSR_INVPC_MASK        				((uint32_t)0x00000001)
#define SCB_CFSR_INVPC_NOOCCUR     				((uint32_t)0x00000000)
#define SCB_CFSR_INVPC_OCCUR       				((uint32_t)0x00000001)
#define SCB_CFSR_INVPC_CLEAR       				((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_NOCP_MASK      				((uint32_t)0x00080000)
#define SCB_CFSR_R_NOCP_BIT       				(19)
#define SCB_CFSR_R_NOCP_NOOCCUR   				((uint32_t)0x00000000)
#define SCB_CFSR_R_NOCP_OCCUR     				((uint32_t)0x00080000)
#define SCB_CFSR_R_NOCP_CLEAR     				((uint32_t)0x00080000)

#define SCB_CFSR_NOCP_MASK        				((uint32_t)0x00000001)
#define SCB_CFSR_NOCP_NOOCCUR     				((uint32_t)0x00000000)
#define SCB_CFSR_NOCP_OCCUR       				((uint32_t)0x00000001)
#define SCB_CFSR_NOCP_CLEAR       				((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_UNALIGNED_MASK      			((uint32_t)0x01000000)
#define SCB_CFSR_R_UNALIGNED_BIT       			(24)
#define SCB_CFSR_R_UNALIGNED_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_UNALIGNED_OCCUR     			((uint32_t)0x01000000)
#define SCB_CFSR_R_UNALIGNED_CLEAR     			((uint32_t)0x01000000)

#define SCB_CFSR_UNALIGNED_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_UNALIGNED_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_UNALIGNED_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_UNALIGNED_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_CFSR_R_DIVBYZERO_MASK      			((uint32_t)0x02000000)
#define SCB_CFSR_R_DIVBYZERO_BIT       			(25)
#define SCB_CFSR_R_DIVBYZERO_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_CFSR_R_DIVBYZERO_OCCUR     			((uint32_t)0x02000000)
#define SCB_CFSR_R_DIVBYZERO_CLEAR     			((uint32_t)0x02000000)

#define SCB_CFSR_DIVBYZERO_MASK        			((uint32_t)0x00000001)
#define SCB_CFSR_DIVBYZERO_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_CFSR_DIVBYZERO_OCCUR       			((uint32_t)0x00000001)
#define SCB_CFSR_DIVBYZERO_CLEAR       			((uint32_t)0x00000001)
/*--------*/




/*TODO HFSR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 HFSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_HFSR            (((HFSR_TypeDef*)(SCB_BASE+SCB_HFSR_OFFSET )))
#define SCB_HFSR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_HFSR_OFFSET)))


/*--------*/
#define SCB_HFSR_R_VECTTBL_MASK      			((uint32_t)0x00000002)
#define SCB_HFSR_R_VECTTBL_BIT       			(1)
#define SCB_HFSR_R_VECTTBL_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_HFSR_R_VECTTBL_OCCUR     			((uint32_t)0x00000002)
#define SCB_HFSR_R_VECTTBL_CLEAR     			((uint32_t)0x00000002)

#define SCB_HFSR_VECTTBL_MASK        			((uint32_t)0x00000001)
#define SCB_HFSR_VECTTBL_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_HFSR_VECTTBL_OCCUR       			((uint32_t)0x00000001)
#define SCB_HFSR_VECTTBL_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_HFSR_R_FORCED_MASK      			((uint32_t)0x40000000)
#define SCB_HFSR_R_FORCED_BIT       			(30)
#define SCB_HFSR_R_FORCED_NOOCCUR   			((uint32_t)0x00000000)
#define SCB_HFSR_R_FORCED_OCCUR     			((uint32_t)0x40000000)
#define SCB_HFSR_R_FORCED_CLEAR     			((uint32_t)0x40000000)

#define SCB_HFSR_FORCED_MASK        			((uint32_t)0x00000001)
#define SCB_HFSR_FORCED_NOOCCUR     			((uint32_t)0x00000000)
#define SCB_HFSR_FORCED_OCCUR       			((uint32_t)0x00000001)
#define SCB_HFSR_FORCED_CLEAR       			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SCB_HFSR_R_DEBUG_VT_MASK      			((uint32_t)0x80000000)
#define SCB_HFSR_R_DEBUG_VT_BIT       			(31)
/*--------*/

/* TODO DFSR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 DFSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_DFSR            (((DFSR_TypeDef*)(SCB_BASE+SCB_DFSR_OFFSET )))
#define SCB_DFSR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_DFSR_OFFSET)))

/*--------*/
#define SCB_DFSR_R_HALTED_MASK             ((uint32_t)0x00000001U)               /*!< SCB DFSR: HALTED Mask */
#define SCB_DFSR_R_HALTED_BIT              (0U)                                            /*!< SCB DFSR: HALTED Position */

#define SCB_DFSR_HALTED_MASK               ((uint32_t)0x00000001U)               /*!< SCB DFSR: HALTED Mask */
/*--------*/

/*--------*/
#define SCB_DFSR_R_BKPT_MASK             	((uint32_t)0x00000002U)               /*!< SCB DFSR: HALTED Mask */
#define SCB_DFSR_R_BKPT_BIT              	(1U)                                            /*!< SCB DFSR: HALTED Position */

#define SCB_DFSR_BKPT_MASK               	((uint32_t)0x00000002U)               /*!< SCB DFSR: HALTED Mask */
/*--------*/

/*--------*/
#define SCB_DFSR_R_DWTTRAP_MASK             ((uint32_t)0x00000004U)               /*!< SCB DFSR: HALTED Mask */
#define SCB_DFSR_R_DWTTRAP_BIT              (2U)                                            /*!< SCB DFSR: HALTED Position */

#define SCB_DFSR_DWTTRAP_MASK               ((uint32_t)0x00000004U)               /*!< SCB DFSR: HALTED Mask */
/*--------*/

/*--------*/
#define SCB_DFSR_R_VCATCH_MASK             	((uint32_t)0x00000008U)               /*!< SCB DFSR: HALTED Mask */
#define SCB_DFSR_R_VCATCH_BIT              	(3U)                                            /*!< SCB DFSR: HALTED Position */

#define SCB_DFSR_VCATCH_MASK               	((uint32_t)0x00000008U)               /*!< SCB DFSR: HALTED Mask */
/*--------*/

/*--------*/
#define SCB_DFSR_R_EXTERNAL_MASK            ((uint32_t)0x00000008U)               /*!< SCB DFSR: HALTED Mask */
#define SCB_DFSR_R_EXTERNAL_BIT             (3U)                                            /*!< SCB DFSR: HALTED Position */

#define SCB_DFSR_EXTERNAL_MASK              ((uint32_t)0x00000008U)               /*!< SCB DFSR: HALTED Mask */
/*--------*/


/*TODO MMFAR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 MMFAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_MMFAR            (((MMFAR_TypeDef*)(SCB_BASE+SCB_MMFAR_OFFSET )))
#define SCB_MMFAR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_MMFAR_OFFSET)))

/*--------*/
#define SCB_MMFAR_R_MMFAR_MASK      			((uint32_t)0xFFFFFFFF)
#define SCB_MMFAR_R_MMFAR_BIT       			(0)

#define SCB_MMFAR_MMFAR_MASK        			((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO BFAR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 BFAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_BFAR            (((BFAR_TypeDef*)(SCB_BASE+SCB_BFAR_OFFSET )))
#define SCB_BFAR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_BFAR_OFFSET)))

/*--------*/
#define SCB_BFAR_R_BFAR_MASK      				((uint32_t)0xFFFFFFFF)
#define SCB_BFAR_R_BFAR_BIT       				(0)

#define SCB_BFAR_BFAR_MASK        				((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO AFSR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 AFSR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define SCB_AFSR            (((AFSR_TypeDef*)(SCB_BASE+SCB_AFSR_OFFSET )))
#define SCB_AFSR_R          (*((__IO uint32_t *)(SCB_BASE+SCB_AFSR_OFFSET)))

/*--------*/
#define SCB_AFSR_R_IMPDEF_MASK      			((uint32_t)0xFFFFFFFF)
#define SCB_AFSR_R_IMPDEF_BIT       			(0)

#define SCB_AFSR_IMPDEF_MASK        			((uint32_t)0xFFFFFFFF)
/*--------*/


/*TODO fucntions*/


/* ICSR*/
int32_t SCB_NMI_Trigger(void);
int32_t SCB_SysTick_Trigger(void);
int32_t SCB_SysTick_Clear(void);
int32_t SCB_PENDSV_Trigger(void);
int32_t SCB_PENDSV_Clear(void);
int32_t SCB_IRQ_ACTIVE(void);
int32_t SCB_IRQ_PEND(void);
int32_t SCB_EXC_ACTIVE(void);
int32_t SCB_EXC_PEND(void);

/*AIRCR*/
void    SCB_SystemReset(void);
int32_t SCB_SetPriorityGrouping(SCB_PRIGROUP_Type group);
int32_t SCB_GetPriorityGrouping(void);

/*SCR*/
void    SCB_SET_Event(void);
int32_t SCB_SleepMode(SCB_SLEEPDEEP_Type sleepMode);

/*CCR*/
int32_t SCB_SWTRIGGER_EN(void);

/*SHPR*/
int32_t SCB_SetPriority(IRQn_Type IRQn,uint32_t priority);
int32_t SCB_GetPriority(IRQn_Type IRQn);


/*SHCSR*/
int32_t SCB_UsageFault_En(void);
int32_t SCB_UsageFault_Dis(void);
int32_t SCB_BusFault_En(void);
int32_t SCB_BusFault_Dis(void);
int32_t SCB_MPUFault_En(void);
int32_t SCB_MPUFault_Dis(void);

#endif /* SCB_H_ */
