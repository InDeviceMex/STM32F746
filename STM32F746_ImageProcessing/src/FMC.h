/*
 * FMC.h
 *
 *  Created on: 15/08/2018
 *      Author: InDev
 */

#ifndef FMC_H_
#define FMC_H_

#include "Core.h"
#include "NVIC.h"
#include "RCC.h"
#include "GPIO.h"
#include "IMAGE.h"
#include "MPU.h"
#include <stdint.h>


// SDRAM base address for Bank 2
#define SDRAM_BASE 0xD0000000
// SDRAM size is 8MB
#define SDRAM_SIZE 0x00800000


#define FMC_R_BASE             0xA0000000U /*!< Base address of : FMC Control registers                                                 */

#define FMC_SRAM_NOR_R_BASE		(FMC_R_BASE + 0x0000U)
#define FMC_NAND_R_BASE      	(FMC_R_BASE + 0x0080U)
#define FMC_SDRAM_R_BASE    	(FMC_R_BASE + 0x0140U)


typedef __IO struct
{
	uint8_t DATA[0x800000];
}SDRAMByte_TypeDef;

typedef __IO struct
{
	uint16_t DATA[0x400000];
}SDRAMHalf_TypeDef;

typedef __IO struct
{
	uint32_t DATA[0x200000];
}SDRAMWord_TypeDef;

typedef __IO struct
{
	__IO uint32_t MBKEN		:1;
	__IO uint32_t MUXEN		:1;
	__IO uint32_t MTYP		:2;
	__IO uint32_t MWID		:2;
	__IO uint32_t FACCEN	:1;
		 uint32_t reserved	:1;
	__IO uint32_t BURSTEN	:1;
	__IO uint32_t WAITPOL	:1;
	 	 uint32_t reserved1	:1;
	__IO uint32_t WAITCFG	:1;
	__IO uint32_t WREN		:1;
	__IO uint32_t WAITEN	:1;
	__IO uint32_t EXTMOD	:1;
	__IO uint32_t ASYNCWAIT	:1;
	__IO uint32_t CPSIZE	:3;
	__IO uint32_t CBURSTRW	:1;
	__IO uint32_t CCLKEN	:1;
	__IO uint32_t WFDIS		:1;
		 uint32_t reserved2	:10;
}FMC_BCR_TypeDef;


typedef __IO struct
{
	__IO uint32_t ADDSET	:4;
	__IO uint32_t ADDHLD	:4;
	__IO uint32_t DATAST	:8;
	__IO uint32_t BUSTURN	:4;
	__IO uint32_t CLKDIV	:4;
	__IO uint32_t DATLAT	:4;
	__IO uint32_t ACCMOD	:2;
	 	 uint32_t reserved	:2;
}FMC_BTR_TypeDef;


typedef __IO struct
{
	__IO uint32_t ADDSET	:4;
	__IO uint32_t ADDHLD	:4;
	__IO uint32_t DATAST	:8;
	__IO uint32_t BUSTURN	:4;
	 	 uint32_t reserved	:8;
	__IO uint32_t ACCMOD	:2;
	 	 uint32_t reserved1	:2;
}FMC_BWTR_TypeDef;


typedef __IO struct
{
	union
	{
		 __IO uint32_t 		CR1;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BCR_TypeDef 	CR1_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	union
	{
		 __IO uint32_t 		TR1;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BTR_TypeDef 	TR1_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	union
	{
		 __IO uint32_t 		CR2;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BCR_TypeDef 	CR2_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	union
	{
		 __IO uint32_t 		TR2;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BTR_TypeDef 	TR2_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	union
	{
		 __IO uint32_t 		CR3;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BCR_TypeDef 	CR3_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	union
	{
		 __IO uint32_t 		TR3;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BTR_TypeDef 	TR3_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	union
	{
		 __IO uint32_t 		CR4;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BCR_TypeDef 	CR4_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	union
	{
		 __IO uint32_t 		TR4;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BTR_TypeDef	TR4_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	uint32_t 			reserved[58];
	union
	{
		 __IO uint32_t 		WTR1;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BWTR_TypeDef	WTR1_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	uint32_t 			reserved1;
	union
	{
		 __IO uint32_t 		WTR2;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BWTR_TypeDef	WTR2_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	uint32_t 			reserved2;
	union
	{
		 __IO uint32_t 		WTR3;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BWTR_TypeDef	WTR3_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};
	uint32_t 			reserved3;
	union
	{
		 __IO uint32_t 		WTR4;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
		 FMC_BWTR_TypeDef	WTR4_Bit;    /*!< NOR/PSRAM chip-select control register(CR) and chip-select timing register(TR), Address offset: 0x00-1C */
	};

} FMC_SRAM_NOR_TypeDef;


typedef __IO struct
{
	 	 uint32_t reserved	:1;
	__IO uint32_t PWAITEN	:1;
	__IO uint32_t PBKEN		:1;
	__IO uint32_t PTYP		:1;
	__IO uint32_t PWID		:2;
	__IO uint32_t ECCEN		:1;
		 uint32_t reserved1	:2;
	__IO uint32_t TCLR		:4;
	__IO uint32_t TAR		:4;
	__IO uint32_t ECCPS		:3;
		 uint32_t reserved2	:12;
}FMC_PCR_TypeDef;

typedef __IO struct
{
	__IO uint32_t IRS		:1;
	__IO uint32_t ILS		:1;
	__IO uint32_t IFS		:1;
	__IO uint32_t IREN		:1;
	__IO uint32_t ILEN		:1;
	__IO uint32_t IFEN		:1;
	__I  uint32_t FEMPT		:1;
		 uint32_t reserved2	:25;
}FMC_PSR_TypeDef;


typedef __IO struct
{
	__IO uint32_t MEMSET	:8;
	__IO uint32_t MEMWAIT	:8;
	__IO uint32_t MEMHOLD	:8;
	__IO uint32_t MEMHIZ	:8;
}FMC_PMEM_TypeDef;


typedef __IO struct
{
	__IO uint32_t ATTSET	:8;
	__IO uint32_t ATTWAIT	:8;
	__IO uint32_t ATTHOLD	:8;
	__IO uint32_t ATTHIZ	:8;
}FMC_PATT_TypeDef;


typedef __IO struct
{
	__I uint32_t ECC	:32;
}FMC_ECCR_TypeDef;

typedef struct
{
	union
	{
		__IO uint32_t 		CR;        /*!< NAND Flash control register,                       Address offset: 0x80 */
		FMC_PCR_TypeDef		CR_Bit;
	};
	union
	{
		__IO uint32_t 		SR;         /*!< NAND Flash FIFO status and interrupt register,     Address offset: 0x84 */
		FMC_PSR_TypeDef		SR_Bit;
	};
	union
	{
		__IO uint32_t 		MEM;       /*!< NAND Flash Common memory space timing register,    Address offset: 0x88 */
		FMC_PMEM_TypeDef	MEM_Bit;
	};
	union
	{
		__IO uint32_t 		ATT;       /*!< NAND Flash Attribute memory space timing register, Address offset: 0x8C */
		FMC_PATT_TypeDef	ATT_Bit;
	};
	uint32_t      			reserved;  /*!< Reserved, 0x90                                                          */
	union
	{
		__I uint32_t 		ECCR;       /*!< NAND Flash ECC result registers,                   Address offset: 0x94 */
		FMC_ECCR_TypeDef	ECCR_Bit;
	};
} FMC_NAND_TypeDef;



typedef __IO struct
{
	__IO uint32_t NC		:2;
	__IO uint32_t NR		:2;
	__IO uint32_t MWID		:2;
	__IO uint32_t NB		:1;
	__IO uint32_t CAS		:2;
	__IO uint32_t WP		:1;
	__IO uint32_t SDCLK		:2;
	__IO uint32_t RBURST	:1;
	__IO uint32_t RPIPE		:2;
		 uint32_t reserved	:17;
}FMC_SDCR_TypeDef;

typedef __IO struct
{
	__IO uint32_t TMRD		:4;
	__IO uint32_t TXSR		:4;
	__IO uint32_t TRAS		:4;
	__IO uint32_t TRC		:4;
	__IO uint32_t TWR		:4;
	__IO uint32_t TRP		:4;
	__IO uint32_t TRCD		:4;
		 uint32_t reserved	:4;
}FMC_SDTR_TypeDef;

typedef __IO struct
{
	__IO uint32_t MODE		:3;
	__IO uint32_t CTB2		:1;
	__IO uint32_t CTB1		:1;
	__IO uint32_t NRFS		:4;
	__IO uint32_t MRD		:13;
		 uint32_t reserved	:10;
}FMC_SDCMR_TypeDef;

typedef __IO struct
{
	__IO uint32_t CRE		:1;
	__IO uint32_t COUNT		:13;
	__IO uint32_t REIE		:1;
		 uint32_t reserved	:17;
}FMC_SDRTR_TypeDef;

typedef __IO struct
{
	__I uint32_t RE			:1;
	__I uint32_t MODES1		:2;
	__I uint32_t MODES2		:2;
	__I uint32_t BUSY		:1;
		uint32_t reserved	:26;
}FMC_SDSR_TypeDef;


typedef struct
{
	union
	{
		__IO uint32_t 		CR[2];        /*!< SDRAM Control registers ,      Address offset: 0x140-0x144  */
		FMC_SDCR_TypeDef	CR_Bit[2];
	};
	union
	{
		__IO uint32_t 		TR[2];        /*!< SDRAM Timing registers ,       Address offset: 0x148-0x14C  */
		FMC_SDTR_TypeDef	TR_Bit[2];
	};
	union
	{
		__IO uint32_t 		CMR;       /*!< SDRAM Command Mode register,    Address offset: 0x150  */
		FMC_SDCMR_TypeDef	CMR_Bit;
	};
	union
	{
		__IO uint32_t 		RTR;       /*!< SDRAM Refresh Timer register,   Address offset: 0x154  */
		FMC_SDRTR_TypeDef	RTR_Bit;
	};
	union
	{
		__I uint32_t 		SR;        /*!< SDRAM Status register,          Address offset: 0x158  */
		FMC_SDSR_TypeDef	SR_Bit;
	};
} FMC_SDRAM_TypeDef;


#define FMC_SRAM_NOR	((FMC_SRAM_NOR_TypeDef *) FMC_SRAM_NOR_R_BASE)
#define FMC_NAND        ((FMC_NAND_TypeDef *) FMC_NAND_R_BASE)
#define FMC_SDRAM       ((FMC_SDRAM_TypeDef *) FMC_SDRAM_R_BASE)


#define FMC_SRAM_NOR_CR1_OFFSET	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR1_OFFSET	((uint32_t)0x00000004)
#define FMC_SRAM_NOR_CR2_OFFSET	((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR2_OFFSET	((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_CR3_OFFSET	((uint32_t)0x00000010)
#define FMC_SRAM_NOR_TR3_OFFSET	((uint32_t)0x00000014)
#define FMC_SRAM_NOR_CR4_OFFSET	((uint32_t)0x00000018)
#define FMC_SRAM_NOR_TR4_OFFSET	((uint32_t)0x0000001C)
#define FMC_SRAM_NOR_WTR1_OFFSET	((uint32_t)0x00000104)
#define FMC_SRAM_NOR_WTR2_OFFSET	((uint32_t)0x0000010C)
#define FMC_SRAM_NOR_WTR3_OFFSET	((uint32_t)0x00000114)
#define FMC_SRAM_NOR_WTR4_OFFSET	((uint32_t)0x0000011C)


#define FMC_NAND_CR_OFFSET			((uint32_t)0x00000000)
#define FMC_NAND_SR_OFFSET			((uint32_t)0x00000004)
#define FMC_NAND_MEM_OFFSET		((uint32_t)0x00000008)
#define FMC_NAND_ATT_OFFSET		((uint32_t)0x0000000C)
#define FMC_NAND_ECCR_OFFSET		((uint32_t)0x00000014)

#define FMC_SDRAM_CR1_OFFSET		((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_OFFSET		((uint32_t)0x00000004)
#define FMC_SDRAM_TR1_OFFSET		((uint32_t)0x00000008)
#define FMC_SDRAM_TR2_OFFSET		((uint32_t)0x0000000C)
#define FMC_SDRAM_CMR_OFFSET		((uint32_t)0x00000010)
#define FMC_SDRAM_RTR_OFFSET		((uint32_t)0x00000014)
#define FMC_SDRAM_SR_OFFSET		((uint32_t)0x00000018)


#define SDRAMByte            		(((SDRAMByte_TypeDef*)(SDRAM_BASE)))
#define SDRAMHalf            		(((SDRAMHalf_TypeDef*)(SDRAM_BASE)))
#define SDRAMWord            		(((SDRAMWord_TypeDef*)(SDRAM_BASE)))
/* TODO CR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_CR1            		(((FMC_BCR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_CR1_OFFSET )))
#define FMC_SRAM_NOR_CR1_R           		(*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_CR1_OFFSET)))

/*--------*/
#define FMC_SRAM_NOR_CR1_R_MBKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_R_MBKEN_BIT     		(0)
#define FMC_SRAM_NOR_CR1_R_MBKEN_DIS    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_MBKEN_EN  	   		((uint32_t)0x00000001)

#define FMC_SRAM_NOR_CR1_MBKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_MBKEN_DIS    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_MBKEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_MUXEN_MASK    		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_CR1_R_MUXEN_BIT     		(1)
#define FMC_SRAM_NOR_CR1_R_MUXEN_DIS    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_MUXEN_EN  	   		((uint32_t)0x00000002)

#define FMC_SRAM_NOR_CR1_MUXEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_MUXEN_DIS    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_MUXEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_MTYP_MASK    		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_CR1_R_MTYP_BIT     		(2)
#define FMC_SRAM_NOR_CR1_R_MTYP_SRAM    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_MTYP_PSRAM	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_CR1_R_MTYP_NOR	   		((uint32_t)0x00000008)

#define FMC_SRAM_NOR_CR1_MTYP_MASK    			((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR1_MTYP_SRAM   			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_MTYP_PSRAM	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_MTYP_NOR		   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_MWID_MASK    		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_CR1_R_MWID_BIT     		(4)
#define FMC_SRAM_NOR_CR1_R_MWID_8	    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_MWID_16		   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_CR1_R_MWID_32		   		((uint32_t)0x00000020)

#define FMC_SRAM_NOR_CR1_MWID_MASK    			((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR1_MWID_8	  			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_MWID_16		   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_MWID_32		   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_FACCEN_MASK    		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_CR1_R_FACCEN_BIT     		(6)
#define FMC_SRAM_NOR_CR1_R_FACCEN_DIS	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_FACCEN_EN		   	((uint32_t)0x00000040)

#define FMC_SRAM_NOR_CR1_FACCEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_FACCEN_DIS 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_FACCEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_BURSTEN_MASK    	((uint32_t)0x00000100)
#define FMC_SRAM_NOR_CR1_R_BURSTEN_BIT     	(8)
#define FMC_SRAM_NOR_CR1_R_BURSTEN_DIS	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_BURSTEN_EN		   	((uint32_t)0x00000100)

#define FMC_SRAM_NOR_CR1_BURSTEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_BURSTEN_DIS 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_BURSTEN_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_WAITPOL_MASK    	((uint32_t)0x00000200)
#define FMC_SRAM_NOR_CR1_R_WAITPOL_BIT     	(9)
#define FMC_SRAM_NOR_CR1_R_WAITPOL_LOW	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_WAITPOL_HIGH	   	((uint32_t)0x00000200)

#define FMC_SRAM_NOR_CR1_WAITPOL_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_WAITPOL_LOW 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_WAITPOL_HIGH		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_WAITCFG_MASK    	((uint32_t)0x00000800)
#define FMC_SRAM_NOR_CR1_R_WAITCFG_BIT     	(11)
#define FMC_SRAM_NOR_CR1_R_WAITCFG_BEFORE    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_WAITCFG_NOW		   	((uint32_t)0x00000800)

#define FMC_SRAM_NOR_CR1_WAITCFG_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_WAITCFG_BEFORE		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_WAITCFG_NOW		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_WREN_MASK    		((uint32_t)0x00001000)
#define FMC_SRAM_NOR_CR1_R_WREN_BIT     		(12)
#define FMC_SRAM_NOR_CR1_R_WREN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_WREN_EN			   	((uint32_t)0x00001000)

#define FMC_SRAM_NOR_CR1_WREN_MASK    			((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_WREN_DIS				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_WREN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_WAITEN_MASK    		((uint32_t)0x00002000)
#define FMC_SRAM_NOR_CR1_R_WAITEN_BIT     		(13)
#define FMC_SRAM_NOR_CR1_R_WAITEN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_WAITEN_EN			((uint32_t)0x00002000)

#define FMC_SRAM_NOR_CR1_WAITEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_WAITEN_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_WAITEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_EXTMOD_MASK    		((uint32_t)0x00004000)
#define FMC_SRAM_NOR_CR1_R_EXTMOD_BIT     		(14)
#define FMC_SRAM_NOR_CR1_R_EXTMOD_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_EXTMOD_EN			((uint32_t)0x00004000)

#define FMC_SRAM_NOR_CR1_EXTMOD_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_EXTMOD_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_EXTMOD_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_ASYNCWAIT_MASK    	((uint32_t)0x00008000)
#define FMC_SRAM_NOR_CR1_R_ASYNCWAIT_BIT     	(15)
#define FMC_SRAM_NOR_CR1_R_ASYNCWAIT_DIS	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_ASYNCWAIT_EN		((uint32_t)0x00008000)

#define FMC_SRAM_NOR_CR1_ASYNCWAIT_MASK    	((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_ASYNCWAIT_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_ASYNCWAIT_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_CPSIZE_MASK    		((uint32_t)0x00070000)
#define FMC_SRAM_NOR_CR1_R_CPSIZE_BIT     		(16)
#define FMC_SRAM_NOR_CR1_R_CPSIZE_NO	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_CPSIZE_128B			((uint32_t)0x00010000)
#define FMC_SRAM_NOR_CR1_R_CPSIZE_256B			((uint32_t)0x00020000)
#define FMC_SRAM_NOR_CR1_R_CPSIZE_512B			((uint32_t)0x00030000)
#define FMC_SRAM_NOR_CR1_R_CPSIZE_1024			((uint32_t)0x00040000)

#define FMC_SRAM_NOR_CR1_CPSIZE_MASK    		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_CR1_CPSIZE_NO				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_CPSIZE_128B	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_CPSIZE_256B	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_CR1_CPSIZE_512B	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR1_CPSIZE_1024B	   		((uint32_t)0x00000004)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_CBURSTRW_MASK    	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_CR1_R_CBURSTRW_BIT     	(19)
#define FMC_SRAM_NOR_CR1_R_CBURSTRW_DIS	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_CBURSTRW_EN			((uint32_t)0x00080000)

#define FMC_SRAM_NOR_CR1_CBURSTRW_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_CBURSTRW_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_CBURSTRW_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_CCLKEN_MASK    		((uint32_t)0x00100000)
#define FMC_SRAM_NOR_CR1_R_CCLKEN_BIT     		(20)
#define FMC_SRAM_NOR_CR1_R_CCLKEN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_CCLKEN_EN			((uint32_t)0x00100000)

#define FMC_SRAM_NOR_CR1_CCLKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_CCLKEN_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_CCLKEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR1_R_WFDIS_MASK    		((uint32_t)0x00200000)
#define FMC_SRAM_NOR_CR1_R_WFDIS_BIT     		(21)
#define FMC_SRAM_NOR_CR1_R_WFDIS_EN	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_R_WFDIS_DIS			((uint32_t)0x00200000)

#define FMC_SRAM_NOR_CR1_WFDIS_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR1_WFDIS_EN				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR1_WFDIS_DIS		   		((uint32_t)0x00000001)
/*--------*/

/* TODO TR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 TR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_TR1            (((FMC_BTR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_TR1_OFFSET )))
#define FMC_SRAM_NOR_TR1_R           (*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_TR1_OFFSET)))

/*--------*/
#define FMC_SRAM_NOR_TR1_R_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR1_R_ADDSET_BIT     		(0)
#define FMC_SRAM_NOR_TR1_R_ADDSET_0    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR1_R_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR1_R_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR1_R_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR1_R_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR1_R_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR1_R_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR1_R_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR1_R_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR1_R_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR1_R_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR1_R_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR1_R_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR1_R_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR1_R_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR1_R_ADDSET_15  	   		((uint32_t)0x0000000F)

#define FMC_SRAM_NOR_TR1_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR1_ADDSET_0    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR1_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR1_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR1_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR1_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR1_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR1_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR1_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR1_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR1_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR1_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR1_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR1_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR1_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR1_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR1_ADDSET_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR1_R_ADDHLD_MASK    	((uint32_t)0x000000F0)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_BIT     	(4)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_1  	   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_2  	   		((uint32_t)0x00000020)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_3  	   		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_4  	   		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_5  	   		((uint32_t)0x00000050)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_6  	   		((uint32_t)0x00000060)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_7  	   		((uint32_t)0x00000070)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_8  	   		((uint32_t)0x00000080)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_9  	   		((uint32_t)0x00000090)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_10  	   	((uint32_t)0x000000A0)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_11  	   	((uint32_t)0x000000B0)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_12  	   	((uint32_t)0x000000C0)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_13  	   	((uint32_t)0x000000D0)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_14  	   	((uint32_t)0x000000E0)
#define FMC_SRAM_NOR_TR1_R_ADDHLD_15  	   	((uint32_t)0x000000F0)

#define FMC_SRAM_NOR_TR1_ADDHLD_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR1_ADDHLD_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR1_ADDHLD_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR1_ADDHLD_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR1_ADDHLD_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR1_ADDHLD_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR1_ADDHLD_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR1_ADDHLD_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR1_ADDHLD_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR1_ADDHLD_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR1_ADDHLD_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR1_ADDHLD_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR1_ADDHLD_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR1_ADDHLD_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR1_ADDHLD_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR1_ADDHLD_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR1_R_DATAST_MASK    		((uint32_t)0x0000FF00)
#define FMC_SRAM_NOR_TR1_R_DATAST_BIT     		(8)

#define FMC_SRAM_NOR_TR1_DATAST_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR1_R_BURSTURN_MASK    	((uint32_t)0x000F0000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_BIT     	(16)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_0  	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_1  	   	((uint32_t)0x00010000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_2  	   	((uint32_t)0x00020000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_3  	   	((uint32_t)0x00030000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_4  	   	((uint32_t)0x00040000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_5  	   	((uint32_t)0x00050000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_6  	   	((uint32_t)0x00060000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_7  	   	((uint32_t)0x00070000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_8  	   	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_9  	   	((uint32_t)0x00090000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_10  	   	((uint32_t)0x000A0000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_11  	   	((uint32_t)0x000B0000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_12  	   	((uint32_t)0x000C0000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_13  	   	((uint32_t)0x000D0000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_14  	   	((uint32_t)0x000E0000)
#define FMC_SRAM_NOR_TR1_R_BURSTURN_15  	   	((uint32_t)0x000F0000)

#define FMC_SRAM_NOR_TR1_BURSTURN_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR1_BURSTURN_0  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR1_BURSTURN_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR1_BURSTURN_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR1_BURSTURN_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR1_BURSTURN_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR1_BURSTURN_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR1_BURSTURN_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR1_BURSTURN_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR1_BURSTURN_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR1_BURSTURN_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR1_BURSTURN_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR1_BURSTURN_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR1_BURSTURN_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR1_BURSTURN_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR1_BURSTURN_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR1_BURSTURN_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR1_R_CLKDIV_MASK    		((uint32_t)0x00F0000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_BIT     		(20)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_2  	   		((uint32_t)0x00100000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_3  	   		((uint32_t)0x00200000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_4  	   		((uint32_t)0x00300000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_5  	   		((uint32_t)0x00400000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_6  	   		((uint32_t)0x00500000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_7  	   		((uint32_t)0x00600000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_8  	   		((uint32_t)0x00700000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_9  	   		((uint32_t)0x00800000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_10  	   		((uint32_t)0x00900000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_11  	   		((uint32_t)0x00A00000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_12  	   		((uint32_t)0x00B00000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_13  	   		((uint32_t)0x00C00000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_14  	   		((uint32_t)0x00D00000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_15  	   		((uint32_t)0x00E00000)
#define FMC_SRAM_NOR_TR1_R_CLKDIV_16  	   		((uint32_t)0x00F00000)

#define FMC_SRAM_NOR_TR1_CLKDIV_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR1_CLKDIV_2  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR1_CLKDIV_3  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR1_CLKDIV_4  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR1_CLKDIV_5  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR1_CLKDIV_6  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR1_CLKDIV_7  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR1_CLKDIV_8  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR1_CLKDIV_9  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR1_CLKDIV_10  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR1_CLKDIV_11  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR1_CLKDIV_12  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR1_CLKDIV_13  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR1_CLKDIV_14  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR1_CLKDIV_15  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR1_CLKDIV_16  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR1_R_DATLAT_MASK    		((uint32_t)0x0F00000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_BIT     		(24)
#define FMC_SRAM_NOR_TR1_R_DATLAT_2  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_3  	   		((uint32_t)0x01000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_4  	   		((uint32_t)0x02000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_5  	   		((uint32_t)0x03000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_6  	   		((uint32_t)0x04000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_7  	   		((uint32_t)0x05000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_8  	   		((uint32_t)0x06000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_9  	   		((uint32_t)0x07000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_10  	   		((uint32_t)0x08000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_11  	   		((uint32_t)0x09000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_12  	   		((uint32_t)0x0A000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_13  	   		((uint32_t)0x0B000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_14  	   		((uint32_t)0x0C000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_15  	   		((uint32_t)0x0D000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_16  	   		((uint32_t)0x0E000000)
#define FMC_SRAM_NOR_TR1_R_DATLAT_17  	   		((uint32_t)0x0F000000)

#define FMC_SRAM_NOR_TR1_DATLAT_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR1_DATLAT_2  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR1_DATLAT_3  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR1_DATLAT_4  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR1_DATLAT_5  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR1_DATLAT_6  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR1_DATLAT_7  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR1_DATLAT_8  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR1_DATLAT_9  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR1_DATLAT_10  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR1_DATLAT_11  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR1_DATLAT_12  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR1_DATLAT_13  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR1_DATLAT_14  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR1_DATLAT_15  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR1_DATLAT_16  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR1_DATLAT_17  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR1_R_ACCMOD_MASK    		((uint32_t)0x3000000)
#define FMC_SRAM_NOR_TR1_R_ACCMOD_BIT     		(28)
#define FMC_SRAM_NOR_TR1_R_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR1_R_ACCMOD_B  	   		((uint32_t)0x10000000)
#define FMC_SRAM_NOR_TR1_R_ACCMOD_C  	   		((uint32_t)0x20000000)
#define FMC_SRAM_NOR_TR1_R_ACCMOD_D  	   		((uint32_t)0x30000000)

#define FMC_SRAM_NOR_TR1_ACCMOD_MASK    		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR1_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR1_ACCMOD_B  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR1_ACCMOD_C  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR1_ACCMOD_D  	   		((uint32_t)0x00000003)
/*--------*/

/* TODO CR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 CR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_CR2            		(((FMC_BCR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_CR2_OFFSET )))
#define FMC_SRAM_NOR_CR2_R           		(*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_CR2_OFFSET)))

/*--------*/
#define FMC_SRAM_NOR_CR2_R_MBKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_R_MBKEN_BIT     		(0)
#define FMC_SRAM_NOR_CR2_R_MBKEN_DIS    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_MBKEN_EN  	   		((uint32_t)0x00000001)

#define FMC_SRAM_NOR_CR2_MBKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_MBKEN_DIS    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_MBKEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_MUXEN_MASK    		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_CR2_R_MUXEN_BIT     		(1)
#define FMC_SRAM_NOR_CR2_R_MUXEN_DIS    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_MUXEN_EN  	   		((uint32_t)0x00000002)

#define FMC_SRAM_NOR_CR2_MUXEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_MUXEN_DIS    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_MUXEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_MTYP_MASK    		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_CR2_R_MTYP_BIT     		(2)
#define FMC_SRAM_NOR_CR2_R_MTYP_SRAM    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_MTYP_PSRAM	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_CR2_R_MTYP_NOR	   		((uint32_t)0x00000008)

#define FMC_SRAM_NOR_CR2_MTYP_MASK    			((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR2_MTYP_SRAM   			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_MTYP_PSRAM	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_MTYP_NOR		   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_MWID_MASK    		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_CR2_R_MWID_BIT     		(4)
#define FMC_SRAM_NOR_CR2_R_MWID_8	    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_MWID_16		   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_CR2_R_MWID_32		   		((uint32_t)0x00000020)

#define FMC_SRAM_NOR_CR2_MWID_MASK    			((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR2_MWID_8	  			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_MWID_16		   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_MWID_32		   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_FACCEN_MASK    		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_CR2_R_FACCEN_BIT     		(6)
#define FMC_SRAM_NOR_CR2_R_FACCEN_DIS	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_FACCEN_EN		   	((uint32_t)0x00000040)

#define FMC_SRAM_NOR_CR2_FACCEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_FACCEN_DIS 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_FACCEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_BURSTEN_MASK    	((uint32_t)0x00000100)
#define FMC_SRAM_NOR_CR2_R_BURSTEN_BIT     	(8)
#define FMC_SRAM_NOR_CR2_R_BURSTEN_DIS	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_BURSTEN_EN		   	((uint32_t)0x00000100)

#define FMC_SRAM_NOR_CR2_BURSTEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_BURSTEN_DIS 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_BURSTEN_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_WAITPOL_MASK    	((uint32_t)0x00000200)
#define FMC_SRAM_NOR_CR2_R_WAITPOL_BIT     	(9)
#define FMC_SRAM_NOR_CR2_R_WAITPOL_LOW	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_WAITPOL_HIGH	   	((uint32_t)0x00000200)

#define FMC_SRAM_NOR_CR2_WAITPOL_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_WAITPOL_LOW 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_WAITPOL_HIGH		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_WAITCFG_MASK    	((uint32_t)0x00000800)
#define FMC_SRAM_NOR_CR2_R_WAITCFG_BIT     	(11)
#define FMC_SRAM_NOR_CR2_R_WAITCFG_BEFORE    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_WAITCFG_NOW		   	((uint32_t)0x00000800)

#define FMC_SRAM_NOR_CR2_WAITCFG_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_WAITCFG_BEFORE		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_WAITCFG_NOW		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_WREN_MASK    		((uint32_t)0x00001000)
#define FMC_SRAM_NOR_CR2_R_WREN_BIT     		(12)
#define FMC_SRAM_NOR_CR2_R_WREN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_WREN_EN			   	((uint32_t)0x00001000)

#define FMC_SRAM_NOR_CR2_WREN_MASK    			((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_WREN_DIS				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_WREN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_WAITEN_MASK    		((uint32_t)0x00002000)
#define FMC_SRAM_NOR_CR2_R_WAITEN_BIT     		(13)
#define FMC_SRAM_NOR_CR2_R_WAITEN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_WAITEN_EN			((uint32_t)0x00002000)

#define FMC_SRAM_NOR_CR2_WAITEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_WAITEN_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_WAITEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_EXTMOD_MASK    		((uint32_t)0x00004000)
#define FMC_SRAM_NOR_CR2_R_EXTMOD_BIT     		(14)
#define FMC_SRAM_NOR_CR2_R_EXTMOD_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_EXTMOD_EN			((uint32_t)0x00004000)

#define FMC_SRAM_NOR_CR2_EXTMOD_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_EXTMOD_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_EXTMOD_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_ASYNCWAIT_MASK    	((uint32_t)0x00008000)
#define FMC_SRAM_NOR_CR2_R_ASYNCWAIT_BIT     	(15)
#define FMC_SRAM_NOR_CR2_R_ASYNCWAIT_DIS	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_ASYNCWAIT_EN		((uint32_t)0x00008000)

#define FMC_SRAM_NOR_CR2_ASYNCWAIT_MASK    	((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_ASYNCWAIT_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_ASYNCWAIT_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_CPSIZE_MASK    		((uint32_t)0x00070000)
#define FMC_SRAM_NOR_CR2_R_CPSIZE_BIT     		(16)
#define FMC_SRAM_NOR_CR2_R_CPSIZE_NO	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_CPSIZE_128B			((uint32_t)0x00010000)
#define FMC_SRAM_NOR_CR2_R_CPSIZE_256B			((uint32_t)0x00020000)
#define FMC_SRAM_NOR_CR2_R_CPSIZE_512B			((uint32_t)0x00030000)
#define FMC_SRAM_NOR_CR2_R_CPSIZE_1024			((uint32_t)0x00040000)

#define FMC_SRAM_NOR_CR2_CPSIZE_MASK    		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_CR2_CPSIZE_NO				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_CPSIZE_128B	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_CPSIZE_256B	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_CR2_CPSIZE_512B	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR2_CPSIZE_1024B	   		((uint32_t)0x00000004)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_CBURSTRW_MASK    	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_CR2_R_CBURSTRW_BIT     	(19)
#define FMC_SRAM_NOR_CR2_R_CBURSTRW_DIS	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_CBURSTRW_EN			((uint32_t)0x00080000)

#define FMC_SRAM_NOR_CR2_CBURSTRW_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_CBURSTRW_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_CBURSTRW_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_CCLKEN_MASK    		((uint32_t)0x00100000)
#define FMC_SRAM_NOR_CR2_R_CCLKEN_BIT     		(20)
#define FMC_SRAM_NOR_CR2_R_CCLKEN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_CCLKEN_EN			((uint32_t)0x00100000)

#define FMC_SRAM_NOR_CR2_CCLKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_CCLKEN_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_CCLKEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR2_R_WFDIS_MASK    		((uint32_t)0x00200000)
#define FMC_SRAM_NOR_CR2_R_WFDIS_BIT     		(21)
#define FMC_SRAM_NOR_CR2_R_WFDIS_EN	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_R_WFDIS_DIS			((uint32_t)0x00200000)

#define FMC_SRAM_NOR_CR2_WFDIS_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR2_WFDIS_EN				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR2_WFDIS_DIS		   		((uint32_t)0x00000001)
/*--------*/

/* TODO TR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 TR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_TR2            (((FMC_BTR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_TR2_OFFSET )))
#define FMC_SRAM_NOR_TR2_R           (*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_TR2_OFFSET)))

/*--------*/
#define FMC_SRAM_NOR_TR2_R_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR2_R_ADDSET_BIT     		(0)
#define FMC_SRAM_NOR_TR2_R_ADDSET_0    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR2_R_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR2_R_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR2_R_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR2_R_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR2_R_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR2_R_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR2_R_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR2_R_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR2_R_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR2_R_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR2_R_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR2_R_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR2_R_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR2_R_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR2_R_ADDSET_15  	   		((uint32_t)0x0000000F)

#define FMC_SRAM_NOR_TR2_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR2_ADDSET_0    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR2_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR2_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR2_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR2_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR2_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR2_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR2_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR2_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR2_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR2_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR2_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR2_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR2_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR2_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR2_ADDSET_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR2_R_ADDHLD_MASK    	((uint32_t)0x000000F0)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_BIT     	(4)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_1  	   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_2  	   		((uint32_t)0x00000020)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_3  	   		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_4  	   		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_5  	   		((uint32_t)0x00000050)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_6  	   		((uint32_t)0x00000060)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_7  	   		((uint32_t)0x00000070)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_8  	   		((uint32_t)0x00000080)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_9  	   		((uint32_t)0x00000090)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_10  	   	((uint32_t)0x000000A0)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_11  	   	((uint32_t)0x000000B0)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_12  	   	((uint32_t)0x000000C0)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_13  	   	((uint32_t)0x000000D0)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_14  	   	((uint32_t)0x000000E0)
#define FMC_SRAM_NOR_TR2_R_ADDHLD_15  	   	((uint32_t)0x000000F0)

#define FMC_SRAM_NOR_TR2_ADDHLD_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR2_ADDHLD_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR2_ADDHLD_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR2_ADDHLD_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR2_ADDHLD_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR2_ADDHLD_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR2_ADDHLD_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR2_ADDHLD_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR2_ADDHLD_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR2_ADDHLD_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR2_ADDHLD_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR2_ADDHLD_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR2_ADDHLD_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR2_ADDHLD_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR2_ADDHLD_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR2_ADDHLD_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR2_R_DATAST_MASK    		((uint32_t)0x0000FF00)
#define FMC_SRAM_NOR_TR2_R_DATAST_BIT     		(8)

#define FMC_SRAM_NOR_TR2_DATAST_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR2_R_BURSTURN_MASK    	((uint32_t)0x000F0000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_BIT     	(16)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_0  	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_1  	   	((uint32_t)0x00010000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_2  	   	((uint32_t)0x00020000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_3  	   	((uint32_t)0x00030000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_4  	   	((uint32_t)0x00040000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_5  	   	((uint32_t)0x00050000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_6  	   	((uint32_t)0x00060000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_7  	   	((uint32_t)0x00070000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_8  	   	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_9  	   	((uint32_t)0x00090000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_10  	   	((uint32_t)0x000A0000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_11  	   	((uint32_t)0x000B0000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_12  	   	((uint32_t)0x000C0000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_13  	   	((uint32_t)0x000D0000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_14  	   	((uint32_t)0x000E0000)
#define FMC_SRAM_NOR_TR2_R_BURSTURN_15  	   	((uint32_t)0x000F0000)

#define FMC_SRAM_NOR_TR2_BURSTURN_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR2_BURSTURN_0  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR2_BURSTURN_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR2_BURSTURN_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR2_BURSTURN_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR2_BURSTURN_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR2_BURSTURN_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR2_BURSTURN_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR2_BURSTURN_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR2_BURSTURN_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR2_BURSTURN_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR2_BURSTURN_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR2_BURSTURN_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR2_BURSTURN_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR2_BURSTURN_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR2_BURSTURN_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR2_BURSTURN_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR2_R_CLKDIV_MASK    		((uint32_t)0x00F0000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_BIT     		(20)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_2  	   		((uint32_t)0x00100000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_3  	   		((uint32_t)0x00200000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_4  	   		((uint32_t)0x00300000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_5  	   		((uint32_t)0x00400000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_6  	   		((uint32_t)0x00500000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_7  	   		((uint32_t)0x00600000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_8  	   		((uint32_t)0x00700000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_9  	   		((uint32_t)0x00800000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_10  	   		((uint32_t)0x00900000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_11  	   		((uint32_t)0x00A00000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_12  	   		((uint32_t)0x00B00000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_13  	   		((uint32_t)0x00C00000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_14  	   		((uint32_t)0x00D00000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_15  	   		((uint32_t)0x00E00000)
#define FMC_SRAM_NOR_TR2_R_CLKDIV_16  	   		((uint32_t)0x00F00000)

#define FMC_SRAM_NOR_TR2_CLKDIV_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR2_CLKDIV_2  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR2_CLKDIV_3  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR2_CLKDIV_4  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR2_CLKDIV_5  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR2_CLKDIV_6  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR2_CLKDIV_7  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR2_CLKDIV_8  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR2_CLKDIV_9  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR2_CLKDIV_10  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR2_CLKDIV_11  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR2_CLKDIV_12  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR2_CLKDIV_13  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR2_CLKDIV_14  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR2_CLKDIV_15  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR2_CLKDIV_16  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR2_R_DATLAT_MASK    		((uint32_t)0x0F00000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_BIT     		(24)
#define FMC_SRAM_NOR_TR2_R_DATLAT_2  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_3  	   		((uint32_t)0x01000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_4  	   		((uint32_t)0x02000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_5  	   		((uint32_t)0x03000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_6  	   		((uint32_t)0x04000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_7  	   		((uint32_t)0x05000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_8  	   		((uint32_t)0x06000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_9  	   		((uint32_t)0x07000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_10  	   		((uint32_t)0x08000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_11  	   		((uint32_t)0x09000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_12  	   		((uint32_t)0x0A000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_13  	   		((uint32_t)0x0B000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_14  	   		((uint32_t)0x0C000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_15  	   		((uint32_t)0x0D000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_16  	   		((uint32_t)0x0E000000)
#define FMC_SRAM_NOR_TR2_R_DATLAT_17  	   		((uint32_t)0x0F000000)

#define FMC_SRAM_NOR_TR2_DATLAT_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR2_DATLAT_2  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR2_DATLAT_3  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR2_DATLAT_4  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR2_DATLAT_5  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR2_DATLAT_6  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR2_DATLAT_7  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR2_DATLAT_8  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR2_DATLAT_9  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR2_DATLAT_10  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR2_DATLAT_11  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR2_DATLAT_12  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR2_DATLAT_13  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR2_DATLAT_14  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR2_DATLAT_15  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR2_DATLAT_16  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR2_DATLAT_17  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR2_R_ACCMOD_MASK    		((uint32_t)0x3000000)
#define FMC_SRAM_NOR_TR2_R_ACCMOD_BIT     		(28)
#define FMC_SRAM_NOR_TR2_R_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR2_R_ACCMOD_B  	   		((uint32_t)0x10000000)
#define FMC_SRAM_NOR_TR2_R_ACCMOD_C  	   		((uint32_t)0x20000000)
#define FMC_SRAM_NOR_TR2_R_ACCMOD_D  	   		((uint32_t)0x30000000)

#define FMC_SRAM_NOR_TR2_ACCMOD_MASK    		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR2_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR2_ACCMOD_B  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR2_ACCMOD_C  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR2_ACCMOD_D  	   		((uint32_t)0x00000003)
/*--------*/


/* TODO CR3 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 CR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_CR3            		(((FMC_BCR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_CR3_OFFSET )))
#define FMC_SRAM_NOR_CR3_R           		(*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_CR3_OFFSET)))

/*--------*/
#define FMC_SRAM_NOR_CR3_R_MBKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_R_MBKEN_BIT     		(0)
#define FMC_SRAM_NOR_CR3_R_MBKEN_DIS    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_MBKEN_EN  	   		((uint32_t)0x00000001)

#define FMC_SRAM_NOR_CR3_MBKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_MBKEN_DIS    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_MBKEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_MUXEN_MASK    		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_CR3_R_MUXEN_BIT     		(1)
#define FMC_SRAM_NOR_CR3_R_MUXEN_DIS    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_MUXEN_EN  	   		((uint32_t)0x00000002)

#define FMC_SRAM_NOR_CR3_MUXEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_MUXEN_DIS    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_MUXEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_MTYP_MASK    		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_CR3_R_MTYP_BIT     		(2)
#define FMC_SRAM_NOR_CR3_R_MTYP_SRAM    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_MTYP_PSRAM	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_CR3_R_MTYP_NOR	   		((uint32_t)0x00000008)

#define FMC_SRAM_NOR_CR3_MTYP_MASK    			((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR3_MTYP_SRAM   			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_MTYP_PSRAM	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_MTYP_NOR		   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_MWID_MASK    		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_CR3_R_MWID_BIT     		(4)
#define FMC_SRAM_NOR_CR3_R_MWID_8	    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_MWID_16		   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_CR3_R_MWID_32		   		((uint32_t)0x00000020)

#define FMC_SRAM_NOR_CR3_MWID_MASK    			((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR3_MWID_8	  			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_MWID_16		   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_MWID_32		   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_FACCEN_MASK    		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_CR3_R_FACCEN_BIT     		(6)
#define FMC_SRAM_NOR_CR3_R_FACCEN_DIS	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_FACCEN_EN		   	((uint32_t)0x00000040)

#define FMC_SRAM_NOR_CR3_FACCEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_FACCEN_DIS 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_FACCEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_BURSTEN_MASK    	((uint32_t)0x00000100)
#define FMC_SRAM_NOR_CR3_R_BURSTEN_BIT     	(8)
#define FMC_SRAM_NOR_CR3_R_BURSTEN_DIS	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_BURSTEN_EN		   	((uint32_t)0x00000100)

#define FMC_SRAM_NOR_CR3_BURSTEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_BURSTEN_DIS 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_BURSTEN_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_WAITPOL_MASK    	((uint32_t)0x00000200)
#define FMC_SRAM_NOR_CR3_R_WAITPOL_BIT     	(9)
#define FMC_SRAM_NOR_CR3_R_WAITPOL_LOW	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_WAITPOL_HIGH	   	((uint32_t)0x00000200)

#define FMC_SRAM_NOR_CR3_WAITPOL_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_WAITPOL_LOW 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_WAITPOL_HIGH		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_WAITCFG_MASK    	((uint32_t)0x00000800)
#define FMC_SRAM_NOR_CR3_R_WAITCFG_BIT     	(11)
#define FMC_SRAM_NOR_CR3_R_WAITCFG_BEFORE    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_WAITCFG_NOW		   	((uint32_t)0x00000800)

#define FMC_SRAM_NOR_CR3_WAITCFG_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_WAITCFG_BEFORE		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_WAITCFG_NOW		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_WREN_MASK    		((uint32_t)0x00001000)
#define FMC_SRAM_NOR_CR3_R_WREN_BIT     		(12)
#define FMC_SRAM_NOR_CR3_R_WREN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_WREN_EN			   	((uint32_t)0x00001000)

#define FMC_SRAM_NOR_CR3_WREN_MASK    			((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_WREN_DIS				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_WREN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_WAITEN_MASK    		((uint32_t)0x00002000)
#define FMC_SRAM_NOR_CR3_R_WAITEN_BIT     		(13)
#define FMC_SRAM_NOR_CR3_R_WAITEN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_WAITEN_EN			((uint32_t)0x00002000)

#define FMC_SRAM_NOR_CR3_WAITEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_WAITEN_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_WAITEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_EXTMOD_MASK    		((uint32_t)0x00004000)
#define FMC_SRAM_NOR_CR3_R_EXTMOD_BIT     		(14)
#define FMC_SRAM_NOR_CR3_R_EXTMOD_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_EXTMOD_EN			((uint32_t)0x00004000)

#define FMC_SRAM_NOR_CR3_EXTMOD_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_EXTMOD_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_EXTMOD_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_ASYNCWAIT_MASK    	((uint32_t)0x00008000)
#define FMC_SRAM_NOR_CR3_R_ASYNCWAIT_BIT     	(15)
#define FMC_SRAM_NOR_CR3_R_ASYNCWAIT_DIS	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_ASYNCWAIT_EN		((uint32_t)0x00008000)

#define FMC_SRAM_NOR_CR3_ASYNCWAIT_MASK    	((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_ASYNCWAIT_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_ASYNCWAIT_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_CPSIZE_MASK    		((uint32_t)0x00070000)
#define FMC_SRAM_NOR_CR3_R_CPSIZE_BIT     		(16)
#define FMC_SRAM_NOR_CR3_R_CPSIZE_NO	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_CPSIZE_128B			((uint32_t)0x00010000)
#define FMC_SRAM_NOR_CR3_R_CPSIZE_256B			((uint32_t)0x00020000)
#define FMC_SRAM_NOR_CR3_R_CPSIZE_512B			((uint32_t)0x00030000)
#define FMC_SRAM_NOR_CR3_R_CPSIZE_1024			((uint32_t)0x00040000)

#define FMC_SRAM_NOR_CR3_CPSIZE_MASK    		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_CR3_CPSIZE_NO				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_CPSIZE_128B	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_CPSIZE_256B	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_CR3_CPSIZE_512B	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR3_CPSIZE_1024B	   		((uint32_t)0x00000004)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_CBURSTRW_MASK    	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_CR3_R_CBURSTRW_BIT     	(19)
#define FMC_SRAM_NOR_CR3_R_CBURSTRW_DIS	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_CBURSTRW_EN			((uint32_t)0x00080000)

#define FMC_SRAM_NOR_CR3_CBURSTRW_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_CBURSTRW_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_CBURSTRW_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_CCLKEN_MASK    		((uint32_t)0x00100000)
#define FMC_SRAM_NOR_CR3_R_CCLKEN_BIT     		(20)
#define FMC_SRAM_NOR_CR3_R_CCLKEN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_CCLKEN_EN			((uint32_t)0x00100000)

#define FMC_SRAM_NOR_CR3_CCLKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_CCLKEN_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_CCLKEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR3_R_WFDIS_MASK    		((uint32_t)0x00200000)
#define FMC_SRAM_NOR_CR3_R_WFDIS_BIT     		(21)
#define FMC_SRAM_NOR_CR3_R_WFDIS_EN	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_R_WFDIS_DIS			((uint32_t)0x00200000)

#define FMC_SRAM_NOR_CR3_WFDIS_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR3_WFDIS_EN				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR3_WFDIS_DIS		   		((uint32_t)0x00000001)
/*--------*/

/* TODO TR3 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 TR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_TR3            (((FMC_BTR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_TR3_OFFSET )))
#define FMC_SRAM_NOR_TR3_R           (*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_TR3_OFFSET)))

/*--------*/
#define FMC_SRAM_NOR_TR3_R_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR3_R_ADDSET_BIT     		(0)
#define FMC_SRAM_NOR_TR3_R_ADDSET_0    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR3_R_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR3_R_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR3_R_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR3_R_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR3_R_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR3_R_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR3_R_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR3_R_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR3_R_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR3_R_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR3_R_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR3_R_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR3_R_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR3_R_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR3_R_ADDSET_15  	   		((uint32_t)0x0000000F)

#define FMC_SRAM_NOR_TR3_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR3_ADDSET_0    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR3_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR3_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR3_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR3_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR3_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR3_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR3_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR3_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR3_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR3_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR3_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR3_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR3_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR3_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR3_ADDSET_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR3_R_ADDHLD_MASK    	((uint32_t)0x000000F0)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_BIT     	(4)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_1  	   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_2  	   		((uint32_t)0x00000020)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_3  	   		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_4  	   		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_5  	   		((uint32_t)0x00000050)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_6  	   		((uint32_t)0x00000060)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_7  	   		((uint32_t)0x00000070)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_8  	   		((uint32_t)0x00000080)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_9  	   		((uint32_t)0x00000090)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_10  	   	((uint32_t)0x000000A0)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_11  	   	((uint32_t)0x000000B0)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_12  	   	((uint32_t)0x000000C0)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_13  	   	((uint32_t)0x000000D0)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_14  	   	((uint32_t)0x000000E0)
#define FMC_SRAM_NOR_TR3_R_ADDHLD_15  	   	((uint32_t)0x000000F0)

#define FMC_SRAM_NOR_TR3_ADDHLD_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR3_ADDHLD_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR3_ADDHLD_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR3_ADDHLD_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR3_ADDHLD_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR3_ADDHLD_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR3_ADDHLD_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR3_ADDHLD_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR3_ADDHLD_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR3_ADDHLD_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR3_ADDHLD_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR3_ADDHLD_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR3_ADDHLD_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR3_ADDHLD_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR3_ADDHLD_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR3_ADDHLD_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR3_R_DATAST_MASK    		((uint32_t)0x0000FF00)
#define FMC_SRAM_NOR_TR3_R_DATAST_BIT     		(8)

#define FMC_SRAM_NOR_TR3_DATAST_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR3_R_BURSTURN_MASK    	((uint32_t)0x000F0000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_BIT     	(16)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_0  	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_1  	   	((uint32_t)0x00010000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_2  	   	((uint32_t)0x00020000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_3  	   	((uint32_t)0x00030000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_4  	   	((uint32_t)0x00040000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_5  	   	((uint32_t)0x00050000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_6  	   	((uint32_t)0x00060000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_7  	   	((uint32_t)0x00070000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_8  	   	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_9  	   	((uint32_t)0x00090000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_10  	   	((uint32_t)0x000A0000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_11  	   	((uint32_t)0x000B0000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_12  	   	((uint32_t)0x000C0000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_13  	   	((uint32_t)0x000D0000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_14  	   	((uint32_t)0x000E0000)
#define FMC_SRAM_NOR_TR3_R_BURSTURN_15  	   	((uint32_t)0x000F0000)

#define FMC_SRAM_NOR_TR3_BURSTURN_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR3_BURSTURN_0  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR3_BURSTURN_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR3_BURSTURN_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR3_BURSTURN_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR3_BURSTURN_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR3_BURSTURN_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR3_BURSTURN_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR3_BURSTURN_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR3_BURSTURN_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR3_BURSTURN_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR3_BURSTURN_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR3_BURSTURN_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR3_BURSTURN_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR3_BURSTURN_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR3_BURSTURN_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR3_BURSTURN_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR3_R_CLKDIV_MASK    		((uint32_t)0x00F0000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_BIT     		(20)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_2  	   		((uint32_t)0x00100000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_3  	   		((uint32_t)0x00200000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_4  	   		((uint32_t)0x00300000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_5  	   		((uint32_t)0x00400000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_6  	   		((uint32_t)0x00500000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_7  	   		((uint32_t)0x00600000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_8  	   		((uint32_t)0x00700000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_9  	   		((uint32_t)0x00800000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_10  	   		((uint32_t)0x00900000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_11  	   		((uint32_t)0x00A00000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_12  	   		((uint32_t)0x00B00000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_13  	   		((uint32_t)0x00C00000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_14  	   		((uint32_t)0x00D00000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_15  	   		((uint32_t)0x00E00000)
#define FMC_SRAM_NOR_TR3_R_CLKDIV_16  	   		((uint32_t)0x00F00000)

#define FMC_SRAM_NOR_TR3_CLKDIV_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR3_CLKDIV_2  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR3_CLKDIV_3  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR3_CLKDIV_4  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR3_CLKDIV_5  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR3_CLKDIV_6  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR3_CLKDIV_7  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR3_CLKDIV_8  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR3_CLKDIV_9  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR3_CLKDIV_10  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR3_CLKDIV_11  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR3_CLKDIV_12  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR3_CLKDIV_13  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR3_CLKDIV_14  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR3_CLKDIV_15  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR3_CLKDIV_16  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR3_R_DATLAT_MASK    		((uint32_t)0x0F00000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_BIT     		(24)
#define FMC_SRAM_NOR_TR3_R_DATLAT_2  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_3  	   		((uint32_t)0x01000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_4  	   		((uint32_t)0x02000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_5  	   		((uint32_t)0x03000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_6  	   		((uint32_t)0x04000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_7  	   		((uint32_t)0x05000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_8  	   		((uint32_t)0x06000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_9  	   		((uint32_t)0x07000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_10  	   		((uint32_t)0x08000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_11  	   		((uint32_t)0x09000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_12  	   		((uint32_t)0x0A000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_13  	   		((uint32_t)0x0B000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_14  	   		((uint32_t)0x0C000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_15  	   		((uint32_t)0x0D000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_16  	   		((uint32_t)0x0E000000)
#define FMC_SRAM_NOR_TR3_R_DATLAT_17  	   		((uint32_t)0x0F000000)

#define FMC_SRAM_NOR_TR3_DATLAT_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR3_DATLAT_2  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR3_DATLAT_3  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR3_DATLAT_4  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR3_DATLAT_5  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR3_DATLAT_6  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR3_DATLAT_7  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR3_DATLAT_8  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR3_DATLAT_9  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR3_DATLAT_10  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR3_DATLAT_11  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR3_DATLAT_12  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR3_DATLAT_13  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR3_DATLAT_14  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR3_DATLAT_15  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR3_DATLAT_16  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR3_DATLAT_17  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR3_R_ACCMOD_MASK    		((uint32_t)0x3000000)
#define FMC_SRAM_NOR_TR3_R_ACCMOD_BIT     		(28)
#define FMC_SRAM_NOR_TR3_R_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR3_R_ACCMOD_B  	   		((uint32_t)0x10000000)
#define FMC_SRAM_NOR_TR3_R_ACCMOD_C  	   		((uint32_t)0x20000000)
#define FMC_SRAM_NOR_TR3_R_ACCMOD_D  	   		((uint32_t)0x30000000)

#define FMC_SRAM_NOR_TR3_ACCMOD_MASK    		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR3_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR3_ACCMOD_B  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR3_ACCMOD_C  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR3_ACCMOD_D  	   		((uint32_t)0x00000003)
/*--------*/

/* TODO CR4 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 CR4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_CR4            		(((FMC_BCR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_CR4_OFFSET )))
#define FMC_SRAM_NOR_CR4_R           		(*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_CR4_OFFSET)))

/*--------*/
#define FMC_SRAM_NOR_CR4_R_MBKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_R_MBKEN_BIT     		(0)
#define FMC_SRAM_NOR_CR4_R_MBKEN_DIS    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_MBKEN_EN  	   		((uint32_t)0x00000001)

#define FMC_SRAM_NOR_CR4_MBKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_MBKEN_DIS    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_MBKEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_MUXEN_MASK    		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_CR4_R_MUXEN_BIT     		(1)
#define FMC_SRAM_NOR_CR4_R_MUXEN_DIS    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_MUXEN_EN  	   		((uint32_t)0x00000002)

#define FMC_SRAM_NOR_CR4_MUXEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_MUXEN_DIS    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_MUXEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_MTYP_MASK    		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_CR4_R_MTYP_BIT     		(2)
#define FMC_SRAM_NOR_CR4_R_MTYP_SRAM    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_MTYP_PSRAM	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_CR4_R_MTYP_NOR	   		((uint32_t)0x00000008)

#define FMC_SRAM_NOR_CR4_MTYP_MASK    			((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR4_MTYP_SRAM   			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_MTYP_PSRAM	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_MTYP_NOR		   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_MWID_MASK    		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_CR4_R_MWID_BIT     		(4)
#define FMC_SRAM_NOR_CR4_R_MWID_8	    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_MWID_16		   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_CR4_R_MWID_32		   		((uint32_t)0x00000020)

#define FMC_SRAM_NOR_CR4_MWID_MASK    			((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR4_MWID_8	  			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_MWID_16		   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_MWID_32		   		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_FACCEN_MASK    		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_CR4_R_FACCEN_BIT     		(6)
#define FMC_SRAM_NOR_CR4_R_FACCEN_DIS	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_FACCEN_EN		   	((uint32_t)0x00000040)

#define FMC_SRAM_NOR_CR4_FACCEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_FACCEN_DIS 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_FACCEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_BURSTEN_MASK    	((uint32_t)0x00000100)
#define FMC_SRAM_NOR_CR4_R_BURSTEN_BIT     	(8)
#define FMC_SRAM_NOR_CR4_R_BURSTEN_DIS	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_BURSTEN_EN		   	((uint32_t)0x00000100)

#define FMC_SRAM_NOR_CR4_BURSTEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_BURSTEN_DIS 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_BURSTEN_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_WAITPOL_MASK    	((uint32_t)0x00000200)
#define FMC_SRAM_NOR_CR4_R_WAITPOL_BIT     	(9)
#define FMC_SRAM_NOR_CR4_R_WAITPOL_LOW	    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_WAITPOL_HIGH	   	((uint32_t)0x00000200)

#define FMC_SRAM_NOR_CR4_WAITPOL_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_WAITPOL_LOW 			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_WAITPOL_HIGH		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_WAITCFG_MASK    	((uint32_t)0x00000800)
#define FMC_SRAM_NOR_CR4_R_WAITCFG_BIT     	(11)
#define FMC_SRAM_NOR_CR4_R_WAITCFG_BEFORE    	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_WAITCFG_NOW		   	((uint32_t)0x00000800)

#define FMC_SRAM_NOR_CR4_WAITCFG_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_WAITCFG_BEFORE		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_WAITCFG_NOW		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_WREN_MASK    		((uint32_t)0x00001000)
#define FMC_SRAM_NOR_CR4_R_WREN_BIT     		(12)
#define FMC_SRAM_NOR_CR4_R_WREN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_WREN_EN			   	((uint32_t)0x00001000)

#define FMC_SRAM_NOR_CR4_WREN_MASK    			((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_WREN_DIS				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_WREN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_WAITEN_MASK    		((uint32_t)0x00002000)
#define FMC_SRAM_NOR_CR4_R_WAITEN_BIT     		(13)
#define FMC_SRAM_NOR_CR4_R_WAITEN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_WAITEN_EN			((uint32_t)0x00002000)

#define FMC_SRAM_NOR_CR4_WAITEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_WAITEN_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_WAITEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_EXTMOD_MASK    		((uint32_t)0x00004000)
#define FMC_SRAM_NOR_CR4_R_EXTMOD_BIT     		(14)
#define FMC_SRAM_NOR_CR4_R_EXTMOD_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_EXTMOD_EN			((uint32_t)0x00004000)

#define FMC_SRAM_NOR_CR4_EXTMOD_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_EXTMOD_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_EXTMOD_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_ASYNCWAIT_MASK    	((uint32_t)0x00008000)
#define FMC_SRAM_NOR_CR4_R_ASYNCWAIT_BIT     	(15)
#define FMC_SRAM_NOR_CR4_R_ASYNCWAIT_DIS	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_ASYNCWAIT_EN		((uint32_t)0x00008000)

#define FMC_SRAM_NOR_CR4_ASYNCWAIT_MASK    	((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_ASYNCWAIT_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_ASYNCWAIT_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_CPSIZE_MASK    		((uint32_t)0x00070000)
#define FMC_SRAM_NOR_CR4_R_CPSIZE_BIT     		(16)
#define FMC_SRAM_NOR_CR4_R_CPSIZE_NO	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_CPSIZE_128B			((uint32_t)0x00010000)
#define FMC_SRAM_NOR_CR4_R_CPSIZE_256B			((uint32_t)0x00020000)
#define FMC_SRAM_NOR_CR4_R_CPSIZE_512B			((uint32_t)0x00030000)
#define FMC_SRAM_NOR_CR4_R_CPSIZE_1024			((uint32_t)0x00040000)

#define FMC_SRAM_NOR_CR4_CPSIZE_MASK    		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_CR4_CPSIZE_NO				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_CPSIZE_128B	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_CPSIZE_256B	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_CR4_CPSIZE_512B	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_CR4_CPSIZE_1024B	   		((uint32_t)0x00000004)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_CBURSTRW_MASK    	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_CR4_R_CBURSTRW_BIT     	(19)
#define FMC_SRAM_NOR_CR4_R_CBURSTRW_DIS	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_CBURSTRW_EN			((uint32_t)0x00080000)

#define FMC_SRAM_NOR_CR4_CBURSTRW_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_CBURSTRW_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_CBURSTRW_EN		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_CCLKEN_MASK    		((uint32_t)0x00100000)
#define FMC_SRAM_NOR_CR4_R_CCLKEN_BIT     		(20)
#define FMC_SRAM_NOR_CR4_R_CCLKEN_DIS	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_CCLKEN_EN			((uint32_t)0x00100000)

#define FMC_SRAM_NOR_CR4_CCLKEN_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_CCLKEN_DIS			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_CCLKEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_CR4_R_WFDIS_MASK    		((uint32_t)0x00200000)
#define FMC_SRAM_NOR_CR4_R_WFDIS_BIT     		(21)
#define FMC_SRAM_NOR_CR4_R_WFDIS_EN	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_R_WFDIS_DIS			((uint32_t)0x00200000)

#define FMC_SRAM_NOR_CR4_WFDIS_MASK    		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_CR4_WFDIS_EN				((uint32_t)0x00000000)
#define FMC_SRAM_NOR_CR4_WFDIS_DIS		   		((uint32_t)0x00000001)
/*--------*/

/* TODO TR4 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 TR4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_TR4            (((FMC_BTR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_TR4_OFFSET )))
#define FMC_SRAM_NOR_TR4_R           (*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_TR4_OFFSET)))

/*--------*/
#define FMC_SRAM_NOR_TR4_R_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR4_R_ADDSET_BIT     		(0)
#define FMC_SRAM_NOR_TR4_R_ADDSET_0    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR4_R_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR4_R_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR4_R_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR4_R_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR4_R_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR4_R_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR4_R_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR4_R_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR4_R_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR4_R_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR4_R_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR4_R_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR4_R_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR4_R_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR4_R_ADDSET_15  	   		((uint32_t)0x0000000F)

#define FMC_SRAM_NOR_TR4_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR4_ADDSET_0    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR4_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR4_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR4_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR4_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR4_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR4_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR4_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR4_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR4_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR4_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR4_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR4_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR4_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR4_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR4_ADDSET_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR4_R_ADDHLD_MASK    	((uint32_t)0x000000F0)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_BIT     	(4)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_1  	   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_2  	   		((uint32_t)0x00000020)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_3  	   		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_4  	   		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_5  	   		((uint32_t)0x00000050)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_6  	   		((uint32_t)0x00000060)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_7  	   		((uint32_t)0x00000070)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_8  	   		((uint32_t)0x00000080)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_9  	   		((uint32_t)0x00000090)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_10  	   	((uint32_t)0x000000A0)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_11  	   	((uint32_t)0x000000B0)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_12  	   	((uint32_t)0x000000C0)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_13  	   	((uint32_t)0x000000D0)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_14  	   	((uint32_t)0x000000E0)
#define FMC_SRAM_NOR_TR4_R_ADDHLD_15  	   	((uint32_t)0x000000F0)

#define FMC_SRAM_NOR_TR4_ADDHLD_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR4_ADDHLD_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR4_ADDHLD_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR4_ADDHLD_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR4_ADDHLD_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR4_ADDHLD_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR4_ADDHLD_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR4_ADDHLD_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR4_ADDHLD_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR4_ADDHLD_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR4_ADDHLD_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR4_ADDHLD_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR4_ADDHLD_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR4_ADDHLD_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR4_ADDHLD_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR4_ADDHLD_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR4_R_DATAST_MASK    		((uint32_t)0x0000FF00)
#define FMC_SRAM_NOR_TR4_R_DATAST_BIT     		(8)

#define FMC_SRAM_NOR_TR4_DATAST_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR4_R_BURSTURN_MASK    	((uint32_t)0x000F0000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_BIT     	(16)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_0  	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_1  	   	((uint32_t)0x00010000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_2  	   	((uint32_t)0x00020000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_3  	   	((uint32_t)0x00030000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_4  	   	((uint32_t)0x00040000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_5  	   	((uint32_t)0x00050000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_6  	   	((uint32_t)0x00060000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_7  	   	((uint32_t)0x00070000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_8  	   	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_9  	   	((uint32_t)0x00090000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_10  	   	((uint32_t)0x000A0000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_11  	   	((uint32_t)0x000B0000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_12  	   	((uint32_t)0x000C0000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_13  	   	((uint32_t)0x000D0000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_14  	   	((uint32_t)0x000E0000)
#define FMC_SRAM_NOR_TR4_R_BURSTURN_15  	   	((uint32_t)0x000F0000)

#define FMC_SRAM_NOR_TR4_BURSTURN_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR4_BURSTURN_0  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR4_BURSTURN_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR4_BURSTURN_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR4_BURSTURN_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR4_BURSTURN_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR4_BURSTURN_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR4_BURSTURN_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR4_BURSTURN_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR4_BURSTURN_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR4_BURSTURN_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR4_BURSTURN_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR4_BURSTURN_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR4_BURSTURN_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR4_BURSTURN_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR4_BURSTURN_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR4_BURSTURN_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR4_R_CLKDIV_MASK    		((uint32_t)0x00F0000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_BIT     		(20)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_2  	   		((uint32_t)0x00100000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_3  	   		((uint32_t)0x00200000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_4  	   		((uint32_t)0x00300000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_5  	   		((uint32_t)0x00400000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_6  	   		((uint32_t)0x00500000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_7  	   		((uint32_t)0x00600000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_8  	   		((uint32_t)0x00700000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_9  	   		((uint32_t)0x00800000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_10  	   		((uint32_t)0x00900000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_11  	   		((uint32_t)0x00A00000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_12  	   		((uint32_t)0x00B00000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_13  	   		((uint32_t)0x00C00000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_14  	   		((uint32_t)0x00D00000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_15  	   		((uint32_t)0x00E00000)
#define FMC_SRAM_NOR_TR4_R_CLKDIV_16  	   		((uint32_t)0x00F00000)

#define FMC_SRAM_NOR_TR4_CLKDIV_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR4_CLKDIV_2  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR4_CLKDIV_3  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR4_CLKDIV_4  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR4_CLKDIV_5  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR4_CLKDIV_6  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR4_CLKDIV_7  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR4_CLKDIV_8  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR4_CLKDIV_9  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR4_CLKDIV_10  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR4_CLKDIV_11  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR4_CLKDIV_12  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR4_CLKDIV_13  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR4_CLKDIV_14  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR4_CLKDIV_15  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR4_CLKDIV_16  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR4_R_DATLAT_MASK    		((uint32_t)0x0F00000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_BIT     		(24)
#define FMC_SRAM_NOR_TR4_R_DATLAT_2  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_3  	   		((uint32_t)0x01000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_4  	   		((uint32_t)0x02000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_5  	   		((uint32_t)0x03000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_6  	   		((uint32_t)0x04000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_7  	   		((uint32_t)0x05000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_8  	   		((uint32_t)0x06000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_9  	   		((uint32_t)0x07000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_10  	   		((uint32_t)0x08000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_11  	   		((uint32_t)0x09000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_12  	   		((uint32_t)0x0A000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_13  	   		((uint32_t)0x0B000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_14  	   		((uint32_t)0x0C000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_15  	   		((uint32_t)0x0D000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_16  	   		((uint32_t)0x0E000000)
#define FMC_SRAM_NOR_TR4_R_DATLAT_17  	   		((uint32_t)0x0F000000)

#define FMC_SRAM_NOR_TR4_DATLAT_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_TR4_DATLAT_2  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR4_DATLAT_3  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR4_DATLAT_4  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR4_DATLAT_5  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR4_DATLAT_6  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_TR4_DATLAT_7  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_TR4_DATLAT_8  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_TR4_DATLAT_9  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_TR4_DATLAT_10  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_TR4_DATLAT_11  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_TR4_DATLAT_12  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_TR4_DATLAT_13  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_TR4_DATLAT_14  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_TR4_DATLAT_15  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_TR4_DATLAT_16  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_TR4_DATLAT_17  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_TR4_R_ACCMOD_MASK    		((uint32_t)0x3000000)
#define FMC_SRAM_NOR_TR4_R_ACCMOD_BIT     		(28)
#define FMC_SRAM_NOR_TR4_R_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR4_R_ACCMOD_B  	   		((uint32_t)0x10000000)
#define FMC_SRAM_NOR_TR4_R_ACCMOD_C  	   		((uint32_t)0x20000000)
#define FMC_SRAM_NOR_TR4_R_ACCMOD_D  	   		((uint32_t)0x30000000)

#define FMC_SRAM_NOR_TR4_ACCMOD_MASK    		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_TR4_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_TR4_ACCMOD_B  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_TR4_ACCMOD_C  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_TR4_ACCMOD_D  	   		((uint32_t)0x00000003)
/*--------*/


/* TODO WTR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 WTR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_WTR1            (((FMC_BWTR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_WTR1_OFFSET )))
#define FMC_SRAM_NOR_WTR1_R           (*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_WTR1_OFFSET)))


/*--------*/
#define FMC_SRAM_NOR_WTR1_R_ADDSET_MASK    	((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_BIT     	(0)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_0    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_10  	   	((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_11  	   	((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_12  	   	((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_13  	   	((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_14  	   	((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR1_R_ADDSET_15  	   	((uint32_t)0x0000000F)

#define FMC_SRAM_NOR_WTR1_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR1_ADDSET_0    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR1_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR1_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR1_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR1_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR1_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR1_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR1_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR1_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR1_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR1_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR1_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR1_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR1_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR1_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR1_ADDSET_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_MASK    	((uint32_t)0x000000F0)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_BIT     	(4)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_1  	   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_2  	   		((uint32_t)0x00000020)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_3  	   		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_4  	   		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_5  	   		((uint32_t)0x00000050)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_6  	   		((uint32_t)0x00000060)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_7  	   		((uint32_t)0x00000070)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_8  	   		((uint32_t)0x00000080)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_9  	   		((uint32_t)0x00000090)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_10  	   	((uint32_t)0x000000A0)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_11  	   	((uint32_t)0x000000B0)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_12  	   	((uint32_t)0x000000C0)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_13  	   	((uint32_t)0x000000D0)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_14  	   	((uint32_t)0x000000E0)
#define FMC_SRAM_NOR_WTR1_R_ADDHLD_15  	   	((uint32_t)0x000000F0)

#define FMC_SRAM_NOR_WTR1_ADDHLD_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR1_ADDHLD_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR1_ADDHLD_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR1_ADDHLD_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR1_ADDHLD_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR1_ADDHLD_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR1_ADDHLD_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR1_ADDHLD_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR1_ADDHLD_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR1_ADDHLD_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR1_ADDHLD_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR1_ADDHLD_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR1_ADDHLD_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR1_ADDHLD_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR1_ADDHLD_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR1_ADDHLD_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR1_R_DATAST_MASK    	((uint32_t)0x0000FF00)
#define FMC_SRAM_NOR_WTR1_R_DATAST_BIT     	(8)

#define FMC_SRAM_NOR_WTR1_DATAST_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_MASK    	((uint32_t)0x000F0000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_BIT     	(16)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_0  	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_1  	   	((uint32_t)0x00010000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_2  	   	((uint32_t)0x00020000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_3  	   	((uint32_t)0x00030000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_4  	   	((uint32_t)0x00040000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_5  	   	((uint32_t)0x00050000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_6  	   	((uint32_t)0x00060000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_7  	   	((uint32_t)0x00070000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_8  	   	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_9  	   	((uint32_t)0x00090000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_10  	   	((uint32_t)0x000A0000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_11  	   	((uint32_t)0x000B0000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_12  	   	((uint32_t)0x000C0000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_13  	   	((uint32_t)0x000D0000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_14  	   	((uint32_t)0x000E0000)
#define FMC_SRAM_NOR_WTR1_R_BURSTURN_15  	   	((uint32_t)0x000F0000)

#define FMC_SRAM_NOR_WTR1_BURSTURN_MASK    	((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR1_BURSTURN_0  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR1_BURSTURN_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR1_BURSTURN_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR1_BURSTURN_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR1_BURSTURN_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR1_BURSTURN_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR1_BURSTURN_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR1_BURSTURN_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR1_BURSTURN_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR1_BURSTURN_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR1_BURSTURN_10  	  	((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR1_BURSTURN_11  	  	((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR1_BURSTURN_12  	   	((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR1_BURSTURN_13  	   	((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR1_BURSTURN_14  	   	((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR1_BURSTURN_15  	   	((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR1_R_ACCMOD_MASK    	((uint32_t)0x3000000)
#define FMC_SRAM_NOR_WTR1_R_ACCMOD_BIT     	(28)
#define FMC_SRAM_NOR_WTR1_R_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR1_R_ACCMOD_B  	   		((uint32_t)0x10000000)
#define FMC_SRAM_NOR_WTR1_R_ACCMOD_C  	   		((uint32_t)0x20000000)
#define FMC_SRAM_NOR_WTR1_R_ACCMOD_D  	   		((uint32_t)0x30000000)

#define FMC_SRAM_NOR_WTR1_ACCMOD_MASK    		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR1_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR1_ACCMOD_B  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR1_ACCMOD_C  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR1_ACCMOD_D  	   		((uint32_t)0x00000003)
/*--------*/

/* TODO WTR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 WTR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_WTR2            (((FMC_BWTR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_WTR2_OFFSET )))
#define FMC_SRAM_NOR_WTR2_R           (*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_WTR2_OFFSET)))

/*--------*/
#define FMC_SRAM_NOR_WTR2_R_ADDSET_MASK    	((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_BIT     	(0)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_0    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_10  	   	((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_11  	   	((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_12  	   	((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_13  	   	((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_14  	   	((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR2_R_ADDSET_15  	   	((uint32_t)0x0000000F)

#define FMC_SRAM_NOR_WTR2_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR2_ADDSET_0    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR2_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR2_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR2_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR2_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR2_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR2_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR2_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR2_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR2_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR2_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR2_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR2_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR2_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR2_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR2_ADDSET_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_MASK    	((uint32_t)0x000000F0)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_BIT     	(4)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_1  	   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_2  	   		((uint32_t)0x00000020)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_3  	   		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_4  	   		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_5  	   		((uint32_t)0x00000050)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_6  	   		((uint32_t)0x00000060)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_7  	   		((uint32_t)0x00000070)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_8  	   		((uint32_t)0x00000080)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_9  	   		((uint32_t)0x00000090)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_10  	   	((uint32_t)0x000000A0)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_11  	   	((uint32_t)0x000000B0)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_12  	   	((uint32_t)0x000000C0)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_13  	   	((uint32_t)0x000000D0)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_14  	   	((uint32_t)0x000000E0)
#define FMC_SRAM_NOR_WTR2_R_ADDHLD_15  	   	((uint32_t)0x000000F0)

#define FMC_SRAM_NOR_WTR2_ADDHLD_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR2_ADDHLD_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR2_ADDHLD_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR2_ADDHLD_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR2_ADDHLD_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR2_ADDHLD_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR2_ADDHLD_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR2_ADDHLD_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR2_ADDHLD_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR2_ADDHLD_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR2_ADDHLD_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR2_ADDHLD_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR2_ADDHLD_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR2_ADDHLD_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR2_ADDHLD_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR2_ADDHLD_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR2_R_DATAST_MASK    	((uint32_t)0x0000FF00)
#define FMC_SRAM_NOR_WTR2_R_DATAST_BIT     	(8)

#define FMC_SRAM_NOR_WTR2_DATAST_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_MASK    	((uint32_t)0x000F0000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_BIT     	(16)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_0  	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_1  	   	((uint32_t)0x00010000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_2  	   	((uint32_t)0x00020000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_3  	   	((uint32_t)0x00030000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_4  	   	((uint32_t)0x00040000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_5  	   	((uint32_t)0x00050000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_6  	   	((uint32_t)0x00060000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_7  	   	((uint32_t)0x00070000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_8  	   	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_9  	   	((uint32_t)0x00090000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_10  	   	((uint32_t)0x000A0000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_11  	   	((uint32_t)0x000B0000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_12  	   	((uint32_t)0x000C0000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_13  	   	((uint32_t)0x000D0000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_14  	   	((uint32_t)0x000E0000)
#define FMC_SRAM_NOR_WTR2_R_BURSTURN_15  	   	((uint32_t)0x000F0000)

#define FMC_SRAM_NOR_WTR2_BURSTURN_MASK    	((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR2_BURSTURN_0  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR2_BURSTURN_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR2_BURSTURN_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR2_BURSTURN_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR2_BURSTURN_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR2_BURSTURN_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR2_BURSTURN_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR2_BURSTURN_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR2_BURSTURN_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR2_BURSTURN_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR2_BURSTURN_10  	  	((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR2_BURSTURN_11  	  	((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR2_BURSTURN_12  	   	((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR2_BURSTURN_13  	   	((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR2_BURSTURN_14  	   	((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR2_BURSTURN_15  	   	((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR2_R_ACCMOD_MASK    	((uint32_t)0x3000000)
#define FMC_SRAM_NOR_WTR2_R_ACCMOD_BIT     	(28)
#define FMC_SRAM_NOR_WTR2_R_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR2_R_ACCMOD_B  	   		((uint32_t)0x10000000)
#define FMC_SRAM_NOR_WTR2_R_ACCMOD_C  	   		((uint32_t)0x20000000)
#define FMC_SRAM_NOR_WTR2_R_ACCMOD_D  	   		((uint32_t)0x30000000)

#define FMC_SRAM_NOR_WTR2_ACCMOD_MASK    		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR2_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR2_ACCMOD_B  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR2_ACCMOD_C  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR2_ACCMOD_D  	   		((uint32_t)0x00000003)
/*--------*/


/* TODO WTR3 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 WTR3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_WTR3            (((FMC_BWTR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_WTR3_OFFSET )))
#define FMC_SRAM_NOR_WTR3_R           (*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_WTR3_OFFSET)))


/*--------*/
#define FMC_SRAM_NOR_WTR3_R_ADDSET_MASK    	((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_BIT     	(0)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_0    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_10  	   	((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_11  	   	((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_12  	   	((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_13  	   	((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_14  	   	((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR3_R_ADDSET_15  	   	((uint32_t)0x0000000F)

#define FMC_SRAM_NOR_WTR3_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR3_ADDSET_0    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR3_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR3_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR3_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR3_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR3_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR3_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR3_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR3_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR3_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR3_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR3_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR3_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR3_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR3_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR3_ADDSET_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_MASK    	((uint32_t)0x000000F0)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_BIT     	(4)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_1  	   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_2  	   		((uint32_t)0x00000020)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_3  	   		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_4  	   		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_5  	   		((uint32_t)0x00000050)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_6  	   		((uint32_t)0x00000060)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_7  	   		((uint32_t)0x00000070)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_8  	   		((uint32_t)0x00000080)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_9  	   		((uint32_t)0x00000090)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_10  	   	((uint32_t)0x000000A0)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_11  	   	((uint32_t)0x000000B0)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_12  	   	((uint32_t)0x000000C0)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_13  	   	((uint32_t)0x000000D0)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_14  	   	((uint32_t)0x000000E0)
#define FMC_SRAM_NOR_WTR3_R_ADDHLD_15  	   	((uint32_t)0x000000F0)

#define FMC_SRAM_NOR_WTR3_ADDHLD_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR3_ADDHLD_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR3_ADDHLD_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR3_ADDHLD_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR3_ADDHLD_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR3_ADDHLD_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR3_ADDHLD_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR3_ADDHLD_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR3_ADDHLD_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR3_ADDHLD_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR3_ADDHLD_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR3_ADDHLD_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR3_ADDHLD_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR3_ADDHLD_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR3_ADDHLD_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR3_ADDHLD_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR3_R_DATAST_MASK    	((uint32_t)0x0000FF00)
#define FMC_SRAM_NOR_WTR3_R_DATAST_BIT     	(8)

#define FMC_SRAM_NOR_WTR3_DATAST_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_MASK    	((uint32_t)0x000F0000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_BIT     	(16)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_0  	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_1  	   	((uint32_t)0x00010000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_2  	   	((uint32_t)0x00020000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_3  	   	((uint32_t)0x00030000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_4  	   	((uint32_t)0x00040000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_5  	   	((uint32_t)0x00050000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_6  	   	((uint32_t)0x00060000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_7  	   	((uint32_t)0x00070000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_8  	   	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_9  	   	((uint32_t)0x00090000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_10  	   	((uint32_t)0x000A0000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_11  	   	((uint32_t)0x000B0000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_12  	   	((uint32_t)0x000C0000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_13  	   	((uint32_t)0x000D0000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_14  	   	((uint32_t)0x000E0000)
#define FMC_SRAM_NOR_WTR3_R_BURSTURN_15  	   	((uint32_t)0x000F0000)

#define FMC_SRAM_NOR_WTR3_BURSTURN_MASK    	((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR3_BURSTURN_0  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR3_BURSTURN_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR3_BURSTURN_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR3_BURSTURN_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR3_BURSTURN_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR3_BURSTURN_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR3_BURSTURN_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR3_BURSTURN_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR3_BURSTURN_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR3_BURSTURN_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR3_BURSTURN_10  	  	((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR3_BURSTURN_11  	  	((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR3_BURSTURN_12  	   	((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR3_BURSTURN_13  	   	((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR3_BURSTURN_14  	   	((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR3_BURSTURN_15  	   	((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR3_R_ACCMOD_MASK    	((uint32_t)0x3000000)
#define FMC_SRAM_NOR_WTR3_R_ACCMOD_BIT     	(28)
#define FMC_SRAM_NOR_WTR3_R_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR3_R_ACCMOD_B  	   		((uint32_t)0x10000000)
#define FMC_SRAM_NOR_WTR3_R_ACCMOD_C  	   		((uint32_t)0x20000000)
#define FMC_SRAM_NOR_WTR3_R_ACCMOD_D  	   		((uint32_t)0x30000000)

#define FMC_SRAM_NOR_WTR3_ACCMOD_MASK    		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR3_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR3_ACCMOD_B  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR3_ACCMOD_C  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR3_ACCMOD_D  	   		((uint32_t)0x00000003)
/*--------*/

/* TODO WTR4 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 WTR4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SRAM_NOR_WTR4            (((FMC_BWTR_TypeDef*)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_WTR4_OFFSET )))
#define FMC_SRAM_NOR_WTR4_R           (*((__IO uint32_t *)(FMC_SRAM_NOR_R_BASE+FMC_SRAM_NOR_WTR4_OFFSET)))


/*--------*/
#define FMC_SRAM_NOR_WTR4_R_ADDSET_MASK    	((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_BIT     	(0)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_0    		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_10  	   	((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_11  	   	((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_12  	   	((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_13  	   	((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_14  	   	((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR4_R_ADDSET_15  	   	((uint32_t)0x0000000F)

#define FMC_SRAM_NOR_WTR4_ADDSET_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR4_ADDSET_0    			((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR4_ADDSET_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR4_ADDSET_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR4_ADDSET_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR4_ADDSET_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR4_ADDSET_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR4_ADDSET_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR4_ADDSET_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR4_ADDSET_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR4_ADDSET_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR4_ADDSET_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR4_ADDSET_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR4_ADDSET_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR4_ADDSET_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR4_ADDSET_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR4_ADDSET_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_MASK    	((uint32_t)0x000000F0)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_BIT     	(4)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_1  	   		((uint32_t)0x00000010)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_2  	   		((uint32_t)0x00000020)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_3  	   		((uint32_t)0x00000030)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_4  	   		((uint32_t)0x00000040)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_5  	   		((uint32_t)0x00000050)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_6  	   		((uint32_t)0x00000060)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_7  	   		((uint32_t)0x00000070)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_8  	   		((uint32_t)0x00000080)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_9  	   		((uint32_t)0x00000090)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_10  	   	((uint32_t)0x000000A0)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_11  	   	((uint32_t)0x000000B0)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_12  	   	((uint32_t)0x000000C0)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_13  	   	((uint32_t)0x000000D0)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_14  	   	((uint32_t)0x000000E0)
#define FMC_SRAM_NOR_WTR4_R_ADDHLD_15  	   	((uint32_t)0x000000F0)

#define FMC_SRAM_NOR_WTR4_ADDHLD_MASK    		((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR4_ADDHLD_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR4_ADDHLD_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR4_ADDHLD_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR4_ADDHLD_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR4_ADDHLD_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR4_ADDHLD_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR4_ADDHLD_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR4_ADDHLD_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR4_ADDHLD_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR4_ADDHLD_10  	   		((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR4_ADDHLD_11  	   		((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR4_ADDHLD_12  	   		((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR4_ADDHLD_13  	   		((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR4_ADDHLD_14  	   		((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR4_ADDHLD_15  	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR4_R_DATAST_MASK    	((uint32_t)0x0000FF00)
#define FMC_SRAM_NOR_WTR4_R_DATAST_BIT     	(8)

#define FMC_SRAM_NOR_WTR4_DATAST_MASK    		((uint32_t)0x000000FF)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_MASK    	((uint32_t)0x000F0000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_BIT     	(16)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_0  	   	((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_1  	   	((uint32_t)0x00010000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_2  	   	((uint32_t)0x00020000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_3  	   	((uint32_t)0x00030000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_4  	   	((uint32_t)0x00040000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_5  	   	((uint32_t)0x00050000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_6  	   	((uint32_t)0x00060000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_7  	   	((uint32_t)0x00070000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_8  	   	((uint32_t)0x00080000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_9  	   	((uint32_t)0x00090000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_10  	   	((uint32_t)0x000A0000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_11  	   	((uint32_t)0x000B0000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_12  	   	((uint32_t)0x000C0000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_13  	   	((uint32_t)0x000D0000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_14  	   	((uint32_t)0x000E0000)
#define FMC_SRAM_NOR_WTR4_R_BURSTURN_15  	   	((uint32_t)0x000F0000)

#define FMC_SRAM_NOR_WTR4_BURSTURN_MASK    	((uint32_t)0x0000000F)
#define FMC_SRAM_NOR_WTR4_BURSTURN_0  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR4_BURSTURN_1  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR4_BURSTURN_2  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR4_BURSTURN_3  	   		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR4_BURSTURN_4  	   		((uint32_t)0x00000004)
#define FMC_SRAM_NOR_WTR4_BURSTURN_5  	   		((uint32_t)0x00000005)
#define FMC_SRAM_NOR_WTR4_BURSTURN_6  	   		((uint32_t)0x00000006)
#define FMC_SRAM_NOR_WTR4_BURSTURN_7  	   		((uint32_t)0x00000007)
#define FMC_SRAM_NOR_WTR4_BURSTURN_8  	   		((uint32_t)0x00000008)
#define FMC_SRAM_NOR_WTR4_BURSTURN_9  	   		((uint32_t)0x00000009)
#define FMC_SRAM_NOR_WTR4_BURSTURN_10  	  	((uint32_t)0x0000000A)
#define FMC_SRAM_NOR_WTR4_BURSTURN_11  	  	((uint32_t)0x0000000B)
#define FMC_SRAM_NOR_WTR4_BURSTURN_12  	   	((uint32_t)0x0000000C)
#define FMC_SRAM_NOR_WTR4_BURSTURN_13  	   	((uint32_t)0x0000000D)
#define FMC_SRAM_NOR_WTR4_BURSTURN_14  	   	((uint32_t)0x0000000E)
#define FMC_SRAM_NOR_WTR4_BURSTURN_15  	   	((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SRAM_NOR_WTR4_R_ACCMOD_MASK    	((uint32_t)0x3000000)
#define FMC_SRAM_NOR_WTR4_R_ACCMOD_BIT     	(28)
#define FMC_SRAM_NOR_WTR4_R_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR4_R_ACCMOD_B  	   		((uint32_t)0x10000000)
#define FMC_SRAM_NOR_WTR4_R_ACCMOD_C  	   		((uint32_t)0x20000000)
#define FMC_SRAM_NOR_WTR4_R_ACCMOD_D  	   		((uint32_t)0x30000000)

#define FMC_SRAM_NOR_WTR4_ACCMOD_MASK    		((uint32_t)0x00000003)
#define FMC_SRAM_NOR_WTR4_ACCMOD_A  	   		((uint32_t)0x00000000)
#define FMC_SRAM_NOR_WTR4_ACCMOD_B  	   		((uint32_t)0x00000001)
#define FMC_SRAM_NOR_WTR4_ACCMOD_C  	   		((uint32_t)0x00000002)
#define FMC_SRAM_NOR_WTR4_ACCMOD_D  	   		((uint32_t)0x00000003)
/*--------*/

/* TODO CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_NAND_CR            (((FMC_PCR_TypeDef*)(FMC_NAND_R_BASE+FMC_NAND_CR_OFFSET )))
#define FMC_NAND_CR_R           (*((__IO uint32_t *)(FMC_NAND_R_BASE+FMC_NAND_CR_OFFSET)))

/*--------*/
#define FMC_NAND_CR_R_PWAITEN_MASK    		((uint32_t)0x00000002)
#define FMC_NAND_CR_R_PWAITEN_BIT     		(1)
#define FMC_NAND_CR_R_PWAITEN_DIS    		((uint32_t)0x00000000)
#define FMC_NAND_CR_R_PWAITEN_EN  	   		((uint32_t)0x00000002)

#define FMC_NAND_CR_PWAITEN_MASK    		((uint32_t)0x00000001)
#define FMC_NAND_CR_PWAITEN_DIS    		((uint32_t)0x00000000)
#define FMC_NAND_CR_PWAITEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_CR_R_PBKEN_MASK    		((uint32_t)0x00000004)
#define FMC_NAND_CR_R_PBKEN_BIT     		(2)
#define FMC_NAND_CR_R_PBKEN_DIS    		((uint32_t)0x00000000)
#define FMC_NAND_CR_R_PBKEN_EN  	   		((uint32_t)0x00000004)

#define FMC_NAND_CR_PBKEN_MASK    			((uint32_t)0x00000001)
#define FMC_NAND_CR_PBKEN_DIS    			((uint32_t)0x00000000)
#define FMC_NAND_CR_PBKEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_CR_R_PTYP_MASK    		((uint32_t)0x00000008)
#define FMC_NAND_CR_R_PTYP_BIT     		(3)
#define FMC_NAND_CR_R_PTYP_EN  	   		((uint32_t)0x00000008)

#define FMC_NAND_CR_PTYP_MASK    			((uint32_t)0x00000001)
#define FMC_NAND_CR_PTYP_NAND		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_CR_R_PWID_MASK    		((uint32_t)0x00000030)
#define FMC_NAND_CR_R_PWID_BIT     		(4)
#define FMC_NAND_CR_R_PWID_8    			((uint32_t)0x00000000)
#define FMC_NAND_CR_R_PWID_16  	   		((uint32_t)0x00000010)

#define FMC_NAND_CR_PWID_MASK    			((uint32_t)0x00000003)
#define FMC_NAND_CR_PWID_8	    			((uint32_t)0x00000000)
#define FMC_NAND_CR_PWID_16		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_CR_R_ECCEN_MASK    		((uint32_t)0x00000040)
#define FMC_NAND_CR_R_ECCEN_BIT     		(6)
#define FMC_NAND_CR_R_ECCEN_DIS    		((uint32_t)0x00000000)
#define FMC_NAND_CR_R_ECCEN_EN  	   		((uint32_t)0x00000040)

#define FMC_NAND_CR_ECCEN_MASK    			((uint32_t)0x00000001)
#define FMC_NAND_CR_ECCEN_DIS    			((uint32_t)0x00000000)
#define FMC_NAND_CR_ECCEN_EN		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_CR_R_TCLR_MASK    		((uint32_t)0x00001E00)
#define FMC_NAND_CR_R_TCLR_BIT     		(9)
#define FMC_NAND_CR_R_TCLR_1    			((uint32_t)0x00000000)
#define FMC_NAND_CR_R_TCLR_2	  	   		((uint32_t)0x00000200)
#define FMC_NAND_CR_R_TCLR_3	  	   		((uint32_t)0x00000400)
#define FMC_NAND_CR_R_TCLR_4	  	   		((uint32_t)0x00000600)
#define FMC_NAND_CR_R_TCLR_5	  	   		((uint32_t)0x00000800)
#define FMC_NAND_CR_R_TCLR_6	  	   		((uint32_t)0x00000A00)
#define FMC_NAND_CR_R_TCLR_7	  	   		((uint32_t)0x00000C00)
#define FMC_NAND_CR_R_TCLR_8	  	   		((uint32_t)0x00000E00)
#define FMC_NAND_CR_R_TCLR_9	  	   		((uint32_t)0x00001000)
#define FMC_NAND_CR_R_TCLR_10	  	   		((uint32_t)0x00001200)
#define FMC_NAND_CR_R_TCLR_11	  	   		((uint32_t)0x00001400)
#define FMC_NAND_CR_R_TCLR_12	  	   		((uint32_t)0x00001600)
#define FMC_NAND_CR_R_TCLR_13	  	   		((uint32_t)0x00001800)
#define FMC_NAND_CR_R_TCLR_14	  	   		((uint32_t)0x00001A00)
#define FMC_NAND_CR_R_TCLR_15	  	   		((uint32_t)0x00001C00)
#define FMC_NAND_CR_R_TCLR_16	  	   		((uint32_t)0x00001E00)

#define FMC_NAND_CR_TCLR_MASK    			((uint32_t)0x0000000F)
#define FMC_NAND_CR_TCLR_1	    			((uint32_t)0x00000000)
#define FMC_NAND_CR_TCLR_2			   		((uint32_t)0x00000001)
#define FMC_NAND_CR_TCLR_3			   		((uint32_t)0x00000002)
#define FMC_NAND_CR_TCLR_4			   		((uint32_t)0x00000003)
#define FMC_NAND_CR_TCLR_5			   		((uint32_t)0x00000004)
#define FMC_NAND_CR_TCLR_6			   		((uint32_t)0x00000005)
#define FMC_NAND_CR_TCLR_7			   		((uint32_t)0x00000006)
#define FMC_NAND_CR_TCLR_8			   		((uint32_t)0x00000007)
#define FMC_NAND_CR_TCLR_9			   		((uint32_t)0x00000008)
#define FMC_NAND_CR_TCLR_10		   		((uint32_t)0x00000009)
#define FMC_NAND_CR_TCLR_11		   		((uint32_t)0x0000000A)
#define FMC_NAND_CR_TCLR_12		   		((uint32_t)0x0000000B)
#define FMC_NAND_CR_TCLR_13		   		((uint32_t)0x0000000C)
#define FMC_NAND_CR_TCLR_14		   		((uint32_t)0x0000000D)
#define FMC_NAND_CR_TCLR_15		   		((uint32_t)0x0000000E)
#define FMC_NAND_CR_TCLR_16		   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_NAND_CR_R_TAR_MASK    			((uint32_t)0x0001E000)
#define FMC_NAND_CR_R_TAR_BIT     			(13)
#define FMC_NAND_CR_R_TAR_1    			((uint32_t)0x00000000)
#define FMC_NAND_CR_R_TAR_2	  	   		((uint32_t)0x00002000)
#define FMC_NAND_CR_R_TAR_3	  	   		((uint32_t)0x00004000)
#define FMC_NAND_CR_R_TAR_4	  	   		((uint32_t)0x00006000)
#define FMC_NAND_CR_R_TAR_5	  	   		((uint32_t)0x00008000)
#define FMC_NAND_CR_R_TAR_6	  	   		((uint32_t)0x0000A000)
#define FMC_NAND_CR_R_TAR_7	  	   		((uint32_t)0x0000C000)
#define FMC_NAND_CR_R_TAR_8	  	   		((uint32_t)0x0000E000)
#define FMC_NAND_CR_R_TAR_9	  	   		((uint32_t)0x00010000)
#define FMC_NAND_CR_R_TAR_10	  	   		((uint32_t)0x00012000)
#define FMC_NAND_CR_R_TAR_11	  	   		((uint32_t)0x00014000)
#define FMC_NAND_CR_R_TAR_12	  	   		((uint32_t)0x00016000)
#define FMC_NAND_CR_R_TAR_13	  	   		((uint32_t)0x00018000)
#define FMC_NAND_CR_R_TAR_14	  	   		((uint32_t)0x0001A000)
#define FMC_NAND_CR_R_TAR_15	  	   		((uint32_t)0x0001C000)
#define FMC_NAND_CR_R_TAR_16	  	   		((uint32_t)0x0001E000)

#define FMC_NAND_CR_TAR_MASK    			((uint32_t)0x0000000F)
#define FMC_NAND_CR_TAR_1	    			((uint32_t)0x00000000)
#define FMC_NAND_CR_TAR_2			   		((uint32_t)0x00000001)
#define FMC_NAND_CR_TAR_3			   		((uint32_t)0x00000002)
#define FMC_NAND_CR_TAR_4			   		((uint32_t)0x00000003)
#define FMC_NAND_CR_TAR_5			   		((uint32_t)0x00000004)
#define FMC_NAND_CR_TAR_6			   		((uint32_t)0x00000005)
#define FMC_NAND_CR_TAR_7			   		((uint32_t)0x00000006)
#define FMC_NAND_CR_TAR_8			   		((uint32_t)0x00000007)
#define FMC_NAND_CR_TAR_9			   		((uint32_t)0x00000008)
#define FMC_NAND_CR_TAR_10		   			((uint32_t)0x00000009)
#define FMC_NAND_CR_TAR_11		   			((uint32_t)0x0000000A)
#define FMC_NAND_CR_TAR_12		   			((uint32_t)0x0000000B)
#define FMC_NAND_CR_TAR_13		   			((uint32_t)0x0000000C)
#define FMC_NAND_CR_TAR_14		   			((uint32_t)0x0000000D)
#define FMC_NAND_CR_TAR_15		   			((uint32_t)0x0000000E)
#define FMC_NAND_CR_TAR_16		   			((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_NAND_CR_R_ECCPS_MASK    		((uint32_t)0x000E0000)
#define FMC_NAND_CR_R_ECCPS_BIT     		(17)
#define FMC_NAND_CR_R_ECCPS_256B  			((uint32_t)0x00000000)
#define FMC_NAND_CR_R_ECCPS_512B 	   		((uint32_t)0x00020000)
#define FMC_NAND_CR_R_ECCPS_1024B 	   		((uint32_t)0x00040000)
#define FMC_NAND_CR_R_ECCPS_2048B	   		((uint32_t)0x00060000)
#define FMC_NAND_CR_R_ECCPS_4096B	   		((uint32_t)0x00080000)
#define FMC_NAND_CR_R_ECCPS_8192B	   		((uint32_t)0x000A0000)

#define FMC_NAND_CR_ECCPS_MASK    			((uint32_t)0x0000000F)
#define FMC_NAND_CR_ECCPS_256B	    		((uint32_t)0x00000000)
#define FMC_NAND_CR_ECCPS_512B			   	((uint32_t)0x00000001)
#define FMC_NAND_CR_ECCPS_1024B		   	((uint32_t)0x00000002)
#define FMC_NAND_CR_ECCPS_2048B		   	((uint32_t)0x00000003)
#define FMC_NAND_CR_ECCPS_4096B		   	((uint32_t)0x00000004)
#define FMC_NAND_CR_ECCPS_8192B		   	((uint32_t)0x00000005)
/*--------*/



/* TODO SR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 SR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_NAND_SR            (((FMC_PSR_TypeDef*)(FMC_NAND_R_BASE+FMC_NAND_SR_OFFSET )))
#define FMC_NAND_SR_R           (*((__IO uint32_t *)(FMC_NAND_R_BASE+FMC_NAND_SR_OFFSET)))

/*--------*/
#define FMC_NAND_SR_R_IRS_MASK    		((uint32_t)0x00000001)
#define FMC_NAND_SR_R_IRS_BIT     		(0)
#define FMC_NAND_SR_R_IRS_NOOCCUR  		((uint32_t)0x00000000)
#define FMC_NAND_SR_R_IRS_OCCUR	   		((uint32_t)0x00000001)

#define FMC_NAND_SR_IRS_MASK   			((uint32_t)0x00000001)
#define FMC_NAND_SR_IRS_NOOCCUR			((uint32_t)0x00000000)
#define FMC_NAND_SR_IRS_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_SR_R_ILS_MASK    		((uint32_t)0x00000002)
#define FMC_NAND_SR_R_ILS_BIT     		(1)
#define FMC_NAND_SR_R_ILS_NOOCCUR  		((uint32_t)0x00000000)
#define FMC_NAND_SR_R_ILS_OCCUR	   		((uint32_t)0x00000002)

#define FMC_NAND_SR_ILS_MASK   			((uint32_t)0x00000001)
#define FMC_NAND_SR_ILS_NOOCCUR			((uint32_t)0x00000000)
#define FMC_NAND_SR_ILS_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_SR_R_IFS_MASK    		((uint32_t)0x00000004)
#define FMC_NAND_SR_R_IFS_BIT     		(2)
#define FMC_NAND_SR_R_IFS_NOOCCUR  		((uint32_t)0x00000000)
#define FMC_NAND_SR_R_IFS_OCCUR	   		((uint32_t)0x00000004)

#define FMC_NAND_SR_IFS_MASK   			((uint32_t)0x00000001)
#define FMC_NAND_SR_IFS_NOOCCUR			((uint32_t)0x00000000)
#define FMC_NAND_SR_IFS_OCCUR	   		((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define FMC_NAND_SR_R_IREN_MASK    		((uint32_t)0x00000008)
#define FMC_NAND_SR_R_IREN_BIT     		(3)
#define FMC_NAND_SR_R_IREN_DIS  		((uint32_t)0x00000000)
#define FMC_NAND_SR_R_IREN_EN	   		((uint32_t)0x00000008)

#define FMC_NAND_SR_IREN_MASK  			((uint32_t)0x00000001)
#define FMC_NAND_SR_IREN_DIS			((uint32_t)0x00000000)
#define FMC_NAND_SR_IREN_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_SR_R_ILEN_MASK    		((uint32_t)0x00000010)
#define FMC_NAND_SR_R_ILEN_BIT     		(4)
#define FMC_NAND_SR_R_ILEN_DIS  		((uint32_t)0x00000000)
#define FMC_NAND_SR_R_ILEN_EN	   		((uint32_t)0x00000010)

#define FMC_NAND_SR_ILEN_MASK   		((uint32_t)0x00000001)
#define FMC_NAND_SR_ILEN_DIS			((uint32_t)0x00000000)
#define FMC_NAND_SR_ILEN_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_SR_R_IFEN_MASK    		((uint32_t)0x00000020)
#define FMC_NAND_SR_R_IFEN_BIT     		(5)
#define FMC_NAND_SR_R_IFEN_DIS  		((uint32_t)0x00000000)
#define FMC_NAND_SR_R_IFEN_EN	   		((uint32_t)0x00000020)

#define FMC_NAND_SR_IFEN_MASK   		(uint32_t)0x000000001)
#define FMC_NAND_SR_IFEN_DIS			((uint32_t)0x00000000)
#define FMC_NAND_SR_IFEN_EN	   			((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_NAND_SR_R_FEMPT_MASK    	((uint32_t)0x00000040)
#define FMC_NAND_SR_R_FEMPT_BIT     	(6)
#define FMC_NAND_SR_R_FEMPT_NOEMPTY		((uint32_t)0x00000000)
#define FMC_NAND_SR_R_FEMPT_EMPTY  		((uint32_t)0x00000040)

#define FMC_NAND_SR_FEMPT_MASK   		(uint32_t)0x000000001)
#define FMC_NAND_SR_FEMPT_NOEMPTY		((uint32_t)0x00000000)
#define FMC_NAND_SR_FEMPT_EMPTY	   		((uint32_t)0x00000001)
/*--------*/

/* TODO MEM */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 MEM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_NAND_MEM            (((FMC_PMEM_TypeDef*)(FMC_NAND_R_BASE+FMC_NAND_MEM_OFFSET )))
#define FMC_NAND_MEM_R           (*((__IO uint32_t *)(FMC_NAND_R_BASE+FMC_NAND_MEM_OFFSET)))

/*--------*/
#define FMC_NAND_MEM_R_MEMSET_MASK    	((uint32_t)0x000000FF)
#define FMC_NAND_MEM_R_MEMSET_BIT     	(0)
#define FMC_NAND_MEM_R_MEMSET_1    	((uint32_t)0x00000000)
#define FMC_NAND_MEM_R_MEMSET_255    	((uint32_t)0x000000FE)

#define FMC_NAND_MEM_MEMSET_MASK   	((uint32_t)0x000000FF)
#define FMC_NAND_MEM_MEMSET_1    		((uint32_t)0x00000000)
#define FMC_NAND_MEM_MEMSET_255    	((uint32_t)0x000000FE)
/*--------*/

/*--------*/
#define FMC_NAND_MEM_R_MEMWAIT_MASK    ((uint32_t)0x0000FF00)
#define FMC_NAND_MEM_R_MEMWAIT_BIT     (8)
#define FMC_NAND_MEM_R_MEMWAIT_2    	((uint32_t)0x00000100)
#define FMC_NAND_MEM_R_MEMWAIT_255    	((uint32_t)0x0000FE00)

#define FMC_NAND_MEM_MEMWAIT_MASK   	((uint32_t)0x000000FF)
#define FMC_NAND_MEM_MEMWAIT_2    		((uint32_t)0x00000001)
#define FMC_NAND_MEM_MEMWAIT_255    	((uint32_t)0x000000FE)
/*--------*/

/*--------*/
#define FMC_NAND_MEM_R_MEMHOLD_MASK    ((uint32_t)0x00FF0000)
#define FMC_NAND_MEM_R_MEMHOLD_BIT     (16)
#define FMC_NAND_MEM_R_MEMHOLD_1    	((uint32_t)0x00010000)
#define FMC_NAND_MEM_R_MEMHOLD_254    	((uint32_t)0x00FE0000)

#define FMC_NAND_MEM_MEMHOLD_MASK   	((uint32_t)0x000000FF)
#define FMC_NAND_MEM_MEMHOLD_1    		((uint32_t)0x00000001)
#define FMC_NAND_MEM_MEMHOLD_254    	((uint32_t)0x000000FE)
/*--------*/

/*--------*/
#define FMC_NAND_MEM_R_MEMHIZ_MASK    	((uint32_t)0xFF000000)
#define FMC_NAND_MEM_R_MEMHIZ_BIT     	(24)
#define FMC_NAND_MEM_R_MEMHIZ_1    	((uint32_t)0x00000000)
#define FMC_NAND_MEM_R_MEMHIZ_255    	((uint32_t)0xFE000000)

#define FMC_NAND_MEM_MEMHIZ_MASK   	((uint32_t)0x000000FF)
#define FMC_NAND_MEM_MEMHIZ_1    		((uint32_t)0x00000001)
#define FMC_NAND_MEM_MEMHIZ_255    	((uint32_t)0x000000FE)
/*--------*/


/* TODO ATT */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 ATT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_NAND_ATT            (((FMC_PATT_TypeDef*)(FMC_NAND_R_BASE+FMC_NAND_ATT_OFFSET )))
#define FMC_NAND_ATT_R           (*((__IO uint32_t *)(FMC_NAND_R_BASE+FMC_NAND_ATT_OFFSET)))


/*--------*/
#define FMC_NAND_ATT_R_ATTSET_MASK    	((uint32_t)0x000000FF)
#define FMC_NAND_ATT_R_ATTSET_BIT     	(0)
#define FMC_NAND_ATT_R_ATTSET_1    	((uint32_t)0x00000000)
#define FMC_NAND_ATT_R_ATTSET_255    	((uint32_t)0x000000FE)

#define FMC_NAND_ATT_ATTSET_MASK   	((uint32_t)0x000000FF)
#define FMC_NAND_ATT_ATTSET_1    		((uint32_t)0x00000000)
#define FMC_NAND_ATT_ATTSET_255    	((uint32_t)0x000000FE)
/*--------*/

/*--------*/
#define FMC_NAND_ATT_R_ATTWAIT_MASK    ((uint32_t)0x0000FF00)
#define FMC_NAND_ATT_R_ATTWAIT_BIT     (8)
#define FMC_NAND_ATT_R_ATTWAIT_2    	((uint32_t)0x00000100)
#define FMC_NAND_ATT_R_ATTWAIT_255    	((uint32_t)0x0000FE00)

#define FMC_NAND_ATT_ATTWAIT_MASK   	((uint32_t)0x000000FF)
#define FMC_NAND_ATT_ATTWAIT_2    		((uint32_t)0x00000001)
#define FMC_NAND_ATT_ATTWAIT_255    	((uint32_t)0x000000FE)
/*--------*/

/*--------*/
#define FMC_NAND_ATT_R_ATTHOLD_MASK    ((uint32_t)0x00FF0000)
#define FMC_NAND_ATT_R_ATTHOLD_BIT     (16)
#define FMC_NAND_ATT_R_ATTHOLD_1    	((uint32_t)0x00010000)
#define FMC_NAND_ATT_R_ATTHOLD_254    	((uint32_t)0x00FE0000)

#define FMC_NAND_ATT_ATTHOLD_MASK   	((uint32_t)0x000000FF)
#define FMC_NAND_ATT_ATTHOLD_1    		((uint32_t)0x00000001)
#define FMC_NAND_ATT_ATTHOLD_254    	((uint32_t)0x000000FE)
/*--------*/

/*--------*/
#define FMC_NAND_ATT_R_ATTHIZ_MASK    	((uint32_t)0xFF000000)
#define FMC_NAND_ATT_R_ATTHIZ_BIT     	(24)
#define FMC_NAND_ATT_R_ATTHIZ_1    	((uint32_t)0x00000000)
#define FMC_NAND_ATT_R_ATTHIZ_255    	((uint32_t)0xFE000000)

#define FMC_NAND_ATT_ATTHIZ_MASK   	((uint32_t)0x000000FF)
#define FMC_NAND_ATT_ATTHIZ_1    		((uint32_t)0x00000001)
#define FMC_NAND_ATT_ATTHIZ_255    	((uint32_t)0x000000FE)
/*--------*/


/* TODO ECCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 ECCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_NAND_ECCR            (((FMC_ECCR_TypeDef*)(FMC_NAND_R_BASE+FMC_NAND_ECCR_OFFSET )))
#define FMC_NAND_ECCR_R           (*((__IO uint32_t *)(FMC_NAND_R_BASE+FMC_NAND_ECCR_OFFSET)))

/*--------*/
#define FMC_NAND_ECCR_R_ECC_MASK    	((uint32_t)0xFFFFFFFF)
#define FMC_NAND_ECCR_R_ECC_BIT     	(0)

#define FMC_NAND_ECCR_ECC_MASK   		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO CR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 CR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SDRAM_CR1            (((FMC_SDCR_TypeDef*)(FMC_SDRAM_R_BASE+FMC_SDRAM_CR1_OFFSET )))
#define FMC_SDRAM_CR1_R           (*((__IO uint32_t *)(FMC_SDRAM_R_BASE+FMC_SDRAM_CR1_OFFSET)))

/*--------*/
#define FMC_SDRAM_CR1_R_NC_MASK    	((uint32_t)0x00000003)
#define FMC_SDRAM_CR1_R_NC_BIT     	(0)
#define FMC_SDRAM_CR1_R_NC_8b	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_R_NC_9b	    	((uint32_t)0x00000001)
#define FMC_SDRAM_CR1_R_NC_10b	   	((uint32_t)0x00000002)
#define FMC_SDRAM_CR1_R_NC_11b	   	((uint32_t)0x00000003)

#define FMC_SDRAM_CR1_NC_MASK   		((uint32_t)0x00000003)
#define FMC_SDRAM_CR1_NC_8b	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_NC_9b	    	((uint32_t)0x00000001)
#define FMC_SDRAM_CR1_NC_10b		   	((uint32_t)0x00000002)
#define FMC_SDRAM_CR1_NC_11b	   		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR1_R_NR_MASK    	((uint32_t)0x0000000C)
#define FMC_SDRAM_CR1_R_NR_BIT     	(2)
#define FMC_SDRAM_CR1_R_NR_11b    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_R_NR_12b    	((uint32_t)0x00000004)
#define FMC_SDRAM_CR1_R_NR_13b	   	((uint32_t)0x00000008)

#define FMC_SDRAM_CR1_NR_MASK   		((uint32_t)0x00000003)
#define FMC_SDRAM_CR1_NR_11b	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_NR_12b	    	((uint32_t)0x00000001)
#define FMC_SDRAM_CR1_NR_13b		   	((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR1_R_MWID_MASK    	((uint32_t)0x00000030)
#define FMC_SDRAM_CR1_R_MWID_BIT     	(4)
#define FMC_SDRAM_CR1_R_MWID_8b	    ((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_R_MWID_16b	    ((uint32_t)0x00000010)
#define FMC_SDRAM_CR1_R_MWID_32b	   	((uint32_t)0x00000020)

#define FMC_SDRAM_CR1_MWID_MASK   	((uint32_t)0x00000003)
#define FMC_SDRAM_CR1_MWID_8b	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_MWID_16b	    ((uint32_t)0x00000001)
#define FMC_SDRAM_CR1_MWID_32b		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR1_R_NB_MASK    	((uint32_t)0x00000040)
#define FMC_SDRAM_CR1_R_NB_BIT     	(6)
#define FMC_SDRAM_CR1_R_NB_2	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_R_NB_4	    	((uint32_t)0x00000040)

#define FMC_SDRAM_CR1_NB_MASK 	  	((uint32_t)0x00000001)
#define FMC_SDRAM_CR1_NB_2	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_NB_4		    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR1_R_CAS_MASK    	((uint32_t)0x00000180)
#define FMC_SDRAM_CR1_R_CAS_BIT     	(7)
#define FMC_SDRAM_CR1_R_CAS_1	    	((uint32_t)0x00000080)
#define FMC_SDRAM_CR1_R_CAS_2	    	((uint32_t)0x00000100)
#define FMC_SDRAM_CR1_R_CAS_3	    	((uint32_t)0x00000180)

#define FMC_SDRAM_CR1_CAS_MASK 	  	((uint32_t)0x00000003)
#define FMC_SDRAM_CR1_CAS_1		    ((uint32_t)0x00000001)
#define FMC_SDRAM_CR1_CAS_2		    ((uint32_t)0x00000002)
#define FMC_SDRAM_CR1_CAS_3		    ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR1_R_WP_MASK    	((uint32_t)0x00000200)
#define FMC_SDRAM_CR1_R_WP_BIT     	(9)
#define FMC_SDRAM_CR1_R_WP_ALLOW    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_R_WP_IGNORED   	((uint32_t)0x00000200)

#define FMC_SDRAM_CR1_WP_MASK 	  	((uint32_t)0x00000001)
#define FMC_SDRAM_CR1_WP_ALLOW	   	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_WP_IGNORED	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR1_R_SDCLK_MASK    ((uint32_t)0x00000C00)
#define FMC_SDRAM_CR1_R_SDCLK_BIT     (10)
#define FMC_SDRAM_CR1_R_SDCLK_DIS	    ((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_R_SDCLK_2x   	((uint32_t)0x00000800)
#define FMC_SDRAM_CR1_R_SDCLK_3x   	((uint32_t)0x00000C00)

#define FMC_SDRAM_CR1_SDCLK_MASK 	  	((uint32_t)0x00000003)
#define FMC_SDRAM_CR1_SDCLK_DIS	   	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_SDCLK_2x		((uint32_t)0x00000002)
#define FMC_SDRAM_CR1_SDCLK_3x		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR1_R_RBURST_MASK   ((uint32_t)0x00001000)
#define FMC_SDRAM_CR1_R_RBURST_BIT    (12)
#define FMC_SDRAM_CR1_R_RBURST_DIS	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_R_RBURST_EN  	((uint32_t)0x00001000)

#define FMC_SDRAM_CR1_RBURST_MASK 	((uint32_t)0x00000001)
#define FMC_SDRAM_CR1_RBURST_DIS	   	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_RBURST_EN		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR1_R_RPIPE_MASK   	((uint32_t)0x00006000)
#define FMC_SDRAM_CR1_R_RPIPE_BIT    	(13)
#define FMC_SDRAM_CR1_R_RPIPE_0		((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_R_RPIPE_1	  	((uint32_t)0x00002000)
#define FMC_SDRAM_CR1_R_RPIPE_2	  	((uint32_t)0x00004000)

#define FMC_SDRAM_CR1_RPIPE_MASK	 	((uint32_t)0x00000003)
#define FMC_SDRAM_CR1_RPIPE_0		   	((uint32_t)0x00000000)
#define FMC_SDRAM_CR1_RPIPE_1			((uint32_t)0x00000001)
#define FMC_SDRAM_CR1_RPIPE_2			((uint32_t)0x00000002)
/*--------*/

/* TODO CR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 CR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SDRAM_CR2            (((FMC_SDCR_TypeDef*)(FMC_SDRAM_R_BASE+FMC_SDRAM_CR2_OFFSET )))
#define FMC_SDRAM_CR2_R           (*((__IO uint32_t *)(FMC_SDRAM_R_BASE+FMC_SDRAM_CR2_OFFSET)))

/*--------*/
#define FMC_SDRAM_CR2_R_NC_MASK    	((uint32_t)0x00000003)
#define FMC_SDRAM_CR2_R_NC_BIT     	(0)
#define FMC_SDRAM_CR2_R_NC_8b	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_R_NC_9b	    	((uint32_t)0x00000001)
#define FMC_SDRAM_CR2_R_NC_10b	   	((uint32_t)0x00000002)
#define FMC_SDRAM_CR2_R_NC_11b	   	((uint32_t)0x00000003)

#define FMC_SDRAM_CR2_NC_MASK   		((uint32_t)0x00000003)
#define FMC_SDRAM_CR2_NC_8b	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_NC_9b	    	((uint32_t)0x00000001)
#define FMC_SDRAM_CR2_NC_10b		   	((uint32_t)0x00000002)
#define FMC_SDRAM_CR2_NC_11b	   		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR2_R_NR_MASK    	((uint32_t)0x0000000C)
#define FMC_SDRAM_CR2_R_NR_BIT     	(2)
#define FMC_SDRAM_CR2_R_NR_11b    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_R_NR_12b    	((uint32_t)0x00000004)
#define FMC_SDRAM_CR2_R_NR_13b	   	((uint32_t)0x00000008)

#define FMC_SDRAM_CR2_NR_MASK   		((uint32_t)0x00000003)
#define FMC_SDRAM_CR2_NR_11b	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_NR_12b	    	((uint32_t)0x00000001)
#define FMC_SDRAM_CR2_NR_13b		   	((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR2_R_MWID_MASK    	((uint32_t)0x00000030)
#define FMC_SDRAM_CR2_R_MWID_BIT     	(4)
#define FMC_SDRAM_CR2_R_MWID_8b	    ((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_R_MWID_16b	    ((uint32_t)0x00000010)
#define FMC_SDRAM_CR2_R_MWID_32b	   	((uint32_t)0x00000020)

#define FMC_SDRAM_CR2_MWID_MASK   	((uint32_t)0x00000003)
#define FMC_SDRAM_CR2_MWID_8b	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_MWID_16b	    ((uint32_t)0x00000001)
#define FMC_SDRAM_CR2_MWID_32b		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR2_R_NB_MASK    	((uint32_t)0x00000040)
#define FMC_SDRAM_CR2_R_NB_BIT     	(6)
#define FMC_SDRAM_CR2_R_NB_2	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_R_NB_4	    	((uint32_t)0x00000040)

#define FMC_SDRAM_CR2_NB_MASK 	  	((uint32_t)0x00000001)
#define FMC_SDRAM_CR2_NB_2	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_NB_4		    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR2_R_CAS_MASK    	((uint32_t)0x00000180)
#define FMC_SDRAM_CR2_R_CAS_BIT     	(7)
#define FMC_SDRAM_CR2_R_CAS_1	    	((uint32_t)0x00000080)
#define FMC_SDRAM_CR2_R_CAS_2	    	((uint32_t)0x00000100)
#define FMC_SDRAM_CR2_R_CAS_3	    	((uint32_t)0x00000180)

#define FMC_SDRAM_CR2_CAS_MASK 	  	((uint32_t)0x00000003)
#define FMC_SDRAM_CR2_CAS_1		    ((uint32_t)0x00000001)
#define FMC_SDRAM_CR2_CAS_2		    ((uint32_t)0x00000002)
#define FMC_SDRAM_CR2_CAS_3		    ((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR2_R_WP_MASK    	((uint32_t)0x00000200)
#define FMC_SDRAM_CR2_R_WP_BIT     	(9)
#define FMC_SDRAM_CR2_R_WP_ALLOW    	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_R_WP_IGNORED   	((uint32_t)0x00000200)

#define FMC_SDRAM_CR2_WP_MASK 	  	((uint32_t)0x00000001)
#define FMC_SDRAM_CR2_WP_ALLOW	   	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_WP_IGNORED	    ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR2_R_SDCLK_MASK    ((uint32_t)0x00000C00)
#define FMC_SDRAM_CR2_R_SDCLK_BIT     (10)
#define FMC_SDRAM_CR2_R_SDCLK_DIS	    ((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_R_SDCLK_2x   	((uint32_t)0x00000800)
#define FMC_SDRAM_CR2_R_SDCLK_3x   	((uint32_t)0x00000C00)

#define FMC_SDRAM_CR2_SDCLK_MASK 	  	((uint32_t)0x00000003)
#define FMC_SDRAM_CR2_SDCLK_DIS	   	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_SDCLK_2x		((uint32_t)0x00000002)
#define FMC_SDRAM_CR2_SDCLK_3x		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR2_R_RBURST_MASK   ((uint32_t)0x00001000)
#define FMC_SDRAM_CR2_R_RBURST_BIT    (12)
#define FMC_SDRAM_CR2_R_RBURST_DIS	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_R_RBURST_EN  	((uint32_t)0x00001000)

#define FMC_SDRAM_CR2_RBURST_MASK 	((uint32_t)0x00000001)
#define FMC_SDRAM_CR2_RBURST_DIS	   	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_RBURST_EN		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_CR2_R_RPIPE_MASK   	((uint32_t)0x00006000)
#define FMC_SDRAM_CR2_R_RPIPE_BIT    	(13)
#define FMC_SDRAM_CR2_R_RPIPE_0		((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_R_RPIPE_1	  	((uint32_t)0x00002000)
#define FMC_SDRAM_CR2_R_RPIPE_2	  	((uint32_t)0x00004000)

#define FMC_SDRAM_CR2_RPIPE_MASK	 	((uint32_t)0x00000003)
#define FMC_SDRAM_CR2_RPIPE_0		   	((uint32_t)0x00000000)
#define FMC_SDRAM_CR2_RPIPE_1			((uint32_t)0x00000001)
#define FMC_SDRAM_CR2_RPIPE_2			((uint32_t)0x00000002)
/*--------*/



/* TODO TR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 TR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SDRAM_TR1            (((FMC_SDTR_TypeDef*)(FMC_SDRAM_R_BASE+FMC_SDRAM_TR1_OFFSET )))
#define FMC_SDRAM_TR1_R           (*((__IO uint32_t *)(FMC_SDRAM_R_BASE+FMC_SDRAM_TR1_OFFSET)))

/*--------*/
#define FMC_SDRAM_TR1_R_TMRD_MASK    	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR1_R_TMRD_BIT     	(0)
#define FMC_SDRAM_TR1_R_TMRD_1	    ((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_R_TMRD_2	    ((uint32_t)0x00000001)
#define FMC_SDRAM_TR1_R_TMRD_3	   	((uint32_t)0x00000002)
#define FMC_SDRAM_TR1_R_TMRD_4	   	((uint32_t)0x00000003)
#define FMC_SDRAM_TR1_R_TMRD_5	   	((uint32_t)0x00000004)
#define FMC_SDRAM_TR1_R_TMRD_6	   	((uint32_t)0x00000005)
#define FMC_SDRAM_TR1_R_TMRD_7	   	((uint32_t)0x00000006)
#define FMC_SDRAM_TR1_R_TMRD_8	   	((uint32_t)0x00000007)
#define FMC_SDRAM_TR1_R_TMRD_9	   	((uint32_t)0x00000008)
#define FMC_SDRAM_TR1_R_TMRD_10	   	((uint32_t)0x00000009)
#define FMC_SDRAM_TR1_R_TMRD_11	   	((uint32_t)0x0000000A)
#define FMC_SDRAM_TR1_R_TMRD_12	   	((uint32_t)0x0000000B)
#define FMC_SDRAM_TR1_R_TMRD_13	   	((uint32_t)0x0000000C)
#define FMC_SDRAM_TR1_R_TMRD_14	   	((uint32_t)0x0000000D)
#define FMC_SDRAM_TR1_R_TMRD_15	   	((uint32_t)0x0000000E)
#define FMC_SDRAM_TR1_R_TMRD_16	   	((uint32_t)0x0000000F)

#define FMC_SDRAM_TR1_TMRD_MASK   	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR1_TMRD_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_TMRD_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR1_TMRD_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR1_TMRD_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR1_TMRD_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR1_TMRD_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR1_TMRD_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR1_TMRD_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR1_TMRD_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR1_TMRD_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR1_TMRD_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR1_TMRD_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR1_TMRD_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR1_TMRD_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR1_TMRD_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR1_TMRD_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR1_R_TXSR_MASK    	((uint32_t)0x000000F0)
#define FMC_SDRAM_TR1_R_TXSR_BIT     	(4)
#define FMC_SDRAM_TR1_R_TXSR_1	    ((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_R_TXSR_2	    ((uint32_t)0x00000010)
#define FMC_SDRAM_TR1_R_TXSR_3	   	((uint32_t)0x00000020)
#define FMC_SDRAM_TR1_R_TXSR_4	   	((uint32_t)0x00000030)
#define FMC_SDRAM_TR1_R_TXSR_5	   	((uint32_t)0x00000040)
#define FMC_SDRAM_TR1_R_TXSR_6	   	((uint32_t)0x00000050)
#define FMC_SDRAM_TR1_R_TXSR_7	   	((uint32_t)0x00000060)
#define FMC_SDRAM_TR1_R_TXSR_8	   	((uint32_t)0x00000070)
#define FMC_SDRAM_TR1_R_TXSR_9	   	((uint32_t)0x00000080)
#define FMC_SDRAM_TR1_R_TXSR_10	   	((uint32_t)0x00000090)
#define FMC_SDRAM_TR1_R_TXSR_11	   	((uint32_t)0x000000A0)
#define FMC_SDRAM_TR1_R_TXSR_12	   	((uint32_t)0x000000B0)
#define FMC_SDRAM_TR1_R_TXSR_13	   	((uint32_t)0x000000C0)
#define FMC_SDRAM_TR1_R_TXSR_14	   	((uint32_t)0x000000D0)
#define FMC_SDRAM_TR1_R_TXSR_15	   	((uint32_t)0x000000E0)
#define FMC_SDRAM_TR1_R_TXSR_16	   	((uint32_t)0x000000F0)

#define FMC_SDRAM_TR1_TXSR_MASK   	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR1_TXSR_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_TXSR_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR1_TXSR_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR1_TXSR_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR1_TXSR_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR1_TXSR_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR1_TXSR_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR1_TXSR_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR1_TXSR_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR1_TXSR_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR1_TXSR_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR1_TXSR_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR1_TXSR_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR1_TXSR_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR1_TXSR_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR1_TXSR_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR1_R_TRAS_MASK    	((uint32_t)0x00000F00)
#define FMC_SDRAM_TR1_R_TRAS_BIT     	(8)
#define FMC_SDRAM_TR1_R_TRAS_1	    ((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_R_TRAS_2	    ((uint32_t)0x00000100)
#define FMC_SDRAM_TR1_R_TRAS_3	   	((uint32_t)0x00000200)
#define FMC_SDRAM_TR1_R_TRAS_4	   	((uint32_t)0x00000300)
#define FMC_SDRAM_TR1_R_TRAS_5	   	((uint32_t)0x00000400)
#define FMC_SDRAM_TR1_R_TRAS_6	   	((uint32_t)0x00000500)
#define FMC_SDRAM_TR1_R_TRAS_7	   	((uint32_t)0x00000600)
#define FMC_SDRAM_TR1_R_TRAS_8	   	((uint32_t)0x00000700)
#define FMC_SDRAM_TR1_R_TRAS_9	   	((uint32_t)0x00000800)
#define FMC_SDRAM_TR1_R_TRAS_10	   	((uint32_t)0x00000900)
#define FMC_SDRAM_TR1_R_TRAS_11	   	((uint32_t)0x00000A00)
#define FMC_SDRAM_TR1_R_TRAS_12	   	((uint32_t)0x00000B00)
#define FMC_SDRAM_TR1_R_TRAS_13	   	((uint32_t)0x00000C00)
#define FMC_SDRAM_TR1_R_TRAS_14	   	((uint32_t)0x00000D00)
#define FMC_SDRAM_TR1_R_TRAS_15	   	((uint32_t)0x00000E00)
#define FMC_SDRAM_TR1_R_TRAS_16	   	((uint32_t)0x00000F00)

#define FMC_SDRAM_TR1_TRAS_MASK   	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR1_TRAS_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_TRAS_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR1_TRAS_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR1_TRAS_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR1_TRAS_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR1_TRAS_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR1_TRAS_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR1_TRAS_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR1_TRAS_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR1_TRAS_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR1_TRAS_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR1_TRAS_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR1_TRAS_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR1_TRAS_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR1_TRAS_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR1_TRAS_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR1_R_TRC_MASK    	((uint32_t)0x0000F000)
#define FMC_SDRAM_TR1_R_TRC_BIT     	(12)
#define FMC_SDRAM_TR1_R_TRC_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_R_TRC_2	    	((uint32_t)0x00001000)
#define FMC_SDRAM_TR1_R_TRC_3	   		((uint32_t)0x00002000)
#define FMC_SDRAM_TR1_R_TRC_4	   		((uint32_t)0x00003000)
#define FMC_SDRAM_TR1_R_TRC_5	   		((uint32_t)0x00004000)
#define FMC_SDRAM_TR1_R_TRC_6	   		((uint32_t)0x00005000)
#define FMC_SDRAM_TR1_R_TRC_7	   		((uint32_t)0x00006000)
#define FMC_SDRAM_TR1_R_TRC_8	   		((uint32_t)0x00007000)
#define FMC_SDRAM_TR1_R_TRC_9	   		((uint32_t)0x00008000)
#define FMC_SDRAM_TR1_R_TRC_10	   	((uint32_t)0x00009000)
#define FMC_SDRAM_TR1_R_TRC_11	   	((uint32_t)0x0000A000)
#define FMC_SDRAM_TR1_R_TRC_12	   	((uint32_t)0x0000B000)
#define FMC_SDRAM_TR1_R_TRC_13	   	((uint32_t)0x0000C000)
#define FMC_SDRAM_TR1_R_TRC_14	   	((uint32_t)0x0000D000)
#define FMC_SDRAM_TR1_R_TRC_15	   	((uint32_t)0x0000E000)
#define FMC_SDRAM_TR1_R_TRC_16	   	((uint32_t)0x0000F000)

#define FMC_SDRAM_TR1_TRC_MASK   		((uint32_t)0x0000000F)
#define FMC_SDRAM_TR1_TRC_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_TRC_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR1_TRC_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR1_TRC_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR1_TRC_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR1_TRC_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR1_TRC_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR1_TRC_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR1_TRC_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR1_TRC_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR1_TRC_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR1_TRC_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR1_TRC_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR1_TRC_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR1_TRC_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR1_TRC_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR1_R_TWR_MASK    	((uint32_t)0x000F0000)
#define FMC_SDRAM_TR1_R_TWR_BIT     	(16)
#define FMC_SDRAM_TR1_R_TWR_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_R_TWR_2	    	((uint32_t)0x00010000)
#define FMC_SDRAM_TR1_R_TWR_3	   		((uint32_t)0x00020000)
#define FMC_SDRAM_TR1_R_TWR_4	   		((uint32_t)0x00030000)
#define FMC_SDRAM_TR1_R_TWR_5	   		((uint32_t)0x00040000)
#define FMC_SDRAM_TR1_R_TWR_6	   		((uint32_t)0x00050000)
#define FMC_SDRAM_TR1_R_TWR_7	   		((uint32_t)0x00060000)
#define FMC_SDRAM_TR1_R_TWR_8	   		((uint32_t)0x00070000)
#define FMC_SDRAM_TR1_R_TWR_9	   		((uint32_t)0x00080000)
#define FMC_SDRAM_TR1_R_TWR_10	   	((uint32_t)0x00090000)
#define FMC_SDRAM_TR1_R_TWR_11	   	((uint32_t)0x000A0000)
#define FMC_SDRAM_TR1_R_TWR_12	   	((uint32_t)0x000B0000)
#define FMC_SDRAM_TR1_R_TWR_13	   	((uint32_t)0x000C0000)
#define FMC_SDRAM_TR1_R_TWR_14	   	((uint32_t)0x000D0000)
#define FMC_SDRAM_TR1_R_TWR_15	   	((uint32_t)0x000E0000)
#define FMC_SDRAM_TR1_R_TWR_16	   	((uint32_t)0x000F0000)

#define FMC_SDRAM_TR1_TWR_MASK   		((uint32_t)0x0000000F)
#define FMC_SDRAM_TR1_TWR_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_TWR_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR1_TWR_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR1_TWR_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR1_TWR_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR1_TWR_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR1_TWR_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR1_TWR_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR1_TWR_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR1_TWR_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR1_TWR_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR1_TWR_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR1_TWR_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR1_TWR_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR1_TWR_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR1_TWR_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR1_R_TRP_MASK    	((uint32_t)0x00F00000)
#define FMC_SDRAM_TR1_R_TRP_BIT     	(20)
#define FMC_SDRAM_TR1_R_TRP_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_R_TRP_2	    	((uint32_t)0x00100000)
#define FMC_SDRAM_TR1_R_TRP_3	   		((uint32_t)0x00200000)
#define FMC_SDRAM_TR1_R_TRP_4	   		((uint32_t)0x00300000)
#define FMC_SDRAM_TR1_R_TRP_5	   		((uint32_t)0x00400000)
#define FMC_SDRAM_TR1_R_TRP_6	   		((uint32_t)0x00500000)
#define FMC_SDRAM_TR1_R_TRP_7	   		((uint32_t)0x00600000)
#define FMC_SDRAM_TR1_R_TRP_8	   		((uint32_t)0x00700000)
#define FMC_SDRAM_TR1_R_TRP_9	   		((uint32_t)0x00800000)
#define FMC_SDRAM_TR1_R_TRP_10	   	((uint32_t)0x00900000)
#define FMC_SDRAM_TR1_R_TRP_11	   	((uint32_t)0x00A00000)
#define FMC_SDRAM_TR1_R_TRP_12	   	((uint32_t)0x00B00000)
#define FMC_SDRAM_TR1_R_TRP_13	   	((uint32_t)0x00C00000)
#define FMC_SDRAM_TR1_R_TRP_14	   	((uint32_t)0x00D00000)
#define FMC_SDRAM_TR1_R_TRP_15	   	((uint32_t)0x00E00000)
#define FMC_SDRAM_TR1_R_TRP_16	   	((uint32_t)0x00F00000)

#define FMC_SDRAM_TR1_TRP_MASK   		((uint32_t)0x0000000F)
#define FMC_SDRAM_TR1_TRP_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_TRP_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR1_TRP_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR1_TRP_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR1_TRP_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR1_TRP_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR1_TRP_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR1_TRP_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR1_TRP_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR1_TRP_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR1_TRP_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR1_TRP_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR1_TRP_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR1_TRP_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR1_TRP_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR1_TRP_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR1_R_TRCD_MASK    	((uint32_t)0x0F000000)
#define FMC_SDRAM_TR1_R_TRCD_BIT     	(24)
#define FMC_SDRAM_TR1_R_TRCD_1	    ((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_R_TRCD_2	    ((uint32_t)0x01000000)
#define FMC_SDRAM_TR1_R_TRCD_3	   	((uint32_t)0x02000000)
#define FMC_SDRAM_TR1_R_TRCD_4	   	((uint32_t)0x03000000)
#define FMC_SDRAM_TR1_R_TRCD_5	   	((uint32_t)0x04000000)
#define FMC_SDRAM_TR1_R_TRCD_6	   	((uint32_t)0x05000000)
#define FMC_SDRAM_TR1_R_TRCD_7	   	((uint32_t)0x06000000)
#define FMC_SDRAM_TR1_R_TRCD_8	   	((uint32_t)0x07000000)
#define FMC_SDRAM_TR1_R_TRCD_9	   	((uint32_t)0x08000000)
#define FMC_SDRAM_TR1_R_TRCD_10	   	((uint32_t)0x09000000)
#define FMC_SDRAM_TR1_R_TRCD_11	   	((uint32_t)0x0A000000)
#define FMC_SDRAM_TR1_R_TRCD_12	   	((uint32_t)0x0B000000)
#define FMC_SDRAM_TR1_R_TRCD_13	   	((uint32_t)0x0C000000)
#define FMC_SDRAM_TR1_R_TRCD_14	   	((uint32_t)0x0D000000)
#define FMC_SDRAM_TR1_R_TRCD_15	   	((uint32_t)0x0E000000)
#define FMC_SDRAM_TR1_R_TRCD_16	   	((uint32_t)0x0F000000)

#define FMC_SDRAM_TR1_TRCD_MASK   	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR1_TRCD_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR1_TRCD_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR1_TRCD_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR1_TRCD_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR1_TRCD_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR1_TRCD_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR1_TRCD_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR1_TRCD_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR1_TRCD_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR1_TRCD_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR1_TRCD_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR1_TRCD_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR1_TRCD_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR1_TRCD_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR1_TRCD_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR1_TRCD_16	   		((uint32_t)0x0000000F)
/*--------*/



/* TODO TR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 21 TR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SDRAM_TR2            (((FMC_SDTR_TypeDef*)(FMC_SDRAM_R_BASE+FMC_SDRAM_TR2_OFFSET )))
#define FMC_SDRAM_TR2_R           (*((__IO uint32_t *)(FMC_SDRAM_R_BASE+FMC_SDRAM_TR2_OFFSET)))

/*--------*/
#define FMC_SDRAM_TR2_R_TMRD_MASK    	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR2_R_TMRD_BIT     	(0)
#define FMC_SDRAM_TR2_R_TMRD_1	    ((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_R_TMRD_2	    ((uint32_t)0x00000001)
#define FMC_SDRAM_TR2_R_TMRD_3	   	((uint32_t)0x00000002)
#define FMC_SDRAM_TR2_R_TMRD_4	   	((uint32_t)0x00000003)
#define FMC_SDRAM_TR2_R_TMRD_5	   	((uint32_t)0x00000004)
#define FMC_SDRAM_TR2_R_TMRD_6	   	((uint32_t)0x00000005)
#define FMC_SDRAM_TR2_R_TMRD_7	   	((uint32_t)0x00000006)
#define FMC_SDRAM_TR2_R_TMRD_8	   	((uint32_t)0x00000007)
#define FMC_SDRAM_TR2_R_TMRD_9	   	((uint32_t)0x00000008)
#define FMC_SDRAM_TR2_R_TMRD_10	   	((uint32_t)0x00000009)
#define FMC_SDRAM_TR2_R_TMRD_11	   	((uint32_t)0x0000000A)
#define FMC_SDRAM_TR2_R_TMRD_12	   	((uint32_t)0x0000000B)
#define FMC_SDRAM_TR2_R_TMRD_13	   	((uint32_t)0x0000000C)
#define FMC_SDRAM_TR2_R_TMRD_14	   	((uint32_t)0x0000000D)
#define FMC_SDRAM_TR2_R_TMRD_15	   	((uint32_t)0x0000000E)
#define FMC_SDRAM_TR2_R_TMRD_16	   	((uint32_t)0x0000000F)

#define FMC_SDRAM_TR2_TMRD_MASK   	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR2_TMRD_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_TMRD_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR2_TMRD_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR2_TMRD_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR2_TMRD_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR2_TMRD_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR2_TMRD_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR2_TMRD_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR2_TMRD_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR2_TMRD_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR2_TMRD_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR2_TMRD_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR2_TMRD_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR2_TMRD_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR2_TMRD_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR2_TMRD_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR2_R_TXSR_MASK    	((uint32_t)0x000000F0)
#define FMC_SDRAM_TR2_R_TXSR_BIT     	(4)
#define FMC_SDRAM_TR2_R_TXSR_1	    ((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_R_TXSR_2	    ((uint32_t)0x00000010)
#define FMC_SDRAM_TR2_R_TXSR_3	   	((uint32_t)0x00000020)
#define FMC_SDRAM_TR2_R_TXSR_4	   	((uint32_t)0x00000030)
#define FMC_SDRAM_TR2_R_TXSR_5	   	((uint32_t)0x00000040)
#define FMC_SDRAM_TR2_R_TXSR_6	   	((uint32_t)0x00000050)
#define FMC_SDRAM_TR2_R_TXSR_7	   	((uint32_t)0x00000060)
#define FMC_SDRAM_TR2_R_TXSR_8	   	((uint32_t)0x00000070)
#define FMC_SDRAM_TR2_R_TXSR_9	   	((uint32_t)0x00000080)
#define FMC_SDRAM_TR2_R_TXSR_10	   	((uint32_t)0x00000090)
#define FMC_SDRAM_TR2_R_TXSR_11	   	((uint32_t)0x000000A0)
#define FMC_SDRAM_TR2_R_TXSR_12	   	((uint32_t)0x000000B0)
#define FMC_SDRAM_TR2_R_TXSR_13	   	((uint32_t)0x000000C0)
#define FMC_SDRAM_TR2_R_TXSR_14	   	((uint32_t)0x000000D0)
#define FMC_SDRAM_TR2_R_TXSR_15	   	((uint32_t)0x000000E0)
#define FMC_SDRAM_TR2_R_TXSR_16	   	((uint32_t)0x000000F0)

#define FMC_SDRAM_TR2_TXSR_MASK   	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR2_TXSR_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_TXSR_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR2_TXSR_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR2_TXSR_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR2_TXSR_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR2_TXSR_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR2_TXSR_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR2_TXSR_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR2_TXSR_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR2_TXSR_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR2_TXSR_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR2_TXSR_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR2_TXSR_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR2_TXSR_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR2_TXSR_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR2_TXSR_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR2_R_TRAS_MASK    	((uint32_t)0x00000F00)
#define FMC_SDRAM_TR2_R_TRAS_BIT     	(8)
#define FMC_SDRAM_TR2_R_TRAS_1	    ((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_R_TRAS_2	    ((uint32_t)0x00000100)
#define FMC_SDRAM_TR2_R_TRAS_3	   	((uint32_t)0x00000200)
#define FMC_SDRAM_TR2_R_TRAS_4	   	((uint32_t)0x00000300)
#define FMC_SDRAM_TR2_R_TRAS_5	   	((uint32_t)0x00000400)
#define FMC_SDRAM_TR2_R_TRAS_6	   	((uint32_t)0x00000500)
#define FMC_SDRAM_TR2_R_TRAS_7	   	((uint32_t)0x00000600)
#define FMC_SDRAM_TR2_R_TRAS_8	   	((uint32_t)0x00000700)
#define FMC_SDRAM_TR2_R_TRAS_9	   	((uint32_t)0x00000800)
#define FMC_SDRAM_TR2_R_TRAS_10	   	((uint32_t)0x00000900)
#define FMC_SDRAM_TR2_R_TRAS_11	   	((uint32_t)0x00000A00)
#define FMC_SDRAM_TR2_R_TRAS_12	   	((uint32_t)0x00000B00)
#define FMC_SDRAM_TR2_R_TRAS_13	   	((uint32_t)0x00000C00)
#define FMC_SDRAM_TR2_R_TRAS_14	   	((uint32_t)0x00000D00)
#define FMC_SDRAM_TR2_R_TRAS_15	   	((uint32_t)0x00000E00)
#define FMC_SDRAM_TR2_R_TRAS_16	   	((uint32_t)0x00000F00)

#define FMC_SDRAM_TR2_TRAS_MASK   	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR2_TRAS_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_TRAS_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR2_TRAS_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR2_TRAS_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR2_TRAS_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR2_TRAS_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR2_TRAS_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR2_TRAS_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR2_TRAS_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR2_TRAS_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR2_TRAS_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR2_TRAS_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR2_TRAS_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR2_TRAS_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR2_TRAS_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR2_TRAS_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR2_R_TRC_MASK    	((uint32_t)0x0000F000)
#define FMC_SDRAM_TR2_R_TRC_BIT     	(12)
#define FMC_SDRAM_TR2_R_TRC_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_R_TRC_2	    	((uint32_t)0x00001000)
#define FMC_SDRAM_TR2_R_TRC_3	   		((uint32_t)0x00002000)
#define FMC_SDRAM_TR2_R_TRC_4	   		((uint32_t)0x00003000)
#define FMC_SDRAM_TR2_R_TRC_5	   		((uint32_t)0x00004000)
#define FMC_SDRAM_TR2_R_TRC_6	   		((uint32_t)0x00005000)
#define FMC_SDRAM_TR2_R_TRC_7	   		((uint32_t)0x00006000)
#define FMC_SDRAM_TR2_R_TRC_8	   		((uint32_t)0x00007000)
#define FMC_SDRAM_TR2_R_TRC_9	   		((uint32_t)0x00008000)
#define FMC_SDRAM_TR2_R_TRC_10	   	((uint32_t)0x00009000)
#define FMC_SDRAM_TR2_R_TRC_11	   	((uint32_t)0x0000A000)
#define FMC_SDRAM_TR2_R_TRC_12	   	((uint32_t)0x0000B000)
#define FMC_SDRAM_TR2_R_TRC_13	   	((uint32_t)0x0000C000)
#define FMC_SDRAM_TR2_R_TRC_14	   	((uint32_t)0x0000D000)
#define FMC_SDRAM_TR2_R_TRC_15	   	((uint32_t)0x0000E000)
#define FMC_SDRAM_TR2_R_TRC_16	   	((uint32_t)0x0000F000)

#define FMC_SDRAM_TR2_TRC_MASK   		((uint32_t)0x0000000F)
#define FMC_SDRAM_TR2_TRC_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_TRC_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR2_TRC_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR2_TRC_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR2_TRC_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR2_TRC_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR2_TRC_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR2_TRC_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR2_TRC_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR2_TRC_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR2_TRC_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR2_TRC_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR2_TRC_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR2_TRC_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR2_TRC_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR2_TRC_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR2_R_TWR_MASK    	((uint32_t)0x000F0000)
#define FMC_SDRAM_TR2_R_TWR_BIT     	(16)
#define FMC_SDRAM_TR2_R_TWR_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_R_TWR_2	    	((uint32_t)0x00010000)
#define FMC_SDRAM_TR2_R_TWR_3	   		((uint32_t)0x00020000)
#define FMC_SDRAM_TR2_R_TWR_4	   		((uint32_t)0x00030000)
#define FMC_SDRAM_TR2_R_TWR_5	   		((uint32_t)0x00040000)
#define FMC_SDRAM_TR2_R_TWR_6	   		((uint32_t)0x00050000)
#define FMC_SDRAM_TR2_R_TWR_7	   		((uint32_t)0x00060000)
#define FMC_SDRAM_TR2_R_TWR_8	   		((uint32_t)0x00070000)
#define FMC_SDRAM_TR2_R_TWR_9	   		((uint32_t)0x00080000)
#define FMC_SDRAM_TR2_R_TWR_10	   	((uint32_t)0x00090000)
#define FMC_SDRAM_TR2_R_TWR_11	   	((uint32_t)0x000A0000)
#define FMC_SDRAM_TR2_R_TWR_12	   	((uint32_t)0x000B0000)
#define FMC_SDRAM_TR2_R_TWR_13	   	((uint32_t)0x000C0000)
#define FMC_SDRAM_TR2_R_TWR_14	   	((uint32_t)0x000D0000)
#define FMC_SDRAM_TR2_R_TWR_15	   	((uint32_t)0x000E0000)
#define FMC_SDRAM_TR2_R_TWR_16	   	((uint32_t)0x000F0000)

#define FMC_SDRAM_TR2_TWR_MASK   		((uint32_t)0x0000000F)
#define FMC_SDRAM_TR2_TWR_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_TWR_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR2_TWR_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR2_TWR_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR2_TWR_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR2_TWR_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR2_TWR_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR2_TWR_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR2_TWR_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR2_TWR_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR2_TWR_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR2_TWR_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR2_TWR_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR2_TWR_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR2_TWR_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR2_TWR_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR2_R_TRP_MASK    	((uint32_t)0x00F00000)
#define FMC_SDRAM_TR2_R_TRP_BIT     	(20)
#define FMC_SDRAM_TR2_R_TRP_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_R_TRP_2	    	((uint32_t)0x00100000)
#define FMC_SDRAM_TR2_R_TRP_3	   		((uint32_t)0x00200000)
#define FMC_SDRAM_TR2_R_TRP_4	   		((uint32_t)0x00300000)
#define FMC_SDRAM_TR2_R_TRP_5	   		((uint32_t)0x00400000)
#define FMC_SDRAM_TR2_R_TRP_6	   		((uint32_t)0x00500000)
#define FMC_SDRAM_TR2_R_TRP_7	   		((uint32_t)0x00600000)
#define FMC_SDRAM_TR2_R_TRP_8	   		((uint32_t)0x00700000)
#define FMC_SDRAM_TR2_R_TRP_9	   		((uint32_t)0x00800000)
#define FMC_SDRAM_TR2_R_TRP_10	   	((uint32_t)0x00900000)
#define FMC_SDRAM_TR2_R_TRP_11	   	((uint32_t)0x00A00000)
#define FMC_SDRAM_TR2_R_TRP_12	   	((uint32_t)0x00B00000)
#define FMC_SDRAM_TR2_R_TRP_13	   	((uint32_t)0x00C00000)
#define FMC_SDRAM_TR2_R_TRP_14	   	((uint32_t)0x00D00000)
#define FMC_SDRAM_TR2_R_TRP_15	   	((uint32_t)0x00E00000)
#define FMC_SDRAM_TR2_R_TRP_16	   	((uint32_t)0x00F00000)

#define FMC_SDRAM_TR2_TRP_MASK   		((uint32_t)0x0000000F)
#define FMC_SDRAM_TR2_TRP_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_TRP_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR2_TRP_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR2_TRP_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR2_TRP_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR2_TRP_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR2_TRP_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR2_TRP_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR2_TRP_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR2_TRP_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR2_TRP_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR2_TRP_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR2_TRP_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR2_TRP_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR2_TRP_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR2_TRP_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_TR2_R_TRCD_MASK    	((uint32_t)0x0F000000)
#define FMC_SDRAM_TR2_R_TRCD_BIT     	(24)
#define FMC_SDRAM_TR2_R_TRCD_1	    ((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_R_TRCD_2	    ((uint32_t)0x01000000)
#define FMC_SDRAM_TR2_R_TRCD_3	   	((uint32_t)0x02000000)
#define FMC_SDRAM_TR2_R_TRCD_4	   	((uint32_t)0x03000000)
#define FMC_SDRAM_TR2_R_TRCD_5	   	((uint32_t)0x04000000)
#define FMC_SDRAM_TR2_R_TRCD_6	   	((uint32_t)0x05000000)
#define FMC_SDRAM_TR2_R_TRCD_7	   	((uint32_t)0x06000000)
#define FMC_SDRAM_TR2_R_TRCD_8	   	((uint32_t)0x07000000)
#define FMC_SDRAM_TR2_R_TRCD_9	   	((uint32_t)0x08000000)
#define FMC_SDRAM_TR2_R_TRCD_10	   	((uint32_t)0x09000000)
#define FMC_SDRAM_TR2_R_TRCD_11	   	((uint32_t)0x0A000000)
#define FMC_SDRAM_TR2_R_TRCD_12	   	((uint32_t)0x0B000000)
#define FMC_SDRAM_TR2_R_TRCD_13	   	((uint32_t)0x0C000000)
#define FMC_SDRAM_TR2_R_TRCD_14	   	((uint32_t)0x0D000000)
#define FMC_SDRAM_TR2_R_TRCD_15	   	((uint32_t)0x0E000000)
#define FMC_SDRAM_TR2_R_TRCD_16	   	((uint32_t)0x0F000000)

#define FMC_SDRAM_TR2_TRCD_MASK   	((uint32_t)0x0000000F)
#define FMC_SDRAM_TR2_TRCD_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_TR2_TRCD_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_TR2_TRCD_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_TR2_TRCD_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_TR2_TRCD_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_TR2_TRCD_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_TR2_TRCD_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_TR2_TRCD_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_TR2_TRCD_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_TR2_TRCD_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_TR2_TRCD_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_TR2_TRCD_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_TR2_TRCD_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_TR2_TRCD_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_TR2_TRCD_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_TR2_TRCD_16	   		((uint32_t)0x0000000F)
/*--------*/


/* TODO CMR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 22 CMR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SDRAM_CMR            (((FMC_SDCMR_TypeDef*)(FMC_SDRAM_R_BASE+FMC_SDRAM_CMR_OFFSET )))
#define FMC_SDRAM_CMR_R           (*((__IO uint32_t *)(FMC_SDRAM_R_BASE+FMC_SDRAM_CMR_OFFSET)))

/*--------*/
#define FMC_SDRAM_CMR_R_MODE_MASK    	((uint32_t)0x00000007)
#define FMC_SDRAM_CMR_R_MODE_BIT     	(0)
#define FMC_SDRAM_CMR_R_MODE_NORMAL	((uint32_t)0x00000000)
#define FMC_SDRAM_CMR_R_MODE_CLOCK    ((uint32_t)0x00000001)
#define FMC_SDRAM_CMR_R_MODE_PALL   	((uint32_t)0x00000002)
#define FMC_SDRAM_CMR_R_MODE_AUTO   	((uint32_t)0x00000003)
#define FMC_SDRAM_CMR_R_MODE_LOAD   	((uint32_t)0x00000004)
#define FMC_SDRAM_CMR_R_MODE_SELF   	((uint32_t)0x00000005)
#define FMC_SDRAM_CMR_R_MODE_POWER   	((uint32_t)0x00000006)

#define FMC_SDRAM_CMR_MODE_MASK   	((uint32_t)0x00000007)
#define FMC_SDRAM_CMR_MODE_NORMAL		((uint32_t)0x00000000)
#define FMC_SDRAM_CMR_MODE_CLOCK    	((uint32_t)0x00000001)
#define FMC_SDRAM_CMR_MODE_PALL   	((uint32_t)0x00000002)
#define FMC_SDRAM_CMR_MODE_AUTO   	((uint32_t)0x00000003)
#define FMC_SDRAM_CMR_MODE_LOAD   	((uint32_t)0x00000004)
#define FMC_SDRAM_CMR_MODE_SELF   	((uint32_t)0x00000005)
#define FMC_SDRAM_CMR_MODE_POWER   	((uint32_t)0x00000006)
/*--------*/

/*--------*/
#define FMC_SDRAM_CMR_R_CTB2_MASK    	((uint32_t)0x00000008)
#define FMC_SDRAM_CMR_R_CTB2_BIT     	(3)
#define FMC_SDRAM_CMR_R_CTB2_DIS		((uint32_t)0x00000000)
#define FMC_SDRAM_CMR_R_CTB2_EN	    ((uint32_t)0x00000008)

#define FMC_SDRAM_CMR_CTB2_MASK   	((uint32_t)0x00000001)
#define FMC_SDRAM_CMR_CTB2_DIS		((uint32_t)0x00000000)
#define FMC_SDRAM_CMR_CTB2_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_CMR_R_CTB1_MASK    	((uint32_t)0x00000010)
#define FMC_SDRAM_CMR_R_CTB1_BIT     	(4)
#define FMC_SDRAM_CMR_R_CTB1_DIS		((uint32_t)0x00000000)
#define FMC_SDRAM_CMR_R_CTB1_EN	    ((uint32_t)0x00000010)

#define FMC_SDRAM_CMR_CTB1_MASK   	((uint32_t)0x00000001)
#define FMC_SDRAM_CMR_CTB1_DIS		((uint32_t)0x00000000)
#define FMC_SDRAM_CMR_CTB1_EN	    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_CMR_R_NFRS_MASK    	((uint32_t)0x000001E0)
#define FMC_SDRAM_CMR_R_NFRS_BIT     	(5)
#define FMC_SDRAM_CMR_R_NFRS_1	    ((uint32_t)0x00000000)
#define FMC_SDRAM_CMR_R_NFRS_2	    ((uint32_t)0x00000020)
#define FMC_SDRAM_CMR_R_NFRS_3	   	((uint32_t)0x00000040)
#define FMC_SDRAM_CMR_R_NFRS_4	   	((uint32_t)0x00000060)
#define FMC_SDRAM_CMR_R_NFRS_5	   	((uint32_t)0x00000080)
#define FMC_SDRAM_CMR_R_NFRS_6	   	((uint32_t)0x000000A0)
#define FMC_SDRAM_CMR_R_NFRS_7	   	((uint32_t)0x000000C0)
#define FMC_SDRAM_CMR_R_NFRS_8	   	((uint32_t)0x000000E0)
#define FMC_SDRAM_CMR_R_NFRS_9	   	((uint32_t)0x00000000)
#define FMC_SDRAM_CMR_R_NFRS_10	   	((uint32_t)0x00000120)
#define FMC_SDRAM_CMR_R_NFRS_11	   	((uint32_t)0x00000140)
#define FMC_SDRAM_CMR_R_NFRS_12	   	((uint32_t)0x00000160)
#define FMC_SDRAM_CMR_R_NFRS_13	   	((uint32_t)0x00000180)
#define FMC_SDRAM_CMR_R_NFRS_14	   	((uint32_t)0x000001A0)
#define FMC_SDRAM_CMR_R_NFRS_15	   	((uint32_t)0x000001C0)
#define FMC_SDRAM_CMR_R_NFRS_16	   	((uint32_t)0x000001E0)

#define FMC_SDRAM_CMR_NFRS_MASK   	((uint32_t)0x0000000F)
#define FMC_SDRAM_CMR_NFRS_1	    	((uint32_t)0x00000000)
#define FMC_SDRAM_CMR_NFRS_2	    	((uint32_t)0x00000001)
#define FMC_SDRAM_CMR_NFRS_3	   		((uint32_t)0x00000002)
#define FMC_SDRAM_CMR_NFRS_4	   		((uint32_t)0x00000003)
#define FMC_SDRAM_CMR_NFRS_5	   		((uint32_t)0x00000004)
#define FMC_SDRAM_CMR_NFRS_6	   		((uint32_t)0x00000005)
#define FMC_SDRAM_CMR_NFRS_7	   		((uint32_t)0x00000006)
#define FMC_SDRAM_CMR_NFRS_8	   		((uint32_t)0x00000007)
#define FMC_SDRAM_CMR_NFRS_9	   		((uint32_t)0x00000008)
#define FMC_SDRAM_CMR_NFRS_10	   		((uint32_t)0x00000009)
#define FMC_SDRAM_CMR_NFRS_11	   		((uint32_t)0x0000000A)
#define FMC_SDRAM_CMR_NFRS_12	   		((uint32_t)0x0000000B)
#define FMC_SDRAM_CMR_NFRS_13	   		((uint32_t)0x0000000C)
#define FMC_SDRAM_CMR_NFRS_14	   		((uint32_t)0x0000000D)
#define FMC_SDRAM_CMR_NFRS_15	   		((uint32_t)0x0000000E)
#define FMC_SDRAM_CMR_NFRS_16	   		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FMC_SDRAM_CMR_R_MRD_MASK    	((uint32_t)0x003FFE00)
#define FMC_SDRAM_CMR_R_MRD_BIT     	(9)

#define FMC_SDRAM_CMR_MRD_MASK   		((uint32_t)0x00001FFF)
/*--------*/

/* TODO RTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 23 RTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SDRAM_RTR            (((FMC_SDRTR_TypeDef*)(FMC_SDRAM_R_BASE+FMC_SDRAM_RTR_OFFSET )))
#define FMC_SDRAM_RTR_R           (*((__IO uint32_t *)(FMC_SDRAM_R_BASE+FMC_SDRAM_RTR_OFFSET)))

/*--------*/
#define FMC_SDRAM_RTR_R_CRE_MASK    	((uint32_t)0x00000001)
#define FMC_SDRAM_RTR_R_CRE_BIT     	(0)
#define FMC_SDRAM_RTR_R_CRE_NA		((uint32_t)0x00000000)
#define FMC_SDRAM_RTR_R_CRE_CLEAR	    ((uint32_t)0x00000001)

#define FMC_SDRAM_RTR_CRE_MASK   		((uint32_t)0x00000001)
#define FMC_SDRAM_RTR_CRE_NA			((uint32_t)0x00000000)
#define FMC_SDRAM_RTR_CRE_CLEAR    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_RTR_R_COUNT_MASK    ((uint32_t)0x00003FFE)
#define FMC_SDRAM_RTR_R_COUNT_BIT     (1)

#define FMC_SDRAM_RTR_COUNT_MASK   	((uint32_t)0x00001FFF)
/*--------*/

/*--------*/
#define FMC_SDRAM_RTR_R_REIE_MASK    	((uint32_t)0x00004000)
#define FMC_SDRAM_RTR_R_REIE_BIT     	(14)
#define FMC_SDRAM_RTR_R_REIE_DIS		((uint32_t)0x00000000)
#define FMC_SDRAM_RTR_R_REIE_EN	    ((uint32_t)0x00004000)

#define FMC_SDRAM_RTR_REIE_MASK   	((uint32_t)0x00000001)
#define FMC_SDRAM_RTR_REIE_DIS		((uint32_t)0x00000000)
#define FMC_SDRAM_RTR_REIE_EN	    	((uint32_t)0x00000001)
/*--------*/

/* TODO SR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 24 SR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define FMC_SDRAM_SR            (((FMC_SDSR_TypeDef*)(FMC_SDRAM_R_BASE+FMC_SDRAM_SR_OFFSET )))
#define FMC_SDRAM_SR_R           (*((__I uint32_t *)(FMC_SDRAM_R_BASE+FMC_SDRAM_SR_OFFSET)))

/*--------*/
#define FMC_SDRAM_SR_R_RE_MASK    	((uint32_t)0x00000001)
#define FMC_SDRAM_SR_R_RE_BIT     	(0)
#define FMC_SDRAM_SR_R_RE_NOOCCUR		((uint32_t)0x00000000)
#define FMC_SDRAM_SR_R_RE_OCCUR	    ((uint32_t)0x00000001)

#define FMC_SDRAM_SR_RE_MASK   		((uint32_t)0x00000001)
#define FMC_SDRAM_SR_RE_NOOCCUR		((uint32_t)0x00000000)
#define FMC_SDRAM_SR_RE_OCCUR  		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FMC_SDRAM_SR_R_MODES1_MASK    ((uint32_t)0x00000006)
#define FMC_SDRAM_SR_R_MODES1_BIT     (1)
#define FMC_SDRAM_SR_R_MODES1_NORMAL	((uint32_t)0x00000000)
#define FMC_SDRAM_SR_R_MODES1_SELF	((uint32_t)0x00000002)
#define FMC_SDRAM_SR_R_MODES1_PD		((uint32_t)0x00000004)

#define FMC_SDRAM_SR_MODES1_MASK   	((uint32_t)0x00000003)
#define FMC_SDRAM_SR_MODES1_NORMAL	((uint32_t)0x00000000)
#define FMC_SDRAM_SR_MODES1_SELF  	((uint32_t)0x00000001)
#define FMC_SDRAM_SR_MODES1_PD	 	((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SDRAM_SR_R_MODES2_MASK    ((uint32_t)0x00000018)
#define FMC_SDRAM_SR_R_MODES2_BIT     (3)
#define FMC_SDRAM_SR_R_MODES2_NORMAL	((uint32_t)0x00000000)
#define FMC_SDRAM_SR_R_MODES2_SELF	((uint32_t)0x00000008)
#define FMC_SDRAM_SR_R_MODES2_PD		((uint32_t)0x00000010)

#define FMC_SDRAM_SR_MODES2_MASK   	((uint32_t)0x00000003)
#define FMC_SDRAM_SR_MODES2_NORMAL	((uint32_t)0x00000000)
#define FMC_SDRAM_SR_MODES2_SELF  	((uint32_t)0x00000001)
#define FMC_SDRAM_SR_MODES2_PD	 	((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define FMC_SDRAM_SR_R_BUSY_MASK    	((uint32_t)0x00000020)
#define FMC_SDRAM_SR_R_BUSY_BIT     	(5)
#define FMC_SDRAM_SR_R_BUSY_NOBUSY	((uint32_t)0x00000000)
#define FMC_SDRAM_SR_R_BUSY_BUSY		((uint32_t)0x00000020)

#define FMC_SDRAM_SR_BUSY_MASK   		((uint32_t)0x00000001)
#define FMC_SDRAM_SR_BUSY_NOBUSY		((uint32_t)0x00000000)
#define FMC_SDRAM_SR_BUSY_BUSY 		((uint32_t)0x00000001)
/*--------*/


/* TODO functions */

int32_t SDRAM_Init(void);
#endif /* FMC_H_ */
