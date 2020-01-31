/*
 * DMA.h
 *
 *  Created on: 11 ago. 2018
 *      Author: InDev
 */

#ifndef DMA_H_
#define DMA_H_

#include "Core.h"
#include "NVIC.h"
#include "RCC.h"
#include <stdint.h>


#define DMA1_BASE            ((uint32_t)0x40026000)
#define DMA1_OFFSET          ((uint32_t)0x00026000)
#define DMA2_BASE            ((uint32_t)0x40026400)
#define DMA2_OFFSET          ((uint32_t)0x00026400)

typedef __IO struct
{
    __I  uint32_t FEIF0      	:1;
    	 uint32_t reserved     	:1;
    __I  uint32_t DMEIF0      	:1;
    __I  uint32_t TEIF0      	:1;
    __I  uint32_t HTIF0      	:1;
    __I  uint32_t TCIF0      	:1;
    __I  uint32_t FEIF1      	:1;
    	 uint32_t reserved1    	:1;
    __I  uint32_t DMEIF1      	:1;
    __I  uint32_t TEIF1      	:1;
    __I  uint32_t HTIF1      	:1;
    __I  uint32_t TCIF1      	:1;
	 	 uint32_t reserved2    	:4;
    __I  uint32_t FEIF2      	:1;
    	 uint32_t reserve3     	:1;
    __I  uint32_t DMEIF2      	:1;
    __I  uint32_t TEIF2     	:1;
    __I  uint32_t HTIF2      	:1;
    __I  uint32_t TCIF2      	:1;
    __I  uint32_t FEIF3      	:1;
    	 uint32_t reserved4    	:1;
    __I  uint32_t DMEIF3      	:1;
    __I  uint32_t TEIF3      	:1;
    __I  uint32_t HTIF3      	:1;
    __I  uint32_t TCIF3      	:1;
	 	 uint32_t reserved5    	:4;
}DMA_LISR_TypeDef;/*0x00000000*/

typedef __IO struct
{
    __I  uint32_t FEIF4      	:1;
    	 uint32_t reserved     	:1;
    __I  uint32_t DMEIF4      	:1;
    __I  uint32_t TEIF4      	:1;
    __I  uint32_t HTIF4      	:1;
    __I  uint32_t TCIF4      	:1;
    __I  uint32_t FEIF5      	:1;
    	 uint32_t reserved1    	:1;
    __I  uint32_t DMEIF5      	:1;
    __I  uint32_t TEIF5      	:1;
    __I  uint32_t HTIF5      	:1;
    __I  uint32_t TCIF5      	:1;
	 	 uint32_t reserved2    	:4;
    __I  uint32_t FEIF6      	:1;
    	 uint32_t reserve3     	:1;
    __I  uint32_t DMEIF6      	:1;
    __I  uint32_t TEIF6     	:1;
    __I  uint32_t HTIF6      	:1;
    __I  uint32_t TCIF6      	:1;
    __I  uint32_t FEIF7      	:1;
    	 uint32_t reserved4    	:1;
    __I  uint32_t DMEIF7      	:1;
    __I  uint32_t TEIF7      	:1;
    __I  uint32_t HTIF7      	:1;
    __I  uint32_t TCIF7      	:1;
	 	 uint32_t reserved5    	:4;
}DMA_HISR_TypeDef;/*0x00000004*/

typedef __IO struct
{
    __IO  uint32_t CFEIF0      	:1;
    	  uint32_t reserved     :1;
    __IO  uint32_t CDMEIF0      :1;
    __IO  uint32_t CTEIF0      	:1;
    __IO  uint32_t CHTIF0      	:1;
    __IO  uint32_t CTCIF0      	:1;
    __IO  uint32_t CFEIF1      	:1;
    	  uint32_t reserved1    :1;
    __IO  uint32_t CDMEIF1      :1;
    __IO  uint32_t CTEIF1      	:1;
    __IO  uint32_t CHTIF1      	:1;
    __IO  uint32_t CTCIF1      	:1;
	 	  uint32_t reserved2    :4;
    __IO  uint32_t CFEIF2      	:1;
    	  uint32_t reserve3     :1;
    __IO  uint32_t CDMEIF2      :1;
    __IO  uint32_t CTEIF2     	:1;
    __IO  uint32_t CHTIF2      	:1;
    __IO  uint32_t CTCIF2      	:1;
    __IO  uint32_t CFEIF3      	:1;
    	  uint32_t reserved4    :1;
    __IO  uint32_t CDMEIF3      :1;
    __IO  uint32_t CTEIF3      	:1;
    __IO  uint32_t CHTIF3      	:1;
    __IO  uint32_t CTCIF3      	:1;
	 	  uint32_t reserved5    :4;
}DMA_LIFCR_TypeDef;/*0x00000008*/

typedef __IO struct
{
    __IO  uint32_t CFEIF4      	:1;
    	  uint32_t reserved     :1;
    __IO  uint32_t CDMEIF4      :1;
    __IO  uint32_t CTEIF4      	:1;
    __IO  uint32_t CHTIF4      	:1;
    __IO  uint32_t CTCIF4      	:1;
    __IO  uint32_t CFEIF5      	:1;
    	  uint32_t reserved1    :1;
    __IO  uint32_t CDMEIF5      :1;
    __IO  uint32_t CTEIF5      	:1;
    __IO  uint32_t CHTIF5      	:1;
    __IO  uint32_t CTCIF5      	:1;
	 	  uint32_t reserved2    :4;
    __IO  uint32_t CFEIF6      	:1;
    	  uint32_t reserve3     :1;
    __IO  uint32_t CDMEIF6      :1;
    __IO  uint32_t CTEIF6     	:1;
    __IO  uint32_t CHTIF6      	:1;
    __IO  uint32_t CTCIF6      	:1;
    __IO  uint32_t CFEIF7      	:1;
    	  uint32_t reserved4    :1;
    __IO  uint32_t CDMEIF7      :1;
    __IO  uint32_t CTEIF7      	:1;
    __IO  uint32_t CHTIF7      	:1;
    __IO  uint32_t CTCIF7      	:1;
	 	  uint32_t reserved5    :4;
}DMA_HIFCR_TypeDef;/*0x0000000C*/

typedef __IO struct
{
    __IO  uint32_t EN	      	:1;
    __IO  uint32_t DMEIE	    :1;
    __IO  uint32_t TEIE	    	:1;
    __IO  uint32_t HTIE	    	:1;
    __IO  uint32_t TCIE	    	:1;
    __IO  uint32_t PFCTRL    	:1;
    __IO  uint32_t DIR	    	:2;
    __IO  uint32_t CIRC	    	:1;
    __IO  uint32_t PINC	    	:1;
    __IO  uint32_t MINC	    	:1;
    __IO  uint32_t PSIZE	    :2;
    __IO  uint32_t MSIZE	    :2;
    __IO  uint32_t PINCOS	    :1;
    __IO  uint32_t PL		    :2;
    __IO  uint32_t DBM		    :1;
    __IO  uint32_t CT		    :1;
    	  uint32_t reserved     :1;
    __IO  uint32_t PBURST	    :2;
    __IO  uint32_t MBURST	    :2;
    __IO  uint32_t CHSEL	    :3;
	 	  uint32_t reserved1    :4;
}DMA_SxCR_TypeDef;/*0x00000010*/

typedef __IO struct
{
    __IO  uint32_t NDT	      	:16;
    	  uint32_t reserved     :16;
}DMA_SxNDTR_TypeDef;/*0x00000014*/

typedef __IO struct
{
    __IO  uint32_t PAR	      	:32;
}DMA_SxPAR_TypeDef;/*0x00000018*/

typedef __IO struct
{
    __IO  uint32_t M0A	      	:32;
}DMA_SxM0AR_TypeDef;/*0x0000001C*/

typedef __IO struct
{
    __IO  uint32_t M1A	      	:32;
}DMA_SxM1AR_TypeDef;/*0x0000001C*/

typedef __IO struct
{
    __IO  uint32_t FTH	      	:2;
    __IO  uint32_t DMDIS	    :1;
    __I   uint32_t FS	    	:3;
    	  uint32_t reserved     :1;
    __IO  uint32_t FEIE	    	:1;
	 	  uint32_t reserved1    :24;
}DMA_SxFCR_TypeDef;/*0x00000010*/


typedef __IO struct
{
	union
	{
		__IO uint32_t 		LISR;   /*!< DMA low interrupt status register,      Address offset: 0x00 */
		DMA_LISR_TypeDef	LISR_Bit;
	};
	union
	{
		__IO uint32_t 		HISR;   /*!< DMA high interrupt status register,     Address offset: 0x04 */
		DMA_HISR_TypeDef	HISR_Bit;
	};
	union
	{
		__IO uint32_t 		LIFCR;  /*!< DMA low interrupt flag clear register,  Address offset: 0x08 */
		DMA_LIFCR_TypeDef	LIFCR_Bit;
	};
	union
	{
		__IO uint32_t 		HIFCR;  /*!< DMA high interrupt flag clear register, Address offset: 0x0C */
		DMA_HIFCR_TypeDef	HIFCR_Bit;
	};
} DMA_TypeDef;

typedef __IO struct
{
	union
	{
		__IO uint32_t 		CR;     /*!< DMA stream x configuration register      */
		DMA_SxCR_TypeDef	CR_Bit;
	};
	union
	{
		__IO uint32_t 		NDTR;   /*!< DMA stream x number of data register     */
		DMA_SxNDTR_TypeDef	NDTR_Bit;

	};
	union
	{
		__IO uint32_t 		PAR;    /*!< DMA stream x peripheral address register */
		DMA_SxPAR_TypeDef	PAR_Bit;
	};
	union
	{
		__IO uint32_t 		M0AR;   /*!< DMA stream x memory 0 address register   */
		DMA_SxM0AR_TypeDef	M0AR_Bit;
	};
	union
	{
		__IO uint32_t 		M1AR;   /*!< DMA stream x memory 1 address register   */
		DMA_SxM1AR_TypeDef	M1AR_Bit;

	};
	union
	{
		__IO uint32_t 		FCR;    /*!< DMA stream x FIFO control register       */
		DMA_SxFCR_TypeDef	FCR_Bit;
	};
} DMA_Stream_TypeDef;


typedef __IO struct
{
	DMA_Stream_TypeDef	S[8];
}DMA_Stream_Array_TypeDef;


#define DMA1                ((DMA_TypeDef *) DMA1_BASE)
#define DMA2                ((DMA_TypeDef *) DMA2_BASE)

#define DMA1_Stream_BASE	(DMA1_BASE + 0x010U)
#define DMA2_Stream_BASE	(DMA2_BASE + 0x010U)

#define DMA1_Stream0_BASE     (DMA1_BASE + 0x010U)
#define DMA1_Stream1_BASE     (DMA1_BASE + 0x028U)
#define DMA1_Stream2_BASE     (DMA1_BASE + 0x040U)
#define DMA1_Stream3_BASE     (DMA1_BASE + 0x058U)
#define DMA1_Stream4_BASE     (DMA1_BASE + 0x070U)
#define DMA1_Stream5_BASE     (DMA1_BASE + 0x088U)
#define DMA1_Stream6_BASE     (DMA1_BASE + 0x0A0U)
#define DMA1_Stream7_BASE     (DMA1_BASE + 0x0B8U)

#define DMA2_Stream0_BASE     (DMA2_BASE + 0x010U)
#define DMA2_Stream1_BASE     (DMA2_BASE + 0x028U)
#define DMA2_Stream2_BASE     (DMA2_BASE + 0x040U)
#define DMA2_Stream3_BASE     (DMA2_BASE + 0x058U)
#define DMA2_Stream4_BASE     (DMA2_BASE + 0x070U)
#define DMA2_Stream5_BASE     (DMA2_BASE + 0x088U)
#define DMA2_Stream6_BASE     (DMA2_BASE + 0x0A0U)
#define DMA2_Stream7_BASE     (DMA2_BASE + 0x0B8U)

#define DMA1_Stream			((DMA_Stream_Array_TypeDef *) DMA1_Stream_BASE)
#define DMA2_Stream			((DMA_Stream_Array_TypeDef *) DMA2_Stream_BASE)

#define DMA1_Stream0        ((DMA_Stream_TypeDef *) DMA1_Stream0_BASE)
#define DMA1_Stream1        ((DMA_Stream_TypeDef *) DMA1_Stream1_BASE)
#define DMA1_Stream2        ((DMA_Stream_TypeDef *) DMA1_Stream2_BASE)
#define DMA1_Stream3        ((DMA_Stream_TypeDef *) DMA1_Stream3_BASE)
#define DMA1_Stream4        ((DMA_Stream_TypeDef *) DMA1_Stream4_BASE)
#define DMA1_Stream5        ((DMA_Stream_TypeDef *) DMA1_Stream5_BASE)
#define DMA1_Stream6        ((DMA_Stream_TypeDef *) DMA1_Stream6_BASE)
#define DMA1_Stream7        ((DMA_Stream_TypeDef *) DMA1_Stream7_BASE)

#define DMA2_Stream0        ((DMA_Stream_TypeDef *) DMA2_Stream0_BASE)
#define DMA2_Stream1        ((DMA_Stream_TypeDef *) DMA2_Stream1_BASE)
#define DMA2_Stream2        ((DMA_Stream_TypeDef *) DMA2_Stream2_BASE)
#define DMA2_Stream3        ((DMA_Stream_TypeDef *) DMA2_Stream3_BASE)
#define DMA2_Stream4        ((DMA_Stream_TypeDef *) DMA2_Stream4_BASE)
#define DMA2_Stream5        ((DMA_Stream_TypeDef *) DMA2_Stream5_BASE)
#define DMA2_Stream6        ((DMA_Stream_TypeDef *) DMA2_Stream6_BASE)
#define DMA2_Stream7        ((DMA_Stream_TypeDef *) DMA2_Stream7_BASE)


#define	DMA_LISR_OFFSET						((uint32_t)0x00000000)
#define	DMA_HISR_OFFSET						((uint32_t)0x00000004)
#define	DMA_LIFCR_OFFSET					((uint32_t)0x00000008)
#define	DMA_HIFCR_OFFSET					((uint32_t)0x0000000C)

#define	DMA_S0CR_OFFSET						((uint32_t)0x00000010)
#define	DMA_S0NDTR_OFFSET					((uint32_t)0x00000014)
#define	DMA_S0PAR_OFFSET					((uint32_t)0x00000018)
#define	DMA_S0M0AR_OFFSET					((uint32_t)0x0000001C)
#define	DMA_S0M1AR_OFFSET					((uint32_t)0x00000020)
#define	DMA_S0FCR_OFFSET					((uint32_t)0x00000024)

#define	DMA_S1CR_OFFSET						((uint32_t)0x00000028)
#define	DMA_S1NDTR_OFFSET					((uint32_t)0x0000002C)
#define	DMA_S1PAR_OFFSET					((uint32_t)0x00000030)
#define	DMA_S1M0AR_OFFSET					((uint32_t)0x00000034)
#define	DMA_S1M1AR_OFFSET					((uint32_t)0x00000038)
#define	DMA_S1FCR_OFFSET					((uint32_t)0x0000003C)

#define	DMA_S2CR_OFFSET						((uint32_t)0x00000040)
#define	DMA_S2NDTR_OFFSET					((uint32_t)0x00000044)
#define	DMA_S2PAR_OFFSET					((uint32_t)0x00000048)
#define	DMA_S2M0AR_OFFSET					((uint32_t)0x0000004C)
#define	DMA_S2M1AR_OFFSET					((uint32_t)0x00000050)
#define	DMA_S2FCR_OFFSET					((uint32_t)0x00000054)

#define	DMA_S3CR_OFFSET						((uint32_t)0x00000058)
#define	DMA_S3NDTR_OFFSET					((uint32_t)0x0000005C)
#define	DMA_S3PAR_OFFSET					((uint32_t)0x00000060)
#define	DMA_S3M0AR_OFFSET					((uint32_t)0x00000064)
#define	DMA_S3M1AR_OFFSET					((uint32_t)0x00000068)
#define	DMA_S3FCR_OFFSET					((uint32_t)0x0000006C)

#define	DMA_S4CR_OFFSET						((uint32_t)0x00000070)
#define	DMA_S4NDTR_OFFSET					((uint32_t)0x00000074)
#define	DMA_S4PAR_OFFSET					((uint32_t)0x00000078)
#define	DMA_S4M0AR_OFFSET					((uint32_t)0x0000007C)
#define	DMA_S4M1AR_OFFSET					((uint32_t)0x00000080)
#define	DMA_S4FCR_OFFSET					((uint32_t)0x00000084)

#define	DMA_S5CR_OFFSET						((uint32_t)0x00000088)
#define	DMA_S5NDTR_OFFSET					((uint32_t)0x0000008C)
#define	DMA_S5PAR_OFFSET					((uint32_t)0x00000090)
#define	DMA_S5M0AR_OFFSET					((uint32_t)0x00000094)
#define	DMA_S5M1AR_OFFSET					((uint32_t)0x00000098)
#define	DMA_S5FCR_OFFSET					((uint32_t)0x0000009C)

#define	DMA_S6CR_OFFSET						((uint32_t)0x000000A0)
#define	DMA_S6NDTR_OFFSET					((uint32_t)0x000000A4)
#define	DMA_S6PAR_OFFSET					((uint32_t)0x000000A8)
#define	DMA_S6M0AR_OFFSET					((uint32_t)0x000000AC)
#define	DMA_S6M1AR_OFFSET					((uint32_t)0x000000B0)
#define	DMA_S6FCR_OFFSET					((uint32_t)0x000000B4)

#define	DMA_S7CR_OFFSET						((uint32_t)0x000000B8)
#define	DMA_S7NDTR_OFFSET					((uint32_t)0x000000BC)
#define	DMA_S7PAR_OFFSET					((uint32_t)0x000000C0)
#define	DMA_S7M0AR_OFFSET					((uint32_t)0x000000C4)
#define	DMA_S7M1AR_OFFSET					((uint32_t)0x000000C8)
#define	DMA_S7FCR_OFFSET					((uint32_t)0x000000CC)

/* TODO LISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 LISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_LISR            					(((DMA_LISR_TypeDef*)(DMA1_BASE+DMA_LISR_OFFSET )))
#define DMA1_LISR_R          					(*((__I uint32_t *)(DMA1_BASE+DMA_LISR_OFFSET)))

/*--------*/
#define DMA1_LISR_R_FEIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_R_FEIF0_BIT     		(0)
#define DMA1_LISR_R_FEIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_FEIF0_OCCUR	   		((uint32_t)0x00000001)

#define DMA1_LISR_FEIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_FEIF0_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_FEIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_DMEIF0_MASK    		((uint32_t)0x00000004)
#define DMA1_LISR_R_DMEIF0_BIT     		(2)
#define DMA1_LISR_R_DMEIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_DMEIF0_OCCUR	   	((uint32_t)0x00000004)

#define DMA1_LISR_DMEIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_DMEIF0_NOOCCUR		((uint32_t)0x00000000)
#define DMA1_LISR_DMEIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_TEIF0_MASK    		((uint32_t)0x00000008)
#define DMA1_LISR_R_TEIF0_BIT     		(3)
#define DMA1_LISR_R_TEIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_TEIF0_OCCUR	   		((uint32_t)0x00000008)

#define DMA1_LISR_TEIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_TEIF0_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_TEIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_HTIF0_MASK    		((uint32_t)0x00000010)
#define DMA1_LISR_R_HTIF0_BIT     		(4)
#define DMA1_LISR_R_HTIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_HTIF0_OCCUR	   		((uint32_t)0x00000010)

#define DMA1_LISR_HTIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_HTIF0_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_HTIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_TCIF0_MASK    		((uint32_t)0x00000020)
#define DMA1_LISR_R_TCIF0_BIT     		(5)
#define DMA1_LISR_R_TCIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_TCIF0_OCCUR	   		((uint32_t)0x00000020)

#define DMA1_LISR_TCIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_TCIF0_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_TCIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_FEIF1_MASK    		((uint32_t)0x00000040)
#define DMA1_LISR_R_FEIF1_BIT     		(6)
#define DMA1_LISR_R_FEIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_FEIF1_OCCUR	   		((uint32_t)0x00000040)

#define DMA1_LISR_FEIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_FEIF1_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_FEIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_DMEIF1_MASK    		((uint32_t)0x00000100)
#define DMA1_LISR_R_DMEIF1_BIT     		(8)
#define DMA1_LISR_R_DMEIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_DMEIF1_OCCUR	   	((uint32_t)0x00000100)

#define DMA1_LISR_DMEIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_DMEIF1_NOOCCUR		((uint32_t)0x00000000)
#define DMA1_LISR_DMEIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_TEIF1_MASK    		((uint32_t)0x00000200)
#define DMA1_LISR_R_TEIF1_BIT     		(9)
#define DMA1_LISR_R_TEIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_TEIF1_OCCUR	   		((uint32_t)0x00000200)

#define DMA1_LISR_TEIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_TEIF1_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_TEIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_HTIF1_MASK    		((uint32_t)0x00000400)
#define DMA1_LISR_R_HTIF1_BIT     		(10)
#define DMA1_LISR_R_HTIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_HTIF1_OCCUR	   		((uint32_t)0x00000400)

#define DMA1_LISR_HTIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_HTIF1_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_HTIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_TCIF1_MASK    		((uint32_t)0x00000800)
#define DMA1_LISR_R_TCIF1_BIT     		(11)
#define DMA1_LISR_R_TCIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_TCIF1_OCCUR	   		((uint32_t)0x00000800)

#define DMA1_LISR_TCIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_TCIF1_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_TCIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_FEIF2_MASK    		((uint32_t)0x00010000)
#define DMA1_LISR_R_FEIF2_BIT     		(16)
#define DMA1_LISR_R_FEIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_FEIF2_OCCUR	   		((uint32_t)0x00010000)

#define DMA1_LISR_FEIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_FEIF2_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_FEIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_DMEIF2_MASK    		((uint32_t)0x00040000)
#define DMA1_LISR_R_DMEIF2_BIT     		(18)
#define DMA1_LISR_R_DMEIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_DMEIF2_OCCUR	   	((uint32_t)0x00040000)

#define DMA1_LISR_DMEIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_DMEIF2_NOOCCUR		((uint32_t)0x00000000)
#define DMA1_LISR_DMEIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_TEIF2_MASK    		((uint32_t)0x00080000)
#define DMA1_LISR_R_TEIF2_BIT     		(19)
#define DMA1_LISR_R_TEIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_TEIF2_OCCUR	   		((uint32_t)0x00080000)

#define DMA1_LISR_TEIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_TEIF2_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_TEIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_HTIF2_MASK    		((uint32_t)0x00100000)
#define DMA1_LISR_R_HTIF2_BIT     		(20)
#define DMA1_LISR_R_HTIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_HTIF2_OCCUR	   		((uint32_t)0x00100000)

#define DMA1_LISR_HTIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_HTIF2_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_HTIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_TCIF2_MASK    		((uint32_t)0x00200000)
#define DMA1_LISR_R_TCIF2_BIT     		(21)
#define DMA1_LISR_R_TCIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_TCIF2_OCCUR	   		((uint32_t)0x00200000)

#define DMA1_LISR_TCIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_TCIF2_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_TCIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_FEIF3_MASK    		((uint32_t)0x00400000)
#define DMA1_LISR_R_FEIF3_BIT     		(22)
#define DMA1_LISR_R_FEIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_FEIF3_OCCUR	   		((uint32_t)0x00400000)

#define DMA1_LISR_FEIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_FEIF3_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_FEIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_DMEIF3_MASK    		((uint32_t)0x01000000)
#define DMA1_LISR_R_DMEIF3_BIT     		(24)
#define DMA1_LISR_R_DMEIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_DMEIF3_OCCUR	   	((uint32_t)0x01000000)

#define DMA1_LISR_DMEIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_DMEIF3_NOOCCUR		((uint32_t)0x00000000)
#define DMA1_LISR_DMEIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_TEIF3_MASK    		((uint32_t)0x02000000)
#define DMA1_LISR_R_TEIF3_BIT     		(25)
#define DMA1_LISR_R_TEIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_TEIF3_OCCUR	   		((uint32_t)0x02000000)

#define DMA1_LISR_TEIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_TEIF3_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_TEIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_HTIF3_MASK    		((uint32_t)0x04000000)
#define DMA1_LISR_R_HTIF3_BIT     		(26)
#define DMA1_LISR_R_HTIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_HTIF3_OCCUR	   		((uint32_t)0x04000000)

#define DMA1_LISR_HTIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_HTIF3_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_HTIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LISR_R_TCIF3_MASK    		((uint32_t)0x08000000)
#define DMA1_LISR_R_TCIF3_BIT     		(27)
#define DMA1_LISR_R_TCIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_LISR_R_TCIF3_OCCUR	   		((uint32_t)0x08000000)

#define DMA1_LISR_TCIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LISR_TCIF3_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_LISR_TCIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/


/* TODO HISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 HISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_HISR            					(((DMA_HISR_TypeDef*)(DMA1_BASE+DMA_HISR_OFFSET )))
#define DMA1_HISR_R          					(*((__I uint32_t *)(DMA1_BASE+DMA_HISR_OFFSET)))

/*--------*/
#define DMA1_HISR_R_FEIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_R_FEIF4_BIT     		(0)
#define DMA1_HISR_R_FEIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_FEIF4_OCCUR	   		((uint32_t)0x00000001)

#define DMA1_HISR_FEIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_FEIF4_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_FEIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_DMEIF4_MASK    		((uint32_t)0x00000004)
#define DMA1_HISR_R_DMEIF4_BIT     		(2)
#define DMA1_HISR_R_DMEIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_DMEIF4_OCCUR	   	((uint32_t)0x00000004)

#define DMA1_HISR_DMEIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_DMEIF4_NOOCCUR		((uint32_t)0x00000000)
#define DMA1_HISR_DMEIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_TEIF4_MASK    		((uint32_t)0x00000008)
#define DMA1_HISR_R_TEIF4_BIT     		(3)
#define DMA1_HISR_R_TEIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_TEIF4_OCCUR	   		((uint32_t)0x00000008)

#define DMA1_HISR_TEIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_TEIF4_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_TEIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_HTIF4_MASK    		((uint32_t)0x00000010)
#define DMA1_HISR_R_HTIF4_BIT     		(4)
#define DMA1_HISR_R_HTIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_HTIF4_OCCUR	   		((uint32_t)0x00000010)

#define DMA1_HISR_HTIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_HTIF4_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_HTIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_TCIF4_MASK    		((uint32_t)0x00000020)
#define DMA1_HISR_R_TCIF4_BIT     		(5)
#define DMA1_HISR_R_TCIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_TCIF4_OCCUR	   		((uint32_t)0x00000020)

#define DMA1_HISR_TCIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_TCIF4_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_TCIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_FEIF5_MASK    		((uint32_t)0x00000040)
#define DMA1_HISR_R_FEIF5_BIT     		(6)
#define DMA1_HISR_R_FEIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_FEIF5_OCCUR	   		((uint32_t)0x00000040)

#define DMA1_HISR_FEIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_FEIF5_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_FEIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_DMEIF5_MASK    		((uint32_t)0x00000100)
#define DMA1_HISR_R_DMEIF5_BIT     		(8)
#define DMA1_HISR_R_DMEIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_DMEIF5_OCCUR	   	((uint32_t)0x00000100)

#define DMA1_HISR_DMEIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_DMEIF5_NOOCCUR		((uint32_t)0x00000000)
#define DMA1_HISR_DMEIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_TEIF5_MASK    		((uint32_t)0x00000200)
#define DMA1_HISR_R_TEIF5_BIT     		(9)
#define DMA1_HISR_R_TEIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_TEIF5_OCCUR	   		((uint32_t)0x00000200)

#define DMA1_HISR_TEIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_TEIF5_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_TEIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_HTIF5_MASK    		((uint32_t)0x00000400)
#define DMA1_HISR_R_HTIF5_BIT     		(10)
#define DMA1_HISR_R_HTIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_HTIF5_OCCUR	   		((uint32_t)0x00000400)

#define DMA1_HISR_HTIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_HTIF5_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_HTIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_TCIF5_MASK    		((uint32_t)0x00000800)
#define DMA1_HISR_R_TCIF5_BIT     		(11)
#define DMA1_HISR_R_TCIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_TCIF5_OCCUR	   		((uint32_t)0x00000800)

#define DMA1_HISR_TCIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_TCIF5_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_TCIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_FEIF6_MASK    		((uint32_t)0x00010000)
#define DMA1_HISR_R_FEIF6_BIT     		(16)
#define DMA1_HISR_R_FEIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_FEIF6_OCCUR	   		((uint32_t)0x00010000)

#define DMA1_HISR_FEIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_FEIF6_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_FEIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_DMEIF6_MASK    		((uint32_t)0x00040000)
#define DMA1_HISR_R_DMEIF6_BIT     		(18)
#define DMA1_HISR_R_DMEIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_DMEIF6_OCCUR	   	((uint32_t)0x00040000)

#define DMA1_HISR_DMEIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_DMEIF6_NOOCCUR		((uint32_t)0x00000000)
#define DMA1_HISR_DMEIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_TEIF6_MASK    		((uint32_t)0x00080000)
#define DMA1_HISR_R_TEIF6_BIT     		(19)
#define DMA1_HISR_R_TEIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_TEIF6_OCCUR	   		((uint32_t)0x00080000)

#define DMA1_HISR_TEIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_TEIF6_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_TEIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_HTIF6_MASK    		((uint32_t)0x00100000)
#define DMA1_HISR_R_HTIF6_BIT     		(20)
#define DMA1_HISR_R_HTIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_HTIF6_OCCUR	   		((uint32_t)0x00100000)

#define DMA1_HISR_HTIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_HTIF6_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_HTIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_TCIF6_MASK    		((uint32_t)0x00200000)
#define DMA1_HISR_R_TCIF6_BIT     		(21)
#define DMA1_HISR_R_TCIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_TCIF6_OCCUR	   		((uint32_t)0x00200000)

#define DMA1_HISR_TCIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_TCIF6_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_TCIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_FEIF7_MASK    		((uint32_t)0x00400000)
#define DMA1_HISR_R_FEIF7_BIT     		(22)
#define DMA1_HISR_R_FEIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_FEIF7_OCCUR	   		((uint32_t)0x00400000)

#define DMA1_HISR_FEIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_FEIF7_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_FEIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_DMEIF7_MASK    		((uint32_t)0x01000000)
#define DMA1_HISR_R_DMEIF7_BIT     		(24)
#define DMA1_HISR_R_DMEIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_DMEIF7_OCCUR	   	((uint32_t)0x01000000)

#define DMA1_HISR_DMEIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_DMEIF7_NOOCCUR		((uint32_t)0x00000000)
#define DMA1_HISR_DMEIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_TEIF7_MASK    		((uint32_t)0x02000000)
#define DMA1_HISR_R_TEIF7_BIT     		(25)
#define DMA1_HISR_R_TEIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_TEIF7_OCCUR	   		((uint32_t)0x02000000)

#define DMA1_HISR_TEIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_TEIF7_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_TEIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_HTIF7_MASK    		((uint32_t)0x04000000)
#define DMA1_HISR_R_HTIF7_BIT     		(26)
#define DMA1_HISR_R_HTIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_HTIF7_OCCUR	   		((uint32_t)0x04000000)

#define DMA1_HISR_HTIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_HTIF7_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_HTIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HISR_R_TCIF7_MASK    		((uint32_t)0x08000000)
#define DMA1_HISR_R_TCIF7_BIT     		(27)
#define DMA1_HISR_R_TCIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA1_HISR_R_TCIF7_OCCUR	   		((uint32_t)0x08000000)

#define DMA1_HISR_TCIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HISR_TCIF7_NOOCCUR			((uint32_t)0x00000000)
#define DMA1_HISR_TCIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/* TODO LIFCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 LIFCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_LIFCR            					(((DMA_LIFCR_TypeDef*)(DMA1_BASE+DMA_LIFCR_OFFSET )))
#define DMA1_LIFCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_LIFCR_OFFSET)))

/*--------*/
#define DMA1_LIFCR_R_CFEIF0_MASK    	((uint32_t)0x00000001)
#define DMA1_LIFCR_R_CFEIF0_BIT     	(0)
#define DMA1_LIFCR_R_CFEIF0_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CFEIF0_CLEAR	   	((uint32_t)0x00000001)

#define DMA1_LIFCR_CFEIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CFEIF0_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CFEIF0_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CDMEIF0_MASK    	((uint32_t)0x00000004)
#define DMA1_LIFCR_R_CDMEIF0_BIT     	(2)
#define DMA1_LIFCR_R_CDMEIF0_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CDMEIF0_CLEAR	   	((uint32_t)0x00000004)

#define DMA1_LIFCR_CDMEIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CDMEIF0_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CDMEIF0_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CTEIF0_MASK    	((uint32_t)0x00000008)
#define DMA1_LIFCR_R_CTEIF0_BIT     	(3)
#define DMA1_LIFCR_R_CTEIF0_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CTEIF0_CLEAR	   	((uint32_t)0x00000008)

#define DMA1_LIFCR_CTEIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CTEIF0_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CTEIF0_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CHTIF0_MASK    	((uint32_t)0x00000010)
#define DMA1_LIFCR_R_CHTIF0_BIT     	(4)
#define DMA1_LIFCR_R_CHTIF0_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CHTIF0_CLEAR	   	((uint32_t)0x00000010)

#define DMA1_LIFCR_CHTIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CHTIF0_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CHTIF0_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CTCIF0_MASK    	((uint32_t)0x00000020)
#define DMA1_LIFCR_R_CTCIF0_BIT     	(5)
#define DMA1_LIFCR_R_CTCIF0_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CTCIF0_CLEAR	   	((uint32_t)0x00000020)

#define DMA1_LIFCR_CTCIF0_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CTCIF0_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CTCIF0_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CFEIF1_MASK    	((uint32_t)0x00000040)
#define DMA1_LIFCR_R_CFEIF1_BIT     	(6)
#define DMA1_LIFCR_R_CFEIF1_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CFEIF1_CLEAR	   	((uint32_t)0x00000040)

#define DMA1_LIFCR_CFEIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CFEIF1_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CFEIF1_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CDMEIF1_MASK    	((uint32_t)0x00000100)
#define DMA1_LIFCR_R_CDMEIF1_BIT     	(8)
#define DMA1_LIFCR_R_CDMEIF1_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CDMEIF1_CLEAR	   	((uint32_t)0x00000100)

#define DMA1_LIFCR_CDMEIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CDMEIF1_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CDMEIF1_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CTEIF1_MASK    	((uint32_t)0x00000200)
#define DMA1_LIFCR_R_CTEIF1_BIT     	(9)
#define DMA1_LIFCR_R_CTEIF1_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CTEIF1_CLEAR	   	((uint32_t)0x00000200)

#define DMA1_LIFCR_CTEIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CTEIF1_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CTEIF1_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CHTIF1_MASK    	((uint32_t)0x00000400)
#define DMA1_LIFCR_R_CHTIF1_BIT     	(10)
#define DMA1_LIFCR_R_CHTIF1_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CHTIF1_CLEAR	   	((uint32_t)0x00000400)

#define DMA1_LIFCR_CHTIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CHTIF1_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CHTIF1_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CTCIF1_MASK    	((uint32_t)0x00000800)
#define DMA1_LIFCR_R_CTCIF1_BIT     	(11)
#define DMA1_LIFCR_R_CTCIF1_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CTCIF1_CLEAR	   	((uint32_t)0x00000800)

#define DMA1_LIFCR_CTCIF1_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CTCIF1_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CTCIF1_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CFEIF2_MASK    	((uint32_t)0x00010000)
#define DMA1_LIFCR_R_CFEIF2_BIT     	(16)
#define DMA1_LIFCR_R_CFEIF2_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CFEIF2_CLEAR	   	((uint32_t)0x00010000)

#define DMA1_LIFCR_CFEIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CFEIF2_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CFEIF2_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CDMEIF2_MASK    	((uint32_t)0x00040000)
#define DMA1_LIFCR_R_CDMEIF2_BIT     	(18)
#define DMA1_LIFCR_R_CDMEIF2_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CDMEIF2_CLEAR	   	((uint32_t)0x00040000)

#define DMA1_LIFCR_CDMEIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CDMEIF2_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CDMEIF2_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CTEIF2_MASK    	((uint32_t)0x00080000)
#define DMA1_LIFCR_R_CTEIF2_BIT     	(19)
#define DMA1_LIFCR_R_CTEIF2_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CTEIF2_CLEAR	   	((uint32_t)0x00080000)

#define DMA1_LIFCR_CTEIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CTEIF2_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CTEIF2_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CHTIF2_MASK    	((uint32_t)0x00100000)
#define DMA1_LIFCR_R_CHTIF2_BIT     	(20)
#define DMA1_LIFCR_R_CHTIF2_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CHTIF2_CLEAR	   	((uint32_t)0x00100000)

#define DMA1_LIFCR_CHTIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CHTIF2_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CHTIF2_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CTCIF2_MASK    	((uint32_t)0x00200000)
#define DMA1_LIFCR_R_CTCIF2_BIT     	(21)
#define DMA1_LIFCR_R_CTCIF2_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CTCIF2_CLEAR	   	((uint32_t)0x00200000)

#define DMA1_LIFCR_CTCIF2_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CTCIF2_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CTCIF2_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CFEIF3_MASK    	((uint32_t)0x00400000)
#define DMA1_LIFCR_R_CFEIF3_BIT     	(22)
#define DMA1_LIFCR_R_CFEIF3_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CFEIF3_CLEAR	   	((uint32_t)0x00400000)

#define DMA1_LIFCR_CFEIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CFEIF3_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CFEIF3_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CDMEIF3_MASK    	((uint32_t)0x01000000)
#define DMA1_LIFCR_R_CDMEIF3_BIT     	(24)
#define DMA1_LIFCR_R_CDMEIF3_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CDMEIF3_CLEAR	   	((uint32_t)0x01000000)

#define DMA1_LIFCR_CDMEIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CDMEIF3_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CDMEIF3_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CTEIF3_MASK    	((uint32_t)0x02000000)
#define DMA1_LIFCR_R_CTEIF3_BIT     	(25)
#define DMA1_LIFCR_R_CTEIF3_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CTEIF3_CLEAR	   	((uint32_t)0x02000000)

#define DMA1_LIFCR_CTEIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CTEIF3_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CTEIF3_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CHTIF3_MASK    	((uint32_t)0x04000000)
#define DMA1_LIFCR_R_CHTIF3_BIT     	(26)
#define DMA1_LIFCR_R_CHTIF3_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CHTIF3_CLEAR	   	((uint32_t)0x04000000)

#define DMA1_LIFCR_CHTIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_CHTIF3_NA			((uint32_t)0x00000000)
#define DMA1_LIFCR_CHTIF3_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_LIFCR_R_CTCIF3_MASK    	((uint32_t)0x08000000)
#define DMA1_LIFCR_R_CTCIF3_BIT     	(27)
#define DMA1_LIFCR_R_CTCIF3_NA    		((uint32_t)0x00000000)
#define DMA1_LIFCR_R_CTCIF3_CLEAR	   	((uint32_t)0x08000000)

#define DMA1_LIFCR_TCIF3_MASK    		((uint32_t)0x00000001)
#define DMA1_LIFCR_TCIF3_NA				((uint32_t)0x00000000)
#define DMA1_LIFCR_TCIF3_CLEAR	   		((uint32_t)0x00000001)
/*--------*/


/* TODO HIFCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 HIFCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_HIFCR            					(((DMA_HIFCR_TypeDef*)(DMA1_BASE+DMA_HIFCR_OFFSET )))
#define DMA1_HIFCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_HIFCR_OFFSET)))

/*--------*/
#define DMA1_HIFCR_R_CFEIF4_MASK    	((uint32_t)0x00000001)
#define DMA1_HIFCR_R_CFEIF4_BIT     	(0)
#define DMA1_HIFCR_R_CFEIF4_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CFEIF4_CLEAR	   	((uint32_t)0x00000001)

#define DMA1_HIFCR_CFEIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CFEIF4_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CFEIF4_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CDMEIF4_MASK    	((uint32_t)0x00000004)
#define DMA1_HIFCR_R_CDMEIF4_BIT     	(2)
#define DMA1_HIFCR_R_CDMEIF4_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CDMEIF4_CLEAR	   	((uint32_t)0x00000004)

#define DMA1_HIFCR_CDMEIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CDMEIF4_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CDMEIF4_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CTEIF4_MASK    	((uint32_t)0x00000008)
#define DMA1_HIFCR_R_CTEIF4_BIT     	(3)
#define DMA1_HIFCR_R_CTEIF4_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CTEIF4_CLEAR	   	((uint32_t)0x00000008)

#define DMA1_HIFCR_CTEIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CTEIF4_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CTEIF4_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CHTIF4_MASK    	((uint32_t)0x00000010)
#define DMA1_HIFCR_R_CHTIF4_BIT     	(4)
#define DMA1_HIFCR_R_CHTIF4_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CHTIF4_CLEAR	   	((uint32_t)0x00000010)

#define DMA1_HIFCR_CHTIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CHTIF4_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CHTIF4_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CTCIF4_MASK    	((uint32_t)0x00000020)
#define DMA1_HIFCR_R_CTCIF4_BIT     	(5)
#define DMA1_HIFCR_R_CTCIF4_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CTCIF4_CLEAR	   	((uint32_t)0x00000020)

#define DMA1_HIFCR_CTCIF4_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CTCIF4_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CTCIF4_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CFEIF5_MASK    	((uint32_t)0x00000040)
#define DMA1_HIFCR_R_CFEIF5_BIT     	(6)
#define DMA1_HIFCR_R_CFEIF5_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CFEIF5_CLEAR	   	((uint32_t)0x00000040)

#define DMA1_HIFCR_CFEIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CFEIF5_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CFEIF5_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CDMEIF5_MASK    	((uint32_t)0x00000100)
#define DMA1_HIFCR_R_CDMEIF5_BIT     	(8)
#define DMA1_HIFCR_R_CDMEIF5_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CDMEIF5_CLEAR	   	((uint32_t)0x00000100)

#define DMA1_HIFCR_CDMEIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CDMEIF5_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CDMEIF5_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CTEIF5_MASK    	((uint32_t)0x00000200)
#define DMA1_HIFCR_R_CTEIF5_BIT     	(9)
#define DMA1_HIFCR_R_CTEIF5_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CTEIF5_CLEAR	   	((uint32_t)0x00000200)

#define DMA1_HIFCR_CTEIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CTEIF5_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CTEIF5_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CHTIF5_MASK    	((uint32_t)0x00000400)
#define DMA1_HIFCR_R_CHTIF5_BIT     	(10)
#define DMA1_HIFCR_R_CHTIF5_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CHTIF5_CLEAR	   	((uint32_t)0x00000400)

#define DMA1_HIFCR_CHTIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CHTIF5_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CHTIF5_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CTCIF5_MASK    	((uint32_t)0x00000800)
#define DMA1_HIFCR_R_CTCIF5_BIT     	(11)
#define DMA1_HIFCR_R_CTCIF5_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CTCIF5_CLEAR	   	((uint32_t)0x00000800)

#define DMA1_HIFCR_CTCIF5_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CTCIF5_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CTCIF5_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CFEIF6_MASK    	((uint32_t)0x00010000)
#define DMA1_HIFCR_R_CFEIF6_BIT     	(16)
#define DMA1_HIFCR_R_CFEIF6_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CFEIF6_CLEAR	   	((uint32_t)0x00010000)

#define DMA1_HIFCR_CFEIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CFEIF6_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CFEIF6_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CDMEIF6_MASK    	((uint32_t)0x00040000)
#define DMA1_HIFCR_R_CDMEIF6_BIT     	(18)
#define DMA1_HIFCR_R_CDMEIF6_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CDMEIF6_CLEAR	   	((uint32_t)0x00040000)

#define DMA1_HIFCR_CDMEIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CDMEIF6_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CDMEIF6_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CTEIF6_MASK    	((uint32_t)0x00080000)
#define DMA1_HIFCR_R_CTEIF6_BIT     	(19)
#define DMA1_HIFCR_R_CTEIF6_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CTEIF6_CLEAR	   	((uint32_t)0x00080000)

#define DMA1_HIFCR_CTEIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CTEIF6_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CTEIF6_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CHTIF6_MASK    	((uint32_t)0x00100000)
#define DMA1_HIFCR_R_CHTIF6_BIT     	(20)
#define DMA1_HIFCR_R_CHTIF6_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CHTIF6_CLEAR	   	((uint32_t)0x00100000)

#define DMA1_HIFCR_CHTIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CHTIF6_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CHTIF6_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CTCIF6_MASK    	((uint32_t)0x00200000)
#define DMA1_HIFCR_R_CTCIF6_BIT     	(21)
#define DMA1_HIFCR_R_CTCIF6_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CTCIF6_CLEAR	   	((uint32_t)0x00200000)

#define DMA1_HIFCR_CTCIF6_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CTCIF6_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CTCIF6_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CFEIF7_MASK    	((uint32_t)0x00400000)
#define DMA1_HIFCR_R_CFEIF7_BIT     	(22)
#define DMA1_HIFCR_R_CFEIF7_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CFEIF7_CLEAR	   	((uint32_t)0x00400000)

#define DMA1_HIFCR_CFEIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CFEIF7_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CFEIF7_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CDMEIF7_MASK    	((uint32_t)0x01000000)
#define DMA1_HIFCR_R_CDMEIF7_BIT     	(24)
#define DMA1_HIFCR_R_CDMEIF7_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CDMEIF7_CLEAR	   	((uint32_t)0x01000000)

#define DMA1_HIFCR_CDMEIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CDMEIF7_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CDMEIF7_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CTEIF7_MASK    	((uint32_t)0x02000000)
#define DMA1_HIFCR_R_CTEIF7_BIT     	(25)
#define DMA1_HIFCR_R_CTEIF7_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CTEIF7_CLEAR	   	((uint32_t)0x02000000)

#define DMA1_HIFCR_CTEIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CTEIF7_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CTEIF7_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CHTIF7_MASK    	((uint32_t)0x04000000)
#define DMA1_HIFCR_R_CHTIF7_BIT     	(26)
#define DMA1_HIFCR_R_CHTIF7_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CHTIF7_CLEAR	   	((uint32_t)0x04000000)

#define DMA1_HIFCR_CHTIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_CHTIF7_NA			((uint32_t)0x00000000)
#define DMA1_HIFCR_CHTIF7_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_HIFCR_R_CTCIF7_MASK    	((uint32_t)0x08000000)
#define DMA1_HIFCR_R_CTCIF7_BIT     	(27)
#define DMA1_HIFCR_R_CTCIF7_NA    		((uint32_t)0x00000000)
#define DMA1_HIFCR_R_CTCIF7_CLEAR	   	((uint32_t)0x08000000)

#define DMA1_HIFCR_TCIF7_MASK    		((uint32_t)0x00000001)
#define DMA1_HIFCR_TCIF7_NA				((uint32_t)0x00000000)
#define DMA1_HIFCR_TCIF7_CLEAR	   		((uint32_t)0x00000001)
/*--------*/


/* TODO S0CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 S0CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream0_CR            					(((DMA_SxCR_TypeDef*)(DMA1_BASE+DMA_S0CR_OFFSET )))
#define DMA1_Stream0_CR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S0CR_OFFSET)))

/*--------*/
#define DMA1_Stream0_CR_R_EN_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_R_EN_BIT     	(0)
#define DMA1_Stream0_CR_R_EN_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_EN_EN			((uint32_t)0x00000001)

#define DMA1_Stream0_CR_EN_MASK    		((uint32_t)0x00000001)
#define DMA1_Stream0_CR_EN_DIS			((uint32_t)0x00000000)
#define DMA1_Stream0_CR_EN_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA1_Stream0_CR_R_DMEIE_BIT     (1)
#define DMA1_Stream0_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA1_Stream0_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA1_Stream0_CR_R_TEIE_BIT     	(2)
#define DMA1_Stream0_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA1_Stream0_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA1_Stream0_CR_R_HTIE_BIT     	(3)
#define DMA1_Stream0_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA1_Stream0_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA1_Stream0_CR_R_TCIE_BIT     	(4)
#define DMA1_Stream0_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA1_Stream0_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA1_Stream0_CR_R_PFCTRL_BIT    (5)
#define DMA1_Stream0_CR_R_PFCTRL_DMA	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA1_Stream0_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_DIR_MASK    		((uint32_t)0x000000C0)
#define DMA1_Stream0_CR_R_DIR_BIT     		(6)
#define DMA1_Stream0_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA1_Stream0_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA1_Stream0_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream0_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA1_Stream0_CR_R_CIRC_BIT     	(8)
#define DMA1_Stream0_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA1_Stream0_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA1_Stream0_CR_R_PINC_BIT     	(9)
#define DMA1_Stream0_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA1_Stream0_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA1_Stream0_CR_R_MINC_BIT     	(10)
#define DMA1_Stream0_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA1_Stream0_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA1_Stream0_CR_R_PSIZE_BIT     (11)
#define DMA1_Stream0_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA1_Stream0_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA1_Stream0_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream0_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA1_Stream0_CR_R_MSIZE_BIT     (13)
#define DMA1_Stream0_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA1_Stream0_CR_R_MSIZE_WORD	((uint32_t)0x00004000)

#define DMA1_Stream0_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream0_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_PINCOS_MASK  	((uint32_t)0x00008000)
#define DMA1_Stream0_CR_R_PINCOS_BIT   	(15)
#define DMA1_Stream0_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA1_Stream0_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA1_Stream0_CR_R_PL_BIT     	(16)
#define DMA1_Stream0_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA1_Stream0_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA1_Stream0_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA1_Stream0_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA1_Stream0_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA1_Stream0_CR_PL_MED			((uint32_t)0x00000001)
#define DMA1_Stream0_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA1_Stream0_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA1_Stream0_CR_R_DBM_BIT     	(18)
#define DMA1_Stream0_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA1_Stream0_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA1_Stream0_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA1_Stream0_CR_R_CT_BIT     	(19)
#define DMA1_Stream0_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA1_Stream0_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA1_Stream0_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA1_Stream0_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA1_Stream0_CR_R_PBURST_BIT    (21)
#define DMA1_Stream0_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA1_Stream0_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA1_Stream0_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA1_Stream0_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream0_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream0_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA1_Stream0_CR_R_MBURST_BIT    (23)
#define DMA1_Stream0_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA1_Stream0_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA1_Stream0_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA1_Stream0_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream0_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream0_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream0_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA1_Stream0_CR_R_CHSEL_BIT     (23)
#define DMA1_Stream0_CR_R_CHSEL_SPI3_RX	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_R_CHSEL_I2C1_RX	((uint32_t)0x02000000)
#define DMA1_Stream0_CR_R_CHSEL_TIM4_CH1	((uint32_t)0x04000000)
#define DMA1_Stream0_CR_R_CHSEL_CH3		((uint32_t)0x06000000)
#define DMA1_Stream0_CR_R_CHSEL_UART5_RX	((uint32_t)0x08000000)
#define DMA1_Stream0_CR_R_CHSEL_UART8_TX	((uint32_t)0x0A000000)
#define DMA1_Stream0_CR_R_CHSEL_TIM5_CH3	((uint32_t)0x0C000000)
#define DMA1_Stream0_CR_R_CHSEL_TIM5_UP	((uint32_t)0x0C000000)
#define DMA1_Stream0_CR_R_CHSEL_CH7		((uint32_t)0x0E000000)

#define DMA1_Stream0_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream0_CR_CHSEL_SPI3_RX	((uint32_t)0x00000000)
#define DMA1_Stream0_CR_CHSEL_I2C1_RX	((uint32_t)0x00000001)
#define DMA1_Stream0_CR_CHSEL_TIM4_CH1	((uint32_t)0x00000002)
#define DMA1_Stream0_CR_CHSEL_CH3		((uint32_t)0x00000003)
#define DMA1_Stream0_CR_CHSEL_UART5_RX	((uint32_t)0x00000004)
#define DMA1_Stream0_CR_CHSEL_UART8_TX	((uint32_t)0x00000005)
#define DMA1_Stream0_CR_CHSEL_TIM5_CH3	((uint32_t)0x00000006)
#define DMA1_Stream0_CR_CHSEL_TIM5_UP	((uint32_t)0x00000006)
#define DMA1_Stream0_CR_CHSEL_CH7		((uint32_t)0x00000007)
/*--------*/


/* TODO S0NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 S0NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream0_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA1_BASE+DMA_S0NDTR_OFFSET )))
#define DMA1_Stream0_NDTR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S0NDTR_OFFSET)))

/*--------*/
#define DMA1_Stream0_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA1_Stream0_NDTR_R_NDT_BIT     	(0)

#define DMA1_Stream0_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S0PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 S0PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream0_PAR            					(((DMA_SxPAR_TypeDef*)(DMA1_BASE+DMA_S0PAR_OFFSET )))
#define DMA1_Stream0_PAR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S0PAR_OFFSET)))

/*--------*/
#define DMA1_Stream0_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream0_PAR_R_PAR_BIT     	(0)

#define DMA1_Stream0_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S0M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 S0M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream0_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA1_BASE+DMA_S0M0AR_OFFSET )))
#define DMA1_Stream0_M0AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S0M0AR_OFFSET)))

/*--------*/
#define DMA1_Stream0_M0AR_R_M0A_MASK    ((uint32_t)0xFFFFFFFF)
#define DMA1_Stream0_M0AR_R_M0A_BIT     (0)

#define DMA1_Stream0_M0AR_M0A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S0M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 S0M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream0_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA1_BASE+DMA_S0M1AR_OFFSET )))
#define DMA1_Stream0_M1AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S0M1AR_OFFSET)))

/*--------*/
#define DMA1_Stream0_M1AR_R_M1A_MASK    ((uint32_t)0xFFFFFFFF)
#define DMA1_Stream0_M1AR_R_M1A_BIT     (0)

#define DMA1_Stream0_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S0FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 S0FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream0_FCR            					(((DMA_SxFCR_TypeDef*)(DMA1_BASE+DMA_S0FCR_OFFSET )))
#define DMA1_Stream0_FCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S0FCR_OFFSET)))

/*--------*/
#define DMA1_Stream0_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream0_FCR_R_FTH_BIT     	(0)
#define DMA1_Stream0_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream0_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream0_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream0_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA1_Stream0_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream0_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream0_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream0_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream0_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream0_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA1_Stream0_FCR_R_DMDIS_BIT    (2)
#define DMA1_Stream0_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA1_Stream0_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA1_Stream0_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA1_Stream0_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream0_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA1_Stream0_FCR_R_FS_BIT     	(3)
#define DMA1_Stream0_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream0_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA1_Stream0_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA1_Stream0_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA1_Stream0_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA1_Stream0_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA1_Stream0_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream0_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream0_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA1_Stream0_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA1_Stream0_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA1_Stream0_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA1_Stream0_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA1_Stream0_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA1_Stream0_FCR_R_FEIE_BIT    	(7)
#define DMA1_Stream0_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA1_Stream0_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA1_Stream0_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream0_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream0_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/


/* TODO S1CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 S1CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream1_CR            					(((DMA_SxCR_TypeDef*)(DMA1_BASE+DMA_S1CR_OFFSET )))
#define DMA1_Stream1_CR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S1CR_OFFSET)))

/*--------*/
#define DMA1_Stream1_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA1_Stream1_CR_R_EN_BIT    (0)
#define DMA1_Stream1_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA1_Stream1_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA1_Stream1_CR_R_DMEIE_BIT     (1)
#define DMA1_Stream1_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA1_Stream1_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA1_Stream1_CR_R_TEIE_BIT     	(2)
#define DMA1_Stream1_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA1_Stream1_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA1_Stream1_CR_R_HTIE_BIT     	(3)
#define DMA1_Stream1_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA1_Stream1_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA1_Stream1_CR_R_TCIE_BIT     	(4)
#define DMA1_Stream1_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA1_Stream1_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA1_Stream1_CR_R_PFCTRL_BIT    (5)
#define DMA1_Stream1_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA1_Stream1_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA1_Stream1_CR_R_DIR_BIT     	(6)
#define DMA1_Stream1_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA1_Stream1_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA1_Stream1_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream1_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA1_Stream1_CR_R_CIRC_BIT     	(8)
#define DMA1_Stream1_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA1_Stream1_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA1_Stream1_CR_R_PINC_BIT     	(9)
#define DMA1_Stream1_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA1_Stream1_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA1_Stream1_CR_R_MINC_BIT     	(10)
#define DMA1_Stream1_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA1_Stream1_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA1_Stream1_CR_R_PSIZE_BIT     (11)
#define DMA1_Stream1_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA1_Stream1_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA1_Stream1_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream1_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA1_Stream1_CR_R_MSIZE_BIT     (13)
#define DMA1_Stream1_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA1_Stream1_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA1_Stream1_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream1_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA1_Stream1_CR_R_PINCOS_BIT    (15)
#define DMA1_Stream1_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA1_Stream1_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA1_Stream1_CR_R_PL_BIT     	(16)
#define DMA1_Stream1_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA1_Stream1_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA1_Stream1_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA1_Stream1_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA1_Stream1_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA1_Stream1_CR_PL_MED			((uint32_t)0x00000001)
#define DMA1_Stream1_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA1_Stream1_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA1_Stream1_CR_R_DBM_BIT     	(18)
#define DMA1_Stream1_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA1_Stream1_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA1_Stream1_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA1_Stream1_CR_R_CT_BIT     	(19)
#define DMA1_Stream1_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA1_Stream1_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA1_Stream1_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA1_Stream1_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA1_Stream1_CR_R_PBURST_BIT    (21)
#define DMA1_Stream1_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA1_Stream1_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA1_Stream1_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA1_Stream1_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream1_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream1_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA1_Stream1_CR_R_MBURST_BIT    (23)
#define DMA1_Stream1_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA1_Stream1_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA1_Stream1_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA1_Stream1_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream1_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream1_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream1_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA1_Stream1_CR_R_CHSEL_BIT     (23)
#define DMA1_Stream1_CR_R_CHSEL_SPDIFRX_DT	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_R_CHSEL_I2C3_RX	((uint32_t)0x02000000)
#define DMA1_Stream1_CR_R_CHSEL_CH2		((uint32_t)0x04000000)
#define DMA1_Stream1_CR_R_CHSEL_TIM2_UP	((uint32_t)0x06000000)
#define DMA1_Stream1_CR_R_CHSEL_TIM2_CH3	((uint32_t)0x06000000)
#define DMA1_Stream1_CR_R_CHSEL_USART3_RX	((uint32_t)0x08000000)
#define DMA1_Stream1_CR_R_CHSEL_UART7_TX	((uint32_t)0x0A000000)
#define DMA1_Stream1_CR_R_CHSEL_TIM5_CH4	((uint32_t)0x0C000000)
#define DMA1_Stream1_CR_R_CHSEL_TIM5_TRIG	((uint32_t)0x0C000000)
#define DMA1_Stream1_CR_R_CHSEL_TIM6_UP		((uint32_t)0x0E000000)

#define DMA1_Stream1_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream1_CR_CHSEL_SPDIFRX_DT	((uint32_t)0x00000000)
#define DMA1_Stream1_CR_CHSEL_I2C3_RX	((uint32_t)0x00000001)
#define DMA1_Stream1_CR_CHSEL_CH2		((uint32_t)0x00000002)
#define DMA1_Stream1_CR_CHSEL_TIM2_UP	((uint32_t)0x00000003)
#define DMA1_Stream1_CR_CHSEL_TIM2_CH3	((uint32_t)0x00000003)
#define DMA1_Stream1_CR_CHSEL_USART3_RX	((uint32_t)0x00000004)
#define DMA1_Stream1_CR_CHSEL_UART7_TX	((uint32_t)0x00000005)
#define DMA1_Stream1_CR_CHSEL_TIM5_CH4	((uint32_t)0x00000006)
#define DMA1_Stream1_CR_CHSEL_TIM5_TRIG	((uint32_t)0x00000006)
#define DMA1_Stream1_CR_CHSEL_TIM6_UP	((uint32_t)0x00000007)
/*--------*/


/* TODO S1NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 S1NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream1_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA1_BASE+DMA_S1NDTR_OFFSET )))
#define DMA1_Stream1_NDTR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S1NDTR_OFFSET)))

/*--------*/
#define DMA1_Stream1_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA1_Stream1_NDTR_R_NDT_BIT     	(0)

#define DMA1_Stream1_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S1PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 S1PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream1_PAR            					(((DMA_SxPAR_TypeDef*)(DMA1_BASE+DMA_S1PAR_OFFSET )))
#define DMA1_Stream1_PAR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S1PAR_OFFSET)))

/*--------*/
#define DMA1_Stream1_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream1_PAR_R_PAR_BIT     	(0)

#define DMA1_Stream1_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S1M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 S1M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream1_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA1_BASE+DMA_S1M0AR_OFFSET )))
#define DMA1_Stream1_M0AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S1M0AR_OFFSET)))

/*--------*/
#define DMA1_Stream1_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream1_M0AR_R_M0A_BIT     	(0)

#define DMA1_Stream1_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S1M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 S1M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream1_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA1_BASE+DMA_S1M1AR_OFFSET )))
#define DMA1_Stream1_M1AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S1M1AR_OFFSET)))

/*--------*/
#define DMA1_Stream1_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream1_M1AR_R_M1A_BIT     	(0)

#define DMA1_Stream1_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S1FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 S1FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream1_FCR            					(((DMA_SxFCR_TypeDef*)(DMA1_BASE+DMA_S1FCR_OFFSET )))
#define DMA1_Stream1_FCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S1FCR_OFFSET)))

/*--------*/
#define DMA1_Stream1_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream1_FCR_R_FTH_BIT     	(0)
#define DMA1_Stream1_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream1_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream1_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream1_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA1_Stream1_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream1_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream1_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream1_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream1_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream1_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA1_Stream1_FCR_R_DMDIS_BIT    (2)
#define DMA1_Stream1_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA1_Stream1_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA1_Stream1_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA1_Stream1_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream1_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA1_Stream1_FCR_R_FS_BIT     	(3)
#define DMA1_Stream1_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream1_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA1_Stream1_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA1_Stream1_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA1_Stream1_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA1_Stream1_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA1_Stream1_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream1_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream1_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA1_Stream1_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA1_Stream1_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA1_Stream1_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA1_Stream1_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA1_Stream1_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA1_Stream1_FCR_R_FEIE_BIT    	(7)
#define DMA1_Stream1_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA1_Stream1_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA1_Stream1_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream1_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream1_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/


/* TODO S2CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 S2CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream2_CR            					(((DMA_SxCR_TypeDef*)(DMA1_BASE+DMA_S2CR_OFFSET )))
#define DMA1_Stream2_CR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S2CR_OFFSET)))

/*--------*/
#define DMA1_Stream2_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA1_Stream2_CR_R_EN_BIT    (0)
#define DMA1_Stream2_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA1_Stream2_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA1_Stream2_CR_R_DMEIE_BIT     (1)
#define DMA1_Stream2_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA1_Stream2_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA1_Stream2_CR_R_TEIE_BIT     	(2)
#define DMA1_Stream2_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA1_Stream2_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA1_Stream2_CR_R_HTIE_BIT     	(3)
#define DMA1_Stream2_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA1_Stream2_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA1_Stream2_CR_R_TCIE_BIT     	(4)
#define DMA1_Stream2_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA1_Stream2_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA1_Stream2_CR_R_PFCTRL_BIT    (5)
#define DMA1_Stream2_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA1_Stream2_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA1_Stream2_CR_R_DIR_BIT     	(6)
#define DMA1_Stream2_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA1_Stream2_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA1_Stream2_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream2_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA1_Stream2_CR_R_CIRC_BIT     	(8)
#define DMA1_Stream2_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA1_Stream2_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA1_Stream2_CR_R_PINC_BIT     	(9)
#define DMA1_Stream2_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA1_Stream2_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA1_Stream2_CR_R_MINC_BIT     	(10)
#define DMA1_Stream2_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA1_Stream2_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA1_Stream2_CR_R_PSIZE_BIT     (11)
#define DMA1_Stream2_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA1_Stream2_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA1_Stream2_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream2_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA1_Stream2_CR_R_MSIZE_BIT     (13)
#define DMA1_Stream2_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA1_Stream2_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA1_Stream2_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream2_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA1_Stream2_CR_R_PINCOS_BIT    (15)
#define DMA1_Stream2_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA1_Stream2_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA1_Stream2_CR_R_PL_BIT     	(16)
#define DMA1_Stream2_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA1_Stream2_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA1_Stream2_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA1_Stream2_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA1_Stream2_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA1_Stream2_CR_PL_MED			((uint32_t)0x00000001)
#define DMA1_Stream2_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA1_Stream2_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA1_Stream2_CR_R_DBM_BIT     	(18)
#define DMA1_Stream2_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA1_Stream2_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA1_Stream2_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA1_Stream2_CR_R_CT_BIT     	(19)
#define DMA1_Stream2_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA1_Stream2_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA1_Stream2_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA1_Stream2_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA1_Stream2_CR_R_PBURST_BIT    (21)
#define DMA1_Stream2_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA1_Stream2_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA1_Stream2_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA1_Stream2_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream2_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream2_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA1_Stream2_CR_R_MBURST_BIT    (23)
#define DMA1_Stream2_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA1_Stream2_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA1_Stream2_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA1_Stream2_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream2_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream2_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream2_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA1_Stream2_CR_R_CHSEL_BIT     (23)
#define DMA1_Stream2_CR_R_CHSEL_SPI3_RX	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_R_CHSEL_TIM7_UP	((uint32_t)0x02000000)
#define DMA1_Stream2_CR_R_CHSEL_I2C4_RX	((uint32_t)0x04000000)
#define DMA1_Stream2_CR_R_CHSEL_I2C3_RX	((uint32_t)0x06000000)
#define DMA1_Stream2_CR_R_CHSEL_UART4_RX	((uint32_t)0x08000000)
#define DMA1_Stream2_CR_R_CHSEL_TIM3_CH4	((uint32_t)0x0A000000)
#define DMA1_Stream2_CR_R_CHSEL_TIM3_UP		((uint32_t)0x0A000000)
#define DMA1_Stream2_CR_R_CHSEL_TIM5_CH1	((uint32_t)0x0C000000)
#define DMA1_Stream2_CR_R_CHSEL_I2C2_RX		((uint32_t)0x0E000000)

#define DMA1_Stream2_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream2_CR_CHSEL_SPI3_RX	((uint32_t)0x00000000)
#define DMA1_Stream2_CR_CHSEL_TIM7_UP	((uint32_t)0x00000001)
#define DMA1_Stream2_CR_CHSEL_I2C4_RX	((uint32_t)0x00000002)
#define DMA1_Stream2_CR_CHSEL_I2C3_RX	((uint32_t)0x00000003)
#define DMA1_Stream2_CR_CHSEL_UART4_RX	((uint32_t)0x00000004)
#define DMA1_Stream2_CR_CHSEL_TIM3_CH4	((uint32_t)0x00000005)
#define DMA1_Stream2_CR_CHSEL_TIM3_UP	((uint32_t)0x00000005)
#define DMA1_Stream2_CR_CHSEL_TIM5_CH1	((uint32_t)0x00000006)
#define DMA1_Stream2_CR_CHSEL_I2C2_RX	((uint32_t)0x00000007)
/*--------*/


/* TODO S2NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 S2NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream2_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA1_BASE+DMA_S2NDTR_OFFSET )))
#define DMA1_Stream2_NDTR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S2NDTR_OFFSET)))

/*--------*/
#define DMA1_Stream2_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA1_Stream2_NDTR_R_NDT_BIT     	(0)

#define DMA1_Stream2_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S2PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 S2PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream2_PAR            					(((DMA_SxPAR_TypeDef*)(DMA1_BASE+DMA_S2PAR_OFFSET )))
#define DMA1_Stream2_PAR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S2PAR_OFFSET)))

/*--------*/
#define DMA1_Stream2_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream2_PAR_R_PAR_BIT     	(0)

#define DMA1_Stream2_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S2M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 S2M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream2_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA1_BASE+DMA_S2M0AR_OFFSET )))
#define DMA1_Stream2_M0AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S2M0AR_OFFSET)))

/*--------*/
#define DMA1_Stream2_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream2_M0AR_R_M0A_BIT     	(0)

#define DMA1_Stream2_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S2M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 21 S2M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream2_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA1_BASE+DMA_S2M1AR_OFFSET )))
#define DMA1_Stream2_M1AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S2M1AR_OFFSET)))

/*--------*/
#define DMA1_Stream2_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream2_M1AR_R_M1A_BIT     	(0)

#define DMA1_Stream2_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S2FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 22 S2FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream2_FCR            					(((DMA_SxFCR_TypeDef*)(DMA1_BASE+DMA_S2FCR_OFFSET )))
#define DMA1_Stream2_FCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S2FCR_OFFSET)))

/*--------*/
#define DMA1_Stream2_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream2_FCR_R_FTH_BIT     	(0)
#define DMA1_Stream2_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream2_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream2_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream2_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA1_Stream2_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream2_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream2_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream2_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream2_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream2_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA1_Stream2_FCR_R_DMDIS_BIT    (2)
#define DMA1_Stream2_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA1_Stream2_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA1_Stream2_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA1_Stream2_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream2_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA1_Stream2_FCR_R_FS_BIT     	(3)
#define DMA1_Stream2_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream2_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA1_Stream2_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA1_Stream2_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA1_Stream2_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA1_Stream2_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA1_Stream2_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream2_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream2_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA1_Stream2_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA1_Stream2_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA1_Stream2_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA1_Stream2_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA1_Stream2_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA1_Stream2_FCR_R_FEIE_BIT    	(7)
#define DMA1_Stream2_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA1_Stream2_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA1_Stream2_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream2_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream2_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/



/* TODO S3CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 23 S3CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream3_CR            					(((DMA_SxCR_TypeDef*)(DMA1_BASE+DMA_S3CR_OFFSET )))
#define DMA1_Stream3_CR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S3CR_OFFSET)))

/*--------*/
#define DMA1_Stream3_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA1_Stream3_CR_R_EN_BIT    (0)
#define DMA1_Stream3_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA1_Stream3_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA1_Stream3_CR_R_DMEIE_BIT     (1)
#define DMA1_Stream3_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA1_Stream3_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA1_Stream3_CR_R_TEIE_BIT     	(2)
#define DMA1_Stream3_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA1_Stream3_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA1_Stream3_CR_R_HTIE_BIT     	(3)
#define DMA1_Stream3_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA1_Stream3_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA1_Stream3_CR_R_TCIE_BIT     	(4)
#define DMA1_Stream3_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA1_Stream3_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA1_Stream3_CR_R_PFCTRL_BIT    (5)
#define DMA1_Stream3_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA1_Stream3_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA1_Stream3_CR_R_DIR_BIT     	(6)
#define DMA1_Stream3_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA1_Stream3_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA1_Stream3_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream3_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA1_Stream3_CR_R_CIRC_BIT     	(8)
#define DMA1_Stream3_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA1_Stream3_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA1_Stream3_CR_R_PINC_BIT     	(9)
#define DMA1_Stream3_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA1_Stream3_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA1_Stream3_CR_R_MINC_BIT     	(10)
#define DMA1_Stream3_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA1_Stream3_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA1_Stream3_CR_R_PSIZE_BIT     (11)
#define DMA1_Stream3_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA1_Stream3_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA1_Stream3_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream3_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA1_Stream3_CR_R_MSIZE_BIT     (13)
#define DMA1_Stream3_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA1_Stream3_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA1_Stream3_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream3_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA1_Stream3_CR_R_PINCOS_BIT    (15)
#define DMA1_Stream3_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA1_Stream3_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA1_Stream3_CR_R_PL_BIT     	(16)
#define DMA1_Stream3_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA1_Stream3_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA1_Stream3_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA1_Stream3_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA1_Stream3_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA1_Stream3_CR_PL_MED			((uint32_t)0x00000001)
#define DMA1_Stream3_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA1_Stream3_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA1_Stream3_CR_R_DBM_BIT     	(18)
#define DMA1_Stream3_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA1_Stream3_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA1_Stream3_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA1_Stream3_CR_R_CT_BIT     	(19)
#define DMA1_Stream3_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA1_Stream3_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA1_Stream3_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA1_Stream3_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA1_Stream3_CR_R_PBURST_BIT    (21)
#define DMA1_Stream3_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA1_Stream3_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA1_Stream3_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA1_Stream3_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream3_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream3_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA1_Stream3_CR_R_MBURST_BIT    (23)
#define DMA1_Stream3_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA1_Stream3_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA1_Stream3_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA1_Stream3_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream3_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream3_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream3_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream3_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA1_Stream3_CR_R_CHSEL_BIT     (23)
#define DMA1_Stream3_CR_R_CHSEL_SPI2_RX	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_R_CHSEL_CH1		((uint32_t)0x02000000)
#define DMA1_Stream3_CR_R_CHSEL_TIM4_CH2	((uint32_t)0x04000000)
#define DMA1_Stream3_CR_R_CHSEL_CH3		((uint32_t)0x06000000)
#define DMA1_Stream3_CR_R_CHSEL_USART3_TX	((uint32_t)0x08000000)
#define DMA1_Stream3_CR_R_CHSEL_UART7_RX	((uint32_t)0x0A000000)
#define DMA1_Stream3_CR_R_CHSEL_TIM5_CH4	((uint32_t)0x0C000000)
#define DMA1_Stream3_CR_R_CHSEL_TIM5_TRIG	((uint32_t)0x0C000000)
#define DMA1_Stream3_CR_R_CHSEL_I2C2_RX		((uint32_t)0x0E000000)

#define DMA1_Stream3_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream3_CR_CHSEL_SPI2_RX	((uint32_t)0x00000000)
#define DMA1_Stream3_CR_CHSEL_CH1		((uint32_t)0x00000001)
#define DMA1_Stream3_CR_CHSEL_TIM4_CH2	((uint32_t)0x00000002)
#define DMA1_Stream3_CR_CHSEL_CH3		((uint32_t)0x00000003)
#define DMA1_Stream3_CR_CHSEL_USART3_TX	((uint32_t)0x00000004)
#define DMA1_Stream3_CR_CHSEL_UART7_RX	((uint32_t)0x00000005)
#define DMA1_Stream3_CR_CHSEL_TIM5_CH4	((uint32_t)0x00000006)
#define DMA1_Stream3_CR_CHSEL_TIM5_TRIG	((uint32_t)0x00000006)
#define DMA1_Stream3_CR_CHSEL_I2C2_RX	((uint32_t)0x00000007)
/*--------*/


/* TODO S3NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 24 S3NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream3_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA1_BASE+DMA_S3NDTR_OFFSET )))
#define DMA1_Stream3_NDTR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S3NDTR_OFFSET)))

/*--------*/
#define DMA1_Stream3_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA1_Stream3_NDTR_R_NDT_BIT     	(0)

#define DMA1_Stream3_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S3PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 25 S3PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream3_PAR            					(((DMA_SxPAR_TypeDef*)(DMA1_BASE+DMA_S3PAR_OFFSET )))
#define DMA1_Stream3_PAR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S3PAR_OFFSET)))

/*--------*/
#define DMA1_Stream3_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream3_PAR_R_PAR_BIT     	(0)

#define DMA1_Stream3_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S3M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 26 S3M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream3_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA1_BASE+DMA_S3M0AR_OFFSET )))
#define DMA1_Stream3_M0AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S3M0AR_OFFSET)))

/*--------*/
#define DMA1_Stream3_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream3_M0AR_R_M0A_BIT     	(0)

#define DMA1_Stream3_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S3M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 27 S3M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream3_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA1_BASE+DMA_S3M1AR_OFFSET )))
#define DMA1_Stream3_M1AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S3M1AR_OFFSET)))

/*--------*/
#define DMA1_Stream3_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream3_M1AR_R_M1A_BIT     	(0)

#define DMA1_Stream3_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S3FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 28 S3FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream3_FCR            					(((DMA_SxFCR_TypeDef*)(DMA1_BASE+DMA_S3FCR_OFFSET )))
#define DMA1_Stream3_FCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S3FCR_OFFSET)))

/*--------*/
#define DMA1_Stream3_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream3_FCR_R_FTH_BIT     	(0)
#define DMA1_Stream3_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream3_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream3_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream3_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA1_Stream3_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream3_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream3_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream3_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream3_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream3_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA1_Stream3_FCR_R_DMDIS_BIT    (2)
#define DMA1_Stream3_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA1_Stream3_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA1_Stream3_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA1_Stream3_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream3_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA1_Stream3_FCR_R_FS_BIT     	(3)
#define DMA1_Stream3_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream3_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA1_Stream3_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA1_Stream3_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA1_Stream3_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA1_Stream3_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA1_Stream3_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream3_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream3_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA1_Stream3_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA1_Stream3_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA1_Stream3_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA1_Stream3_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA1_Stream3_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA1_Stream3_FCR_R_FEIE_BIT    	(7)
#define DMA1_Stream3_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA1_Stream3_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA1_Stream3_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream3_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream3_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/



/* TODO S4CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 29 S4CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream4_CR            					(((DMA_SxCR_TypeDef*)(DMA1_BASE+DMA_S4CR_OFFSET )))
#define DMA1_Stream4_CR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S4CR_OFFSET)))

/*--------*/
#define DMA1_Stream4_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA1_Stream4_CR_R_EN_BIT    (0)
#define DMA1_Stream4_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA1_Stream4_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA1_Stream4_CR_R_DMEIE_BIT     (1)
#define DMA1_Stream4_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA1_Stream4_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA1_Stream4_CR_R_TEIE_BIT     	(2)
#define DMA1_Stream4_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA1_Stream4_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA1_Stream4_CR_R_HTIE_BIT     	(3)
#define DMA1_Stream4_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA1_Stream4_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA1_Stream4_CR_R_TCIE_BIT     	(4)
#define DMA1_Stream4_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA1_Stream4_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA1_Stream4_CR_R_PFCTRL_BIT    (5)
#define DMA1_Stream4_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA1_Stream4_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA1_Stream4_CR_R_DIR_BIT     	(6)
#define DMA1_Stream4_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA1_Stream4_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA1_Stream4_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream4_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA1_Stream4_CR_R_CIRC_BIT     	(8)
#define DMA1_Stream4_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA1_Stream4_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA1_Stream4_CR_R_PINC_BIT     	(9)
#define DMA1_Stream4_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA1_Stream4_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA1_Stream4_CR_R_MINC_BIT     	(10)
#define DMA1_Stream4_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA1_Stream4_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA1_Stream4_CR_R_PSIZE_BIT     (11)
#define DMA1_Stream4_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA1_Stream4_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA1_Stream4_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream4_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA1_Stream4_CR_R_MSIZE_BIT     (13)
#define DMA1_Stream4_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA1_Stream4_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA1_Stream4_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream4_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA1_Stream4_CR_R_PINCOS_BIT    (15)
#define DMA1_Stream4_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA1_Stream4_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA1_Stream4_CR_R_PL_BIT     	(16)
#define DMA1_Stream4_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA1_Stream4_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA1_Stream4_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA1_Stream4_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA1_Stream4_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA1_Stream4_CR_PL_MED			((uint32_t)0x00000001)
#define DMA1_Stream4_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA1_Stream4_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA1_Stream4_CR_R_DBM_BIT     	(18)
#define DMA1_Stream4_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA1_Stream4_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA1_Stream4_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA1_Stream4_CR_R_CT_BIT     	(19)
#define DMA1_Stream4_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA1_Stream4_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA1_Stream4_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA1_Stream4_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA1_Stream4_CR_R_PBURST_BIT    (21)
#define DMA1_Stream4_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA1_Stream4_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA1_Stream4_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA1_Stream4_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream4_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream4_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA1_Stream4_CR_R_MBURST_BIT    (23)
#define DMA1_Stream4_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA1_Stream4_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA1_Stream4_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA1_Stream4_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream4_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream4_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream4_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA1_Stream4_CR_R_CHSEL_BIT     (23)
#define DMA1_Stream4_CR_R_CHSEL_SPI2_TX	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_R_CHSEL_TIM7_UP	((uint32_t)0x02000000)
#define DMA1_Stream4_CR_R_CHSEL_CH2		((uint32_t)0x04000000)
#define DMA1_Stream4_CR_R_CHSEL_I2C3_TX	((uint32_t)0x06000000)
#define DMA1_Stream4_CR_R_CHSEL_UART4_TX	((uint32_t)0x08000000)
#define DMA1_Stream4_CR_R_CHSEL_TIM3_CH1	((uint32_t)0x0A000000)
#define DMA1_Stream4_CR_R_CHSEL_TIM3_TRIG	((uint32_t)0x0A000000)
#define DMA1_Stream4_CR_R_CHSEL_TIM5_CH2	((uint32_t)0x0C000000)
#define DMA1_Stream4_CR_R_CHSEL_USART3_TX	((uint32_t)0x0E000000)

#define DMA1_Stream4_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream4_CR_CHSEL_SPI2_TX	((uint32_t)0x00000000)
#define DMA1_Stream4_CR_CHSEL_TIM7_UP	((uint32_t)0x00000001)
#define DMA1_Stream4_CR_CHSEL_CH2		((uint32_t)0x00000002)
#define DMA1_Stream4_CR_CHSEL_I2C3_TX	((uint32_t)0x00000003)
#define DMA1_Stream4_CR_CHSEL_UART4_TX	((uint32_t)0x00000004)
#define DMA1_Stream4_CR_CHSEL_TIM3_CH1	((uint32_t)0x00000005)
#define DMA1_Stream4_CR_CHSEL_TIM3_TRIG	((uint32_t)0x00000005)
#define DMA1_Stream4_CR_CHSEL_TIM5_CH2	((uint32_t)0x00000006)
#define DMA1_Stream4_CR_CHSEL_USART3_TX	((uint32_t)0x00000007)
/*--------*/


/* TODO S4NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 30 S4NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream4_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA1_BASE+DMA_S4NDTR_OFFSET )))
#define DMA1_Stream4_NDTR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S4NDTR_OFFSET)))

/*--------*/
#define DMA1_Stream4_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA1_Stream4_NDTR_R_NDT_BIT     	(0)

#define DMA1_Stream4_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S4PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 31 S4PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream4_PAR            					(((DMA_SxPAR_TypeDef*)(DMA1_BASE+DMA_S4PAR_OFFSET )))
#define DMA1_Stream4_PAR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S4PAR_OFFSET)))

/*--------*/
#define DMA1_Stream4_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream4_PAR_R_PAR_BIT     	(0)

#define DMA1_Stream4_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S4M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 32 S4M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream4_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA1_BASE+DMA_S4M0AR_OFFSET )))
#define DMA1_Stream4_M0AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S4M0AR_OFFSET)))

/*--------*/
#define DMA1_Stream4_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream4_M0AR_R_M0A_BIT     	(0)

#define DMA1_Stream4_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S4M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 33 S4M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream4_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA1_BASE+DMA_S4M1AR_OFFSET )))
#define DMA1_Stream4_M1AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S4M1AR_OFFSET)))

/*--------*/
#define DMA1_Stream4_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream4_M1AR_R_M1A_BIT     	(0)

#define DMA1_Stream4_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S4FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 34 S4FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream4_FCR            					(((DMA_SxFCR_TypeDef*)(DMA1_BASE+DMA_S4FCR_OFFSET )))
#define DMA1_Stream4_FCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S4FCR_OFFSET)))

/*--------*/
#define DMA1_Stream4_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream4_FCR_R_FTH_BIT     	(0)
#define DMA1_Stream4_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream4_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream4_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream4_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA1_Stream4_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream4_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream4_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream4_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream4_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream4_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA1_Stream4_FCR_R_DMDIS_BIT    (2)
#define DMA1_Stream4_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA1_Stream4_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA1_Stream4_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA1_Stream4_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream4_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA1_Stream4_FCR_R_FS_BIT     	(3)
#define DMA1_Stream4_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream4_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA1_Stream4_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA1_Stream4_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA1_Stream4_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA1_Stream4_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA1_Stream4_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream4_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream4_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA1_Stream4_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA1_Stream4_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA1_Stream4_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA1_Stream4_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA1_Stream4_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA1_Stream4_FCR_R_FEIE_BIT    	(7)
#define DMA1_Stream4_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA1_Stream4_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA1_Stream4_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream4_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream4_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/



/* TODO S5CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 35 S5CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream5_CR            					(((DMA_SxCR_TypeDef*)(DMA1_BASE+DMA_S5CR_OFFSET )))
#define DMA1_Stream5_CR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S5CR_OFFSET)))

/*--------*/
#define DMA1_Stream5_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA1_Stream5_CR_R_EN_BIT    (0)
#define DMA1_Stream5_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA1_Stream5_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA1_Stream5_CR_R_DMEIE_BIT     (1)
#define DMA1_Stream5_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA1_Stream5_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA1_Stream5_CR_R_TEIE_BIT     	(2)
#define DMA1_Stream5_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA1_Stream5_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA1_Stream5_CR_R_HTIE_BIT     	(3)
#define DMA1_Stream5_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA1_Stream5_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA1_Stream5_CR_R_TCIE_BIT     	(4)
#define DMA1_Stream5_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA1_Stream5_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA1_Stream5_CR_R_PFCTRL_BIT    (5)
#define DMA1_Stream5_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA1_Stream5_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA1_Stream5_CR_R_DIR_BIT     	(6)
#define DMA1_Stream5_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA1_Stream5_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA1_Stream5_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream5_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA1_Stream5_CR_R_CIRC_BIT     	(8)
#define DMA1_Stream5_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA1_Stream5_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA1_Stream5_CR_R_PINC_BIT     	(9)
#define DMA1_Stream5_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA1_Stream5_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA1_Stream5_CR_R_MINC_BIT     	(10)
#define DMA1_Stream5_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA1_Stream5_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA1_Stream5_CR_R_PSIZE_BIT     (11)
#define DMA1_Stream5_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA1_Stream5_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA1_Stream5_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream5_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA1_Stream5_CR_R_MSIZE_BIT     (13)
#define DMA1_Stream5_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA1_Stream5_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA1_Stream5_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream5_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA1_Stream5_CR_R_PINCOS_BIT    (15)
#define DMA1_Stream5_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA1_Stream5_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA1_Stream5_CR_R_PL_BIT     	(16)
#define DMA1_Stream5_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA1_Stream5_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA1_Stream5_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA1_Stream5_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA1_Stream5_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA1_Stream5_CR_PL_MED			((uint32_t)0x00000001)
#define DMA1_Stream5_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA1_Stream5_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA1_Stream5_CR_R_DBM_BIT     	(18)
#define DMA1_Stream5_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA1_Stream5_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA1_Stream5_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA1_Stream5_CR_R_CT_BIT     	(19)
#define DMA1_Stream5_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA1_Stream5_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA1_Stream5_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA1_Stream5_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA1_Stream5_CR_R_PBURST_BIT    (21)
#define DMA1_Stream5_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA1_Stream5_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA1_Stream5_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA1_Stream5_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream5_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream5_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA1_Stream5_CR_R_MBURST_BIT    (23)
#define DMA1_Stream5_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA1_Stream5_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA1_Stream5_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA1_Stream5_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream5_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream5_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream5_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA1_Stream5_CR_R_CHSEL_BIT     (23)
#define DMA1_Stream5_CR_R_CHSEL_SPI3_TX	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_R_CHSEL_I2C1_RX	((uint32_t)0x02000000)
#define DMA1_Stream5_CR_R_CHSEL_I2C4_RX	((uint32_t)0x04000000)
#define DMA1_Stream5_CR_R_CHSEL_TIM2_CH1	((uint32_t)0x06000000)
#define DMA1_Stream5_CR_R_CHSEL_USART2_RX	((uint32_t)0x08000000)
#define DMA1_Stream5_CR_R_CHSEL_TIM3_CH2	((uint32_t)0x0A000000)
#define DMA1_Stream5_CR_R_CHSEL_CH6		((uint32_t)0x0C000000)
#define DMA1_Stream5_CR_R_CHSEL_DAC1	((uint32_t)0x0E000000)

#define DMA1_Stream5_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream5_CR_CHSEL_SPI3_TX	((uint32_t)0x00000000)
#define DMA1_Stream5_CR_CHSEL_I2C1_RX	((uint32_t)0x00000001)
#define DMA1_Stream5_CR_CHSEL_I2C4_RX	((uint32_t)0x00000002)
#define DMA1_Stream5_CR_CHSEL_TIM2_CH1	((uint32_t)0x00000003)
#define DMA1_Stream5_CR_CHSEL_USART2_RX	((uint32_t)0x00000004)
#define DMA1_Stream5_CR_CHSEL_TIM3_CH2	((uint32_t)0x00000005)
#define DMA1_Stream5_CR_CHSEL_CH6		((uint32_t)0x00000006)
#define DMA1_Stream5_CR_CHSEL_DAC1		((uint32_t)0x00000007)
/*--------*/


/* TODO S5NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 36 S5NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream5_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA1_BASE+DMA_S5NDTR_OFFSET )))
#define DMA1_Stream5_NDTR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S5NDTR_OFFSET)))

/*--------*/
#define DMA1_Stream5_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA1_Stream5_NDTR_R_NDT_BIT     	(0)

#define DMA1_Stream5_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S5PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 37 S5PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream5_PAR            					(((DMA_SxPAR_TypeDef*)(DMA1_BASE+DMA_S5PAR_OFFSET )))
#define DMA1_Stream5_PAR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S5PAR_OFFSET)))

/*--------*/
#define DMA1_Stream5_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream5_PAR_R_PAR_BIT     	(0)

#define DMA1_Stream5_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S5M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 38 S5M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream5_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA1_BASE+DMA_S5M0AR_OFFSET )))
#define DMA1_Stream5_M0AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S5M0AR_OFFSET)))

/*--------*/
#define DMA1_Stream5_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream5_M0AR_R_M0A_BIT     	(0)

#define DMA1_Stream5_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S5M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 39 S5M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream5_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA1_BASE+DMA_S5M1AR_OFFSET )))
#define DMA1_Stream5_M1AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S5M1AR_OFFSET)))

/*--------*/
#define DMA1_Stream5_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream5_M1AR_R_M1A_BIT     	(0)

#define DMA1_Stream5_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S5FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 40 S5FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream5_FCR            					(((DMA_SxFCR_TypeDef*)(DMA1_BASE+DMA_S5FCR_OFFSET )))
#define DMA1_Stream5_FCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S5FCR_OFFSET)))

/*--------*/
#define DMA1_Stream5_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream5_FCR_R_FTH_BIT     	(0)
#define DMA1_Stream5_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream5_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream5_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream5_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA1_Stream5_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream5_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream5_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream5_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream5_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream5_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA1_Stream5_FCR_R_DMDIS_BIT    (2)
#define DMA1_Stream5_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA1_Stream5_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA1_Stream5_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA1_Stream5_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream5_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA1_Stream5_FCR_R_FS_BIT     	(3)
#define DMA1_Stream5_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream5_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA1_Stream5_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA1_Stream5_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA1_Stream5_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA1_Stream5_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA1_Stream5_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream5_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream5_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA1_Stream5_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA1_Stream5_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA1_Stream5_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA1_Stream5_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA1_Stream5_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA1_Stream5_FCR_R_FEIE_BIT    	(7)
#define DMA1_Stream5_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA1_Stream5_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA1_Stream5_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream5_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream5_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/


/* TODO S6CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 41 S6CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream6_CR            					(((DMA_SxCR_TypeDef*)(DMA1_BASE+DMA_S6CR_OFFSET )))
#define DMA1_Stream6_CR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S6CR_OFFSET)))

/*--------*/
#define DMA1_Stream6_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA1_Stream6_CR_R_EN_BIT    (0)
#define DMA1_Stream6_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA1_Stream6_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA1_Stream6_CR_R_DMEIE_BIT     (1)
#define DMA1_Stream6_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA1_Stream6_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA1_Stream6_CR_R_TEIE_BIT     	(2)
#define DMA1_Stream6_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA1_Stream6_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA1_Stream6_CR_R_HTIE_BIT     	(3)
#define DMA1_Stream6_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA1_Stream6_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA1_Stream6_CR_R_TCIE_BIT     	(4)
#define DMA1_Stream6_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA1_Stream6_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA1_Stream6_CR_R_PFCTRL_BIT    (5)
#define DMA1_Stream6_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA1_Stream6_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA1_Stream6_CR_R_DIR_BIT     	(6)
#define DMA1_Stream6_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA1_Stream6_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA1_Stream6_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream6_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA1_Stream6_CR_R_CIRC_BIT     	(8)
#define DMA1_Stream6_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA1_Stream6_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA1_Stream6_CR_R_PINC_BIT     	(9)
#define DMA1_Stream6_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA1_Stream6_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA1_Stream6_CR_R_MINC_BIT     	(10)
#define DMA1_Stream6_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA1_Stream6_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA1_Stream6_CR_R_PSIZE_BIT     (11)
#define DMA1_Stream6_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA1_Stream6_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA1_Stream6_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream6_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA1_Stream6_CR_R_MSIZE_BIT     (13)
#define DMA1_Stream6_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA1_Stream6_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA1_Stream6_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream6_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA1_Stream6_CR_R_PINCOS_BIT    (15)
#define DMA1_Stream6_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA1_Stream6_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA1_Stream6_CR_R_PL_BIT     	(16)
#define DMA1_Stream6_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA1_Stream6_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA1_Stream6_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA1_Stream6_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA1_Stream6_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA1_Stream6_CR_PL_MED			((uint32_t)0x00000001)
#define DMA1_Stream6_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA1_Stream6_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA1_Stream6_CR_R_DBM_BIT     	(18)
#define DMA1_Stream6_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA1_Stream6_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA1_Stream6_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA1_Stream6_CR_R_CT_BIT     	(19)
#define DMA1_Stream6_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA1_Stream6_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA1_Stream6_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA1_Stream6_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA1_Stream6_CR_R_PBURST_BIT    (21)
#define DMA1_Stream6_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA1_Stream6_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA1_Stream6_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA1_Stream6_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream6_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream6_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA1_Stream6_CR_R_MBURST_BIT    (23)
#define DMA1_Stream6_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA1_Stream6_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA1_Stream6_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA1_Stream6_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream6_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream6_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream6_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA1_Stream6_CR_R_CHSEL_BIT     (23)
#define DMA1_Stream6_CR_R_CHSEL_SPDIFRX_CS	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_R_CHSEL_I2C1_TX	((uint32_t)0x02000000)
#define DMA1_Stream6_CR_R_CHSEL_TIM4_UP	((uint32_t)0x04000000)
#define DMA1_Stream6_CR_R_CHSEL_TIM2_CH2	((uint32_t)0x06000000)
#define DMA1_Stream6_CR_R_CHSEL_TIM2_CH4	((uint32_t)0x06000000)
#define DMA1_Stream6_CR_R_CHSEL_USART2_TX	((uint32_t)0x08000000)
#define DMA1_Stream6_CR_R_CHSEL_UART8_RX	((uint32_t)0x0A000000)
#define DMA1_Stream6_CR_R_CHSEL_TIM5_UP	((uint32_t)0x0C000000)
#define DMA1_Stream6_CR_R_CHSEL_DAC2	((uint32_t)0x0E000000)

#define DMA1_Stream6_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream6_CR_CHSEL_SPDIFRX_CS	((uint32_t)0x00000000)
#define DMA1_Stream6_CR_CHSEL_I2C1_TX	((uint32_t)0x00000001)
#define DMA1_Stream6_CR_CHSEL_TIM4_UP	((uint32_t)0x00000002)
#define DMA1_Stream6_CR_CHSEL_TIM2_CH2	((uint32_t)0x00000003)
#define DMA1_Stream6_CR_CHSEL_TIM2_CH4	((uint32_t)0x00000003)
#define DMA1_Stream6_CR_CHSEL_USART2_TX	((uint32_t)0x00000004)
#define DMA1_Stream6_CR_CHSEL_UART8_RX	((uint32_t)0x00000005)
#define DMA1_Stream6_CR_CHSEL_TIM5_UP	((uint32_t)0x00000006)
#define DMA1_Stream6_CR_CHSEL_DAC2		((uint32_t)0x00000007)
/*--------*/


/* TODO S6NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 42 S6NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream6_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA1_BASE+DMA_S6NDTR_OFFSET )))
#define DMA1_Stream6_NDTR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S6NDTR_OFFSET)))

/*--------*/
#define DMA1_Stream6_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA1_Stream6_NDTR_R_NDT_BIT     	(0)

#define DMA1_Stream6_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S6PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 43 S6PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream6_PAR            					(((DMA_SxPAR_TypeDef*)(DMA1_BASE+DMA_S6PAR_OFFSET )))
#define DMA1_Stream6_PAR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S6PAR_OFFSET)))

/*--------*/
#define DMA1_Stream6_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream6_PAR_R_PAR_BIT     	(0)

#define DMA1_Stream6_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S6M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 44 S6M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream6_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA1_BASE+DMA_S6M0AR_OFFSET )))
#define DMA1_Stream6_M0AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S6M0AR_OFFSET)))

/*--------*/
#define DMA1_Stream6_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream6_M0AR_R_M0A_BIT     	(0)

#define DMA1_Stream6_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S6M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 45 S6M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream6_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA1_BASE+DMA_S6M1AR_OFFSET )))
#define DMA1_Stream6_M1AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S6M1AR_OFFSET)))

/*--------*/
#define DMA1_Stream6_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream6_M1AR_R_M1A_BIT     	(0)

#define DMA1_Stream6_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S6FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 46 S6FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream6_FCR            					(((DMA_SxFCR_TypeDef*)(DMA1_BASE+DMA_S6FCR_OFFSET )))
#define DMA1_Stream6_FCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S6FCR_OFFSET)))

/*--------*/
#define DMA1_Stream6_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream6_FCR_R_FTH_BIT     	(0)
#define DMA1_Stream6_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream6_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream6_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream6_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA1_Stream6_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream6_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream6_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream6_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream6_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream6_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA1_Stream6_FCR_R_DMDIS_BIT    (2)
#define DMA1_Stream6_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA1_Stream6_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA1_Stream6_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA1_Stream6_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream6_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA1_Stream6_FCR_R_FS_BIT     	(3)
#define DMA1_Stream6_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream6_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA1_Stream6_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA1_Stream6_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA1_Stream6_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA1_Stream6_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA1_Stream6_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream6_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream6_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA1_Stream6_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA1_Stream6_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA1_Stream6_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA1_Stream6_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA1_Stream6_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA1_Stream6_FCR_R_FEIE_BIT    	(7)
#define DMA1_Stream6_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA1_Stream6_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA1_Stream6_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream6_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream6_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/



/* TODO S7CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 47 S7CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream7_CR            					(((DMA_SxCR_TypeDef*)(DMA1_BASE+DMA_S7CR_OFFSET )))
#define DMA1_Stream7_CR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S7CR_OFFSET)))

/*--------*/
#define DMA1_Stream7_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA1_Stream7_CR_R_EN_BIT    (0)
#define DMA1_Stream7_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA1_Stream7_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA1_Stream7_CR_R_DMEIE_BIT     (1)
#define DMA1_Stream7_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA1_Stream7_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA1_Stream7_CR_R_TEIE_BIT     	(2)
#define DMA1_Stream7_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA1_Stream7_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA1_Stream7_CR_R_HTIE_BIT     	(3)
#define DMA1_Stream7_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA1_Stream7_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA1_Stream7_CR_R_TCIE_BIT     	(4)
#define DMA1_Stream7_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA1_Stream7_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA1_Stream7_CR_R_PFCTRL_BIT    (5)
#define DMA1_Stream7_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA1_Stream7_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA1_Stream7_CR_R_DIR_BIT     	(6)
#define DMA1_Stream7_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA1_Stream7_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA1_Stream7_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream7_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA1_Stream7_CR_R_CIRC_BIT     	(8)
#define DMA1_Stream7_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA1_Stream7_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA1_Stream7_CR_R_PINC_BIT     	(9)
#define DMA1_Stream7_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA1_Stream7_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA1_Stream7_CR_R_MINC_BIT     	(10)
#define DMA1_Stream7_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA1_Stream7_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA1_Stream7_CR_R_PSIZE_BIT     (11)
#define DMA1_Stream7_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA1_Stream7_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA1_Stream7_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream7_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA1_Stream7_CR_R_MSIZE_BIT     (13)
#define DMA1_Stream7_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA1_Stream7_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA1_Stream7_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream7_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA1_Stream7_CR_R_PINCOS_BIT    (15)
#define DMA1_Stream7_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA1_Stream7_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA1_Stream7_CR_R_PL_BIT     	(16)
#define DMA1_Stream7_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA1_Stream7_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA1_Stream7_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA1_Stream7_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA1_Stream7_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA1_Stream7_CR_PL_MED			((uint32_t)0x00000001)
#define DMA1_Stream7_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA1_Stream7_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA1_Stream7_CR_R_DBM_BIT     	(18)
#define DMA1_Stream7_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA1_Stream7_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA1_Stream7_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA1_Stream7_CR_R_CT_BIT     	(19)
#define DMA1_Stream7_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA1_Stream7_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA1_Stream7_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA1_Stream7_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA1_Stream7_CR_R_PBURST_BIT    (21)
#define DMA1_Stream7_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA1_Stream7_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA1_Stream7_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA1_Stream7_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream7_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream7_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA1_Stream7_CR_R_MBURST_BIT    (23)
#define DMA1_Stream7_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA1_Stream7_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA1_Stream7_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA1_Stream7_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream7_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA1_Stream7_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream7_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA1_Stream7_CR_R_CHSEL_BIT     (23)
#define DMA1_Stream7_CR_R_CHSEL_SPI3_TX	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_R_CHSEL_I2C1_TX	((uint32_t)0x02000000)
#define DMA1_Stream7_CR_R_CHSEL_TIM4_CH3	((uint32_t)0x04000000)
#define DMA1_Stream7_CR_R_CHSEL_TIM2_UP	((uint32_t)0x06000000)
#define DMA1_Stream7_CR_R_CHSEL_TIM2_CH4	((uint32_t)0x06000000)
#define DMA1_Stream7_CR_R_CHSEL_UART5_TX	((uint32_t)0x08000000)
#define DMA1_Stream7_CR_R_CHSEL_TIM3_CH3	((uint32_t)0x0A000000)
#define DMA1_Stream7_CR_R_CHSEL_CH6		((uint32_t)0x0C000000)
#define DMA1_Stream7_CR_R_CHSEL_I2C2_TX	((uint32_t)0x0E000000)

#define DMA1_Stream7_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream7_CR_CHSEL_SPI3_TX	((uint32_t)0x00000000)
#define DMA1_Stream7_CR_CHSEL_I2C1_TX	((uint32_t)0x00000001)
#define DMA1_Stream7_CR_CHSEL_TIM4_CH3	((uint32_t)0x00000002)
#define DMA1_Stream7_CR_CHSEL_TIM2_UP	((uint32_t)0x00000003)
#define DMA1_Stream7_CR_CHSEL_TIM2_CH4	((uint32_t)0x00000003)
#define DMA1_Stream7_CR_CHSEL_UART5_TX	((uint32_t)0x00000004)
#define DMA1_Stream7_CR_CHSEL_TIM3_CH3	((uint32_t)0x00000005)
#define DMA1_Stream7_CR_CHSEL_CH6		((uint32_t)0x00000006)
#define DMA1_Stream7_CR_CHSEL_I2C2_TX	((uint32_t)0x00000007)
/*--------*/


/* TODO S7NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 48 S7NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream7_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA1_BASE+DMA_S7NDTR_OFFSET )))
#define DMA1_Stream7_NDTR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S7NDTR_OFFSET)))

/*--------*/
#define DMA1_Stream7_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA1_Stream7_NDTR_R_NDT_BIT     	(0)

#define DMA1_Stream7_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S7PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 49 S7PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream7_PAR            					(((DMA_SxPAR_TypeDef*)(DMA1_BASE+DMA_S7PAR_OFFSET )))
#define DMA1_Stream7_PAR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S7PAR_OFFSET)))

/*--------*/
#define DMA1_Stream7_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream7_PAR_R_PAR_BIT     	(0)

#define DMA1_Stream7_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S7M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 50 S7M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream7_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA1_BASE+DMA_S7M0AR_OFFSET )))
#define DMA1_Stream7_M0AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S7M0AR_OFFSET)))

/*--------*/
#define DMA1_Stream7_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream7_M0AR_R_M0A_BIT     	(0)

#define DMA1_Stream7_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S7M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 51 S7M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream7_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA1_BASE+DMA_S7M1AR_OFFSET )))
#define DMA1_Stream7_M1AR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S7M1AR_OFFSET)))

/*--------*/
#define DMA1_Stream7_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA1_Stream7_M1AR_R_M1A_BIT     	(0)

#define DMA1_Stream7_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S7FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 52 S7FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA1_Stream7_FCR            					(((DMA_SxFCR_TypeDef*)(DMA1_BASE+DMA_S7FCR_OFFSET )))
#define DMA1_Stream7_FCR_R          					(*((__IO uint32_t *)(DMA1_BASE+DMA_S7FCR_OFFSET)))

/*--------*/
#define DMA1_Stream7_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream7_FCR_R_FTH_BIT     	(0)
#define DMA1_Stream7_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream7_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream7_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream7_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA1_Stream7_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream7_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA1_Stream7_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA1_Stream7_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA1_Stream7_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA1_Stream7_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA1_Stream7_FCR_R_DMDIS_BIT    (2)
#define DMA1_Stream7_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA1_Stream7_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA1_Stream7_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA1_Stream7_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA1_Stream7_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA1_Stream7_FCR_R_FS_BIT     	(3)
#define DMA1_Stream7_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream7_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA1_Stream7_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA1_Stream7_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA1_Stream7_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA1_Stream7_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA1_Stream7_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA1_Stream7_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA1_Stream7_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA1_Stream7_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA1_Stream7_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA1_Stream7_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA1_Stream7_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA1_Stream7_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA1_Stream7_FCR_R_FEIE_BIT    	(7)
#define DMA1_Stream7_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA1_Stream7_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA1_Stream7_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA1_Stream7_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA1_Stream7_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/


































/* TODO LISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 LISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_LISR            					(((DMA_LISR_TypeDef*)(DMA2_BASE+DMA_LISR_OFFSET )))
#define DMA2_LISR_R          					(*((__I uint32_t *)(DMA2_BASE+DMA_LISR_OFFSET)))

/*--------*/
#define DMA2_LISR_R_FEIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_R_FEIF0_BIT     		(0)
#define DMA2_LISR_R_FEIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_FEIF0_OCCUR	   		((uint32_t)0x00000001)

#define DMA2_LISR_FEIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_FEIF0_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_FEIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_DMEIF0_MASK    		((uint32_t)0x00000004)
#define DMA2_LISR_R_DMEIF0_BIT     		(2)
#define DMA2_LISR_R_DMEIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_DMEIF0_OCCUR	   	((uint32_t)0x00000004)

#define DMA2_LISR_DMEIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_DMEIF0_NOOCCUR		((uint32_t)0x00000000)
#define DMA2_LISR_DMEIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_TEIF0_MASK    		((uint32_t)0x00000008)
#define DMA2_LISR_R_TEIF0_BIT     		(3)
#define DMA2_LISR_R_TEIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_TEIF0_OCCUR	   		((uint32_t)0x00000008)

#define DMA2_LISR_TEIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_TEIF0_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_TEIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_HTIF0_MASK    		((uint32_t)0x00000010)
#define DMA2_LISR_R_HTIF0_BIT     		(4)
#define DMA2_LISR_R_HTIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_HTIF0_OCCUR	   		((uint32_t)0x00000010)

#define DMA2_LISR_HTIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_HTIF0_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_HTIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_TCIF0_MASK    		((uint32_t)0x00000020)
#define DMA2_LISR_R_TCIF0_BIT     		(5)
#define DMA2_LISR_R_TCIF0_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_TCIF0_OCCUR	   		((uint32_t)0x00000020)

#define DMA2_LISR_TCIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_TCIF0_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_TCIF0_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_FEIF1_MASK    		((uint32_t)0x00000040)
#define DMA2_LISR_R_FEIF1_BIT     		(6)
#define DMA2_LISR_R_FEIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_FEIF1_OCCUR	   		((uint32_t)0x00000040)

#define DMA2_LISR_FEIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_FEIF1_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_FEIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_DMEIF1_MASK    		((uint32_t)0x00000100)
#define DMA2_LISR_R_DMEIF1_BIT     		(8)
#define DMA2_LISR_R_DMEIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_DMEIF1_OCCUR	   	((uint32_t)0x00000100)

#define DMA2_LISR_DMEIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_DMEIF1_NOOCCUR		((uint32_t)0x00000000)
#define DMA2_LISR_DMEIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_TEIF1_MASK    		((uint32_t)0x00000200)
#define DMA2_LISR_R_TEIF1_BIT     		(9)
#define DMA2_LISR_R_TEIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_TEIF1_OCCUR	   		((uint32_t)0x00000200)

#define DMA2_LISR_TEIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_TEIF1_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_TEIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_HTIF1_MASK    		((uint32_t)0x00000400)
#define DMA2_LISR_R_HTIF1_BIT     		(10)
#define DMA2_LISR_R_HTIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_HTIF1_OCCUR	   		((uint32_t)0x00000400)

#define DMA2_LISR_HTIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_HTIF1_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_HTIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_TCIF1_MASK    		((uint32_t)0x00000800)
#define DMA2_LISR_R_TCIF1_BIT     		(11)
#define DMA2_LISR_R_TCIF1_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_TCIF1_OCCUR	   		((uint32_t)0x00000800)

#define DMA2_LISR_TCIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_TCIF1_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_TCIF1_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_FEIF2_MASK    		((uint32_t)0x00010000)
#define DMA2_LISR_R_FEIF2_BIT     		(16)
#define DMA2_LISR_R_FEIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_FEIF2_OCCUR	   		((uint32_t)0x00010000)

#define DMA2_LISR_FEIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_FEIF2_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_FEIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_DMEIF2_MASK    		((uint32_t)0x00040000)
#define DMA2_LISR_R_DMEIF2_BIT     		(18)
#define DMA2_LISR_R_DMEIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_DMEIF2_OCCUR	   	((uint32_t)0x00040000)

#define DMA2_LISR_DMEIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_DMEIF2_NOOCCUR		((uint32_t)0x00000000)
#define DMA2_LISR_DMEIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_TEIF2_MASK    		((uint32_t)0x00080000)
#define DMA2_LISR_R_TEIF2_BIT     		(19)
#define DMA2_LISR_R_TEIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_TEIF2_OCCUR	   		((uint32_t)0x00080000)

#define DMA2_LISR_TEIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_TEIF2_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_TEIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_HTIF2_MASK    		((uint32_t)0x00100000)
#define DMA2_LISR_R_HTIF2_BIT     		(20)
#define DMA2_LISR_R_HTIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_HTIF2_OCCUR	   		((uint32_t)0x00100000)

#define DMA2_LISR_HTIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_HTIF2_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_HTIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_TCIF2_MASK    		((uint32_t)0x00200000)
#define DMA2_LISR_R_TCIF2_BIT     		(21)
#define DMA2_LISR_R_TCIF2_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_TCIF2_OCCUR	   		((uint32_t)0x00200000)

#define DMA2_LISR_TCIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_TCIF2_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_TCIF2_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_FEIF3_MASK    		((uint32_t)0x00400000)
#define DMA2_LISR_R_FEIF3_BIT     		(22)
#define DMA2_LISR_R_FEIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_FEIF3_OCCUR	   		((uint32_t)0x00400000)

#define DMA2_LISR_FEIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_FEIF3_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_FEIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_DMEIF3_MASK    		((uint32_t)0x01000000)
#define DMA2_LISR_R_DMEIF3_BIT     		(24)
#define DMA2_LISR_R_DMEIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_DMEIF3_OCCUR	   	((uint32_t)0x01000000)

#define DMA2_LISR_DMEIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_DMEIF3_NOOCCUR		((uint32_t)0x00000000)
#define DMA2_LISR_DMEIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_TEIF3_MASK    		((uint32_t)0x02000000)
#define DMA2_LISR_R_TEIF3_BIT     		(25)
#define DMA2_LISR_R_TEIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_TEIF3_OCCUR	   		((uint32_t)0x02000000)

#define DMA2_LISR_TEIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_TEIF3_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_TEIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_HTIF3_MASK    		((uint32_t)0x04000000)
#define DMA2_LISR_R_HTIF3_BIT     		(26)
#define DMA2_LISR_R_HTIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_HTIF3_OCCUR	   		((uint32_t)0x04000000)

#define DMA2_LISR_HTIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_HTIF3_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_HTIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LISR_R_TCIF3_MASK    		((uint32_t)0x08000000)
#define DMA2_LISR_R_TCIF3_BIT     		(27)
#define DMA2_LISR_R_TCIF3_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_LISR_R_TCIF3_OCCUR	   		((uint32_t)0x08000000)

#define DMA2_LISR_TCIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LISR_TCIF3_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_LISR_TCIF3_OCCUR	   		((uint32_t)0x00000001)
/*--------*/


/* TODO HISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 HISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_HISR            					(((DMA_HISR_TypeDef*)(DMA2_BASE+DMA_HISR_OFFSET )))
#define DMA2_HISR_R          					(*((__I uint32_t *)(DMA2_BASE+DMA_HISR_OFFSET)))

/*--------*/
#define DMA2_HISR_R_FEIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_R_FEIF4_BIT     		(0)
#define DMA2_HISR_R_FEIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_FEIF4_OCCUR	   		((uint32_t)0x00000001)

#define DMA2_HISR_FEIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_FEIF4_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_FEIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_DMEIF4_MASK    		((uint32_t)0x00000004)
#define DMA2_HISR_R_DMEIF4_BIT     		(2)
#define DMA2_HISR_R_DMEIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_DMEIF4_OCCUR	   	((uint32_t)0x00000004)

#define DMA2_HISR_DMEIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_DMEIF4_NOOCCUR		((uint32_t)0x00000000)
#define DMA2_HISR_DMEIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_TEIF4_MASK    		((uint32_t)0x00000008)
#define DMA2_HISR_R_TEIF4_BIT     		(3)
#define DMA2_HISR_R_TEIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_TEIF4_OCCUR	   		((uint32_t)0x00000008)

#define DMA2_HISR_TEIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_TEIF4_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_TEIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_HTIF4_MASK    		((uint32_t)0x00000010)
#define DMA2_HISR_R_HTIF4_BIT     		(4)
#define DMA2_HISR_R_HTIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_HTIF4_OCCUR	   		((uint32_t)0x00000010)

#define DMA2_HISR_HTIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_HTIF4_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_HTIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_TCIF4_MASK    		((uint32_t)0x00000020)
#define DMA2_HISR_R_TCIF4_BIT     		(5)
#define DMA2_HISR_R_TCIF4_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_TCIF4_OCCUR	   		((uint32_t)0x00000020)

#define DMA2_HISR_TCIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_TCIF4_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_TCIF4_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_FEIF5_MASK    		((uint32_t)0x00000040)
#define DMA2_HISR_R_FEIF5_BIT     		(6)
#define DMA2_HISR_R_FEIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_FEIF5_OCCUR	   		((uint32_t)0x00000040)

#define DMA2_HISR_FEIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_FEIF5_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_FEIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_DMEIF5_MASK    		((uint32_t)0x00000100)
#define DMA2_HISR_R_DMEIF5_BIT     		(8)
#define DMA2_HISR_R_DMEIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_DMEIF5_OCCUR	   	((uint32_t)0x00000100)

#define DMA2_HISR_DMEIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_DMEIF5_NOOCCUR		((uint32_t)0x00000000)
#define DMA2_HISR_DMEIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_TEIF5_MASK    		((uint32_t)0x00000200)
#define DMA2_HISR_R_TEIF5_BIT     		(9)
#define DMA2_HISR_R_TEIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_TEIF5_OCCUR	   		((uint32_t)0x00000200)

#define DMA2_HISR_TEIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_TEIF5_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_TEIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_HTIF5_MASK    		((uint32_t)0x00000400)
#define DMA2_HISR_R_HTIF5_BIT     		(10)
#define DMA2_HISR_R_HTIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_HTIF5_OCCUR	   		((uint32_t)0x00000400)

#define DMA2_HISR_HTIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_HTIF5_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_HTIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_TCIF5_MASK    		((uint32_t)0x00000800)
#define DMA2_HISR_R_TCIF5_BIT     		(11)
#define DMA2_HISR_R_TCIF5_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_TCIF5_OCCUR	   		((uint32_t)0x00000800)

#define DMA2_HISR_TCIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_TCIF5_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_TCIF5_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_FEIF6_MASK    		((uint32_t)0x00010000)
#define DMA2_HISR_R_FEIF6_BIT     		(16)
#define DMA2_HISR_R_FEIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_FEIF6_OCCUR	   		((uint32_t)0x00010000)

#define DMA2_HISR_FEIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_FEIF6_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_FEIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_DMEIF6_MASK    		((uint32_t)0x00040000)
#define DMA2_HISR_R_DMEIF6_BIT     		(18)
#define DMA2_HISR_R_DMEIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_DMEIF6_OCCUR	   	((uint32_t)0x00040000)

#define DMA2_HISR_DMEIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_DMEIF6_NOOCCUR		((uint32_t)0x00000000)
#define DMA2_HISR_DMEIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_TEIF6_MASK    		((uint32_t)0x00080000)
#define DMA2_HISR_R_TEIF6_BIT     		(19)
#define DMA2_HISR_R_TEIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_TEIF6_OCCUR	   		((uint32_t)0x00080000)

#define DMA2_HISR_TEIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_TEIF6_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_TEIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_HTIF6_MASK    		((uint32_t)0x00100000)
#define DMA2_HISR_R_HTIF6_BIT     		(20)
#define DMA2_HISR_R_HTIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_HTIF6_OCCUR	   		((uint32_t)0x00100000)

#define DMA2_HISR_HTIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_HTIF6_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_HTIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_TCIF6_MASK    		((uint32_t)0x00200000)
#define DMA2_HISR_R_TCIF6_BIT     		(21)
#define DMA2_HISR_R_TCIF6_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_TCIF6_OCCUR	   		((uint32_t)0x00200000)

#define DMA2_HISR_TCIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_TCIF6_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_TCIF6_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_FEIF7_MASK    		((uint32_t)0x00400000)
#define DMA2_HISR_R_FEIF7_BIT     		(22)
#define DMA2_HISR_R_FEIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_FEIF7_OCCUR	   		((uint32_t)0x00400000)

#define DMA2_HISR_FEIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_FEIF7_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_FEIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_DMEIF7_MASK    		((uint32_t)0x01000000)
#define DMA2_HISR_R_DMEIF7_BIT     		(24)
#define DMA2_HISR_R_DMEIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_DMEIF7_OCCUR	   	((uint32_t)0x01000000)

#define DMA2_HISR_DMEIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_DMEIF7_NOOCCUR		((uint32_t)0x00000000)
#define DMA2_HISR_DMEIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_TEIF7_MASK    		((uint32_t)0x02000000)
#define DMA2_HISR_R_TEIF7_BIT     		(25)
#define DMA2_HISR_R_TEIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_TEIF7_OCCUR	   		((uint32_t)0x02000000)

#define DMA2_HISR_TEIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_TEIF7_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_TEIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_HTIF7_MASK    		((uint32_t)0x04000000)
#define DMA2_HISR_R_HTIF7_BIT     		(26)
#define DMA2_HISR_R_HTIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_HTIF7_OCCUR	   		((uint32_t)0x04000000)

#define DMA2_HISR_HTIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_HTIF7_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_HTIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HISR_R_TCIF7_MASK    		((uint32_t)0x08000000)
#define DMA2_HISR_R_TCIF7_BIT     		(27)
#define DMA2_HISR_R_TCIF7_NOOCCUR    	((uint32_t)0x00000000)
#define DMA2_HISR_R_TCIF7_OCCUR	   		((uint32_t)0x08000000)

#define DMA2_HISR_TCIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HISR_TCIF7_NOOCCUR			((uint32_t)0x00000000)
#define DMA2_HISR_TCIF7_OCCUR	   		((uint32_t)0x00000001)
/*--------*/

/* TODO LIFCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 LIFCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_LIFCR            					(((DMA_LIFCR_TypeDef*)(DMA2_BASE+DMA_LIFCR_OFFSET )))
#define DMA2_LIFCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_LIFCR_OFFSET)))

/*--------*/
#define DMA2_LIFCR_R_CFEIF0_MASK    	((uint32_t)0x00000001)
#define DMA2_LIFCR_R_CFEIF0_BIT     	(0)
#define DMA2_LIFCR_R_CFEIF0_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CFEIF0_CLEAR	   	((uint32_t)0x00000001)

#define DMA2_LIFCR_CFEIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CFEIF0_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CFEIF0_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CDMEIF0_MASK    	((uint32_t)0x00000004)
#define DMA2_LIFCR_R_CDMEIF0_BIT     	(2)
#define DMA2_LIFCR_R_CDMEIF0_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CDMEIF0_CLEAR	   	((uint32_t)0x00000004)

#define DMA2_LIFCR_CDMEIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CDMEIF0_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CDMEIF0_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CTEIF0_MASK    	((uint32_t)0x00000008)
#define DMA2_LIFCR_R_CTEIF0_BIT     	(3)
#define DMA2_LIFCR_R_CTEIF0_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CTEIF0_CLEAR	   	((uint32_t)0x00000008)

#define DMA2_LIFCR_CTEIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CTEIF0_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CTEIF0_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CHTIF0_MASK    	((uint32_t)0x00000010)
#define DMA2_LIFCR_R_CHTIF0_BIT     	(4)
#define DMA2_LIFCR_R_CHTIF0_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CHTIF0_CLEAR	   	((uint32_t)0x00000010)

#define DMA2_LIFCR_CHTIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CHTIF0_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CHTIF0_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CTCIF0_MASK    	((uint32_t)0x00000020)
#define DMA2_LIFCR_R_CTCIF0_BIT     	(5)
#define DMA2_LIFCR_R_CTCIF0_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CTCIF0_CLEAR	   	((uint32_t)0x00000020)

#define DMA2_LIFCR_CTCIF0_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CTCIF0_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CTCIF0_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CFEIF1_MASK    	((uint32_t)0x00000040)
#define DMA2_LIFCR_R_CFEIF1_BIT     	(6)
#define DMA2_LIFCR_R_CFEIF1_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CFEIF1_CLEAR	   	((uint32_t)0x00000040)

#define DMA2_LIFCR_CFEIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CFEIF1_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CFEIF1_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CDMEIF1_MASK    	((uint32_t)0x00000100)
#define DMA2_LIFCR_R_CDMEIF1_BIT     	(8)
#define DMA2_LIFCR_R_CDMEIF1_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CDMEIF1_CLEAR	   	((uint32_t)0x00000100)

#define DMA2_LIFCR_CDMEIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CDMEIF1_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CDMEIF1_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CTEIF1_MASK    	((uint32_t)0x00000200)
#define DMA2_LIFCR_R_CTEIF1_BIT     	(9)
#define DMA2_LIFCR_R_CTEIF1_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CTEIF1_CLEAR	   	((uint32_t)0x00000200)

#define DMA2_LIFCR_CTEIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CTEIF1_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CTEIF1_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CHTIF1_MASK    	((uint32_t)0x00000400)
#define DMA2_LIFCR_R_CHTIF1_BIT     	(10)
#define DMA2_LIFCR_R_CHTIF1_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CHTIF1_CLEAR	   	((uint32_t)0x00000400)

#define DMA2_LIFCR_CHTIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CHTIF1_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CHTIF1_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CTCIF1_MASK    	((uint32_t)0x00000800)
#define DMA2_LIFCR_R_CTCIF1_BIT     	(11)
#define DMA2_LIFCR_R_CTCIF1_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CTCIF1_CLEAR	   	((uint32_t)0x00000800)

#define DMA2_LIFCR_CTCIF1_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CTCIF1_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CTCIF1_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CFEIF2_MASK    	((uint32_t)0x00010000)
#define DMA2_LIFCR_R_CFEIF2_BIT     	(16)
#define DMA2_LIFCR_R_CFEIF2_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CFEIF2_CLEAR	   	((uint32_t)0x00010000)

#define DMA2_LIFCR_CFEIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CFEIF2_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CFEIF2_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CDMEIF2_MASK    	((uint32_t)0x00040000)
#define DMA2_LIFCR_R_CDMEIF2_BIT     	(18)
#define DMA2_LIFCR_R_CDMEIF2_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CDMEIF2_CLEAR	   	((uint32_t)0x00040000)

#define DMA2_LIFCR_CDMEIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CDMEIF2_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CDMEIF2_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CTEIF2_MASK    	((uint32_t)0x00080000)
#define DMA2_LIFCR_R_CTEIF2_BIT     	(19)
#define DMA2_LIFCR_R_CTEIF2_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CTEIF2_CLEAR	   	((uint32_t)0x00080000)

#define DMA2_LIFCR_CTEIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CTEIF2_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CTEIF2_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CHTIF2_MASK    	((uint32_t)0x00100000)
#define DMA2_LIFCR_R_CHTIF2_BIT     	(20)
#define DMA2_LIFCR_R_CHTIF2_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CHTIF2_CLEAR	   	((uint32_t)0x00100000)

#define DMA2_LIFCR_CHTIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CHTIF2_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CHTIF2_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CTCIF2_MASK    	((uint32_t)0x00200000)
#define DMA2_LIFCR_R_CTCIF2_BIT     	(21)
#define DMA2_LIFCR_R_CTCIF2_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CTCIF2_CLEAR	   	((uint32_t)0x00200000)

#define DMA2_LIFCR_CTCIF2_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CTCIF2_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CTCIF2_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CFEIF3_MASK    	((uint32_t)0x00400000)
#define DMA2_LIFCR_R_CFEIF3_BIT     	(22)
#define DMA2_LIFCR_R_CFEIF3_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CFEIF3_CLEAR	   	((uint32_t)0x00400000)

#define DMA2_LIFCR_CFEIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CFEIF3_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CFEIF3_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CDMEIF3_MASK    	((uint32_t)0x01000000)
#define DMA2_LIFCR_R_CDMEIF3_BIT     	(24)
#define DMA2_LIFCR_R_CDMEIF3_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CDMEIF3_CLEAR	   	((uint32_t)0x01000000)

#define DMA2_LIFCR_CDMEIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CDMEIF3_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CDMEIF3_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CTEIF3_MASK    	((uint32_t)0x02000000)
#define DMA2_LIFCR_R_CTEIF3_BIT     	(25)
#define DMA2_LIFCR_R_CTEIF3_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CTEIF3_CLEAR	   	((uint32_t)0x02000000)

#define DMA2_LIFCR_CTEIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CTEIF3_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CTEIF3_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CHTIF3_MASK    	((uint32_t)0x04000000)
#define DMA2_LIFCR_R_CHTIF3_BIT     	(26)
#define DMA2_LIFCR_R_CHTIF3_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CHTIF3_CLEAR	   	((uint32_t)0x04000000)

#define DMA2_LIFCR_CHTIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_CHTIF3_NA			((uint32_t)0x00000000)
#define DMA2_LIFCR_CHTIF3_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_LIFCR_R_CTCIF3_MASK    	((uint32_t)0x08000000)
#define DMA2_LIFCR_R_CTCIF3_BIT     	(27)
#define DMA2_LIFCR_R_CTCIF3_NA    		((uint32_t)0x00000000)
#define DMA2_LIFCR_R_CTCIF3_CLEAR	   	((uint32_t)0x08000000)

#define DMA2_LIFCR_TCIF3_MASK    		((uint32_t)0x00000001)
#define DMA2_LIFCR_TCIF3_NA				((uint32_t)0x00000000)
#define DMA2_LIFCR_TCIF3_CLEAR	   		((uint32_t)0x00000001)
/*--------*/


/* TODO HIFCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 HIFCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_HIFCR            					(((DMA_HIFCR_TypeDef*)(DMA2_BASE+DMA_HIFCR_OFFSET )))
#define DMA2_HIFCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_HIFCR_OFFSET)))

/*--------*/
#define DMA2_HIFCR_R_CFEIF4_MASK    	((uint32_t)0x00000001)
#define DMA2_HIFCR_R_CFEIF4_BIT     	(0)
#define DMA2_HIFCR_R_CFEIF4_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CFEIF4_CLEAR	   	((uint32_t)0x00000001)

#define DMA2_HIFCR_CFEIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CFEIF4_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CFEIF4_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CDMEIF4_MASK    	((uint32_t)0x00000004)
#define DMA2_HIFCR_R_CDMEIF4_BIT     	(2)
#define DMA2_HIFCR_R_CDMEIF4_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CDMEIF4_CLEAR	   	((uint32_t)0x00000004)

#define DMA2_HIFCR_CDMEIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CDMEIF4_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CDMEIF4_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CTEIF4_MASK    	((uint32_t)0x00000008)
#define DMA2_HIFCR_R_CTEIF4_BIT     	(3)
#define DMA2_HIFCR_R_CTEIF4_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CTEIF4_CLEAR	   	((uint32_t)0x00000008)

#define DMA2_HIFCR_CTEIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CTEIF4_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CTEIF4_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CHTIF4_MASK    	((uint32_t)0x00000010)
#define DMA2_HIFCR_R_CHTIF4_BIT     	(4)
#define DMA2_HIFCR_R_CHTIF4_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CHTIF4_CLEAR	   	((uint32_t)0x00000010)

#define DMA2_HIFCR_CHTIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CHTIF4_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CHTIF4_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CTCIF4_MASK    	((uint32_t)0x00000020)
#define DMA2_HIFCR_R_CTCIF4_BIT     	(5)
#define DMA2_HIFCR_R_CTCIF4_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CTCIF4_CLEAR	   	((uint32_t)0x00000020)

#define DMA2_HIFCR_CTCIF4_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CTCIF4_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CTCIF4_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CFEIF5_MASK    	((uint32_t)0x00000040)
#define DMA2_HIFCR_R_CFEIF5_BIT     	(6)
#define DMA2_HIFCR_R_CFEIF5_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CFEIF5_CLEAR	   	((uint32_t)0x00000040)

#define DMA2_HIFCR_CFEIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CFEIF5_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CFEIF5_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CDMEIF5_MASK    	((uint32_t)0x00000100)
#define DMA2_HIFCR_R_CDMEIF5_BIT     	(8)
#define DMA2_HIFCR_R_CDMEIF5_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CDMEIF5_CLEAR	   	((uint32_t)0x00000100)

#define DMA2_HIFCR_CDMEIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CDMEIF5_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CDMEIF5_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CTEIF5_MASK    	((uint32_t)0x00000200)
#define DMA2_HIFCR_R_CTEIF5_BIT     	(9)
#define DMA2_HIFCR_R_CTEIF5_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CTEIF5_CLEAR	   	((uint32_t)0x00000200)

#define DMA2_HIFCR_CTEIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CTEIF5_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CTEIF5_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CHTIF5_MASK    	((uint32_t)0x00000400)
#define DMA2_HIFCR_R_CHTIF5_BIT     	(10)
#define DMA2_HIFCR_R_CHTIF5_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CHTIF5_CLEAR	   	((uint32_t)0x00000400)

#define DMA2_HIFCR_CHTIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CHTIF5_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CHTIF5_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CTCIF5_MASK    	((uint32_t)0x00000800)
#define DMA2_HIFCR_R_CTCIF5_BIT     	(11)
#define DMA2_HIFCR_R_CTCIF5_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CTCIF5_CLEAR	   	((uint32_t)0x00000800)

#define DMA2_HIFCR_CTCIF5_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CTCIF5_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CTCIF5_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CFEIF6_MASK    	((uint32_t)0x00010000)
#define DMA2_HIFCR_R_CFEIF6_BIT     	(16)
#define DMA2_HIFCR_R_CFEIF6_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CFEIF6_CLEAR	   	((uint32_t)0x00010000)

#define DMA2_HIFCR_CFEIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CFEIF6_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CFEIF6_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CDMEIF6_MASK    	((uint32_t)0x00040000)
#define DMA2_HIFCR_R_CDMEIF6_BIT     	(18)
#define DMA2_HIFCR_R_CDMEIF6_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CDMEIF6_CLEAR	   	((uint32_t)0x00040000)

#define DMA2_HIFCR_CDMEIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CDMEIF6_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CDMEIF6_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CTEIF6_MASK    	((uint32_t)0x00080000)
#define DMA2_HIFCR_R_CTEIF6_BIT     	(19)
#define DMA2_HIFCR_R_CTEIF6_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CTEIF6_CLEAR	   	((uint32_t)0x00080000)

#define DMA2_HIFCR_CTEIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CTEIF6_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CTEIF6_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CHTIF6_MASK    	((uint32_t)0x00100000)
#define DMA2_HIFCR_R_CHTIF6_BIT     	(20)
#define DMA2_HIFCR_R_CHTIF6_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CHTIF6_CLEAR	   	((uint32_t)0x00100000)

#define DMA2_HIFCR_CHTIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CHTIF6_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CHTIF6_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CTCIF6_MASK    	((uint32_t)0x00200000)
#define DMA2_HIFCR_R_CTCIF6_BIT     	(21)
#define DMA2_HIFCR_R_CTCIF6_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CTCIF6_CLEAR	   	((uint32_t)0x00200000)

#define DMA2_HIFCR_CTCIF6_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CTCIF6_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CTCIF6_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CFEIF7_MASK    	((uint32_t)0x00400000)
#define DMA2_HIFCR_R_CFEIF7_BIT     	(22)
#define DMA2_HIFCR_R_CFEIF7_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CFEIF7_CLEAR	   	((uint32_t)0x00400000)

#define DMA2_HIFCR_CFEIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CFEIF7_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CFEIF7_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CDMEIF7_MASK    	((uint32_t)0x01000000)
#define DMA2_HIFCR_R_CDMEIF7_BIT     	(24)
#define DMA2_HIFCR_R_CDMEIF7_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CDMEIF7_CLEAR	   	((uint32_t)0x01000000)

#define DMA2_HIFCR_CDMEIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CDMEIF7_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CDMEIF7_CLEAR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CTEIF7_MASK    	((uint32_t)0x02000000)
#define DMA2_HIFCR_R_CTEIF7_BIT     	(25)
#define DMA2_HIFCR_R_CTEIF7_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CTEIF7_CLEAR	   	((uint32_t)0x02000000)

#define DMA2_HIFCR_CTEIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CTEIF7_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CTEIF7_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CHTIF7_MASK    	((uint32_t)0x04000000)
#define DMA2_HIFCR_R_CHTIF7_BIT     	(26)
#define DMA2_HIFCR_R_CHTIF7_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CHTIF7_CLEAR	   	((uint32_t)0x04000000)

#define DMA2_HIFCR_CHTIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_CHTIF7_NA			((uint32_t)0x00000000)
#define DMA2_HIFCR_CHTIF7_CLEAR	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_HIFCR_R_CTCIF7_MASK    	((uint32_t)0x08000000)
#define DMA2_HIFCR_R_CTCIF7_BIT     	(27)
#define DMA2_HIFCR_R_CTCIF7_NA    		((uint32_t)0x00000000)
#define DMA2_HIFCR_R_CTCIF7_CLEAR	   	((uint32_t)0x08000000)

#define DMA2_HIFCR_TCIF7_MASK    		((uint32_t)0x00000001)
#define DMA2_HIFCR_TCIF7_NA				((uint32_t)0x00000000)
#define DMA2_HIFCR_TCIF7_CLEAR	   		((uint32_t)0x00000001)
/*--------*/


/* TODO S0CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 S0CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream0_CR            					(((DMA_SxCR_TypeDef*)(DMA2_BASE+DMA_S0CR_OFFSET )))
#define DMA2_Stream0_CR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S0CR_OFFSET)))

/*--------*/
#define DMA2_Stream0_CR_R_EN_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_R_EN_BIT     	(0)
#define DMA2_Stream0_CR_R_EN_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_EN_EN			((uint32_t)0x00000001)

#define DMA2_Stream0_CR_EN_MASK    		((uint32_t)0x00000001)
#define DMA2_Stream0_CR_EN_DIS			((uint32_t)0x00000000)
#define DMA2_Stream0_CR_EN_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA2_Stream0_CR_R_DMEIE_BIT     (1)
#define DMA2_Stream0_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA2_Stream0_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA2_Stream0_CR_R_TEIE_BIT     	(2)
#define DMA2_Stream0_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA2_Stream0_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA2_Stream0_CR_R_HTIE_BIT     	(3)
#define DMA2_Stream0_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA2_Stream0_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA2_Stream0_CR_R_TCIE_BIT     	(4)
#define DMA2_Stream0_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA2_Stream0_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA2_Stream0_CR_R_PFCTRL_BIT    (5)
#define DMA2_Stream0_CR_R_PFCTRL_DMA	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA2_Stream0_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_DIR_MASK    		((uint32_t)0x000000C0)
#define DMA2_Stream0_CR_R_DIR_BIT     		(6)
#define DMA2_Stream0_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA2_Stream0_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA2_Stream0_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream0_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA2_Stream0_CR_R_CIRC_BIT     	(8)
#define DMA2_Stream0_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA2_Stream0_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA2_Stream0_CR_R_PINC_BIT     	(9)
#define DMA2_Stream0_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA2_Stream0_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA2_Stream0_CR_R_MINC_BIT     	(10)
#define DMA2_Stream0_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA2_Stream0_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA2_Stream0_CR_R_PSIZE_BIT     (11)
#define DMA2_Stream0_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA2_Stream0_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA2_Stream0_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream0_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA2_Stream0_CR_R_MSIZE_BIT     (13)
#define DMA2_Stream0_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA2_Stream0_CR_R_MSIZE_WORD	((uint32_t)0x00004000)

#define DMA2_Stream0_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream0_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_PINCOS_MASK  	((uint32_t)0x00008000)
#define DMA2_Stream0_CR_R_PINCOS_BIT   	(15)
#define DMA2_Stream0_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA2_Stream0_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA2_Stream0_CR_R_PL_BIT     	(16)
#define DMA2_Stream0_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA2_Stream0_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA2_Stream0_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA2_Stream0_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA2_Stream0_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA2_Stream0_CR_PL_MED			((uint32_t)0x00000001)
#define DMA2_Stream0_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA2_Stream0_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA2_Stream0_CR_R_DBM_BIT     	(18)
#define DMA2_Stream0_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA2_Stream0_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA2_Stream0_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA2_Stream0_CR_R_CT_BIT     	(19)
#define DMA2_Stream0_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA2_Stream0_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA2_Stream0_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA2_Stream0_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA2_Stream0_CR_R_PBURST_BIT    (21)
#define DMA2_Stream0_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA2_Stream0_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA2_Stream0_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA2_Stream0_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream0_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream0_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA2_Stream0_CR_R_MBURST_BIT    (23)
#define DMA2_Stream0_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA2_Stream0_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA2_Stream0_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA2_Stream0_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream0_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream0_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream0_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream0_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA2_Stream0_CR_R_CHSEL_BIT     (23)
#define DMA2_Stream0_CR_R_CHSEL_ADC1	((uint32_t)0x00000000)
#define DMA2_Stream0_CR_R_CHSEL_CH1		((uint32_t)0x02000000)
#define DMA2_Stream0_CR_R_CHSEL_ADC3	((uint32_t)0x04000000)
#define DMA2_Stream0_CR_R_CHSEL_SPI1_RX	((uint32_t)0x06000000)
#define DMA2_Stream0_CR_R_CHSEL_SPI4_RX	((uint32_t)0x08000000)
#define DMA2_Stream0_CR_R_CHSEL_CH5		((uint32_t)0x0A000000)
#define DMA2_Stream0_CR_R_CHSEL_TIM1_TRIG	((uint32_t)0x0C000000)
#define DMA2_Stream0_CR_R_CHSEL_CH7		((uint32_t)0x0E000000)

#define DMA2_Stream0_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream0_CR_CHSEL_ADC1		((uint32_t)0x00000000)
#define DMA2_Stream0_CR_CHSEL_CH1		((uint32_t)0x00000001)
#define DMA2_Stream0_CR_CHSEL_ADC3		((uint32_t)0x00000002)
#define DMA2_Stream0_CR_CHSEL_SPI1_RX	((uint32_t)0x00000003)
#define DMA2_Stream0_CR_CHSEL_SPI4_RX	((uint32_t)0x00000004)
#define DMA2_Stream0_CR_CHSEL_CH5		((uint32_t)0x00000005)
#define DMA2_Stream0_CR_CHSEL_TIM1_TRIG	((uint32_t)0x00000006)
#define DMA2_Stream0_CR_CHSEL_CH7		((uint32_t)0x00000007)
/*--------*/


/* TODO S0NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 S0NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream0_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA2_BASE+DMA_S0NDTR_OFFSET )))
#define DMA2_Stream0_NDTR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S0NDTR_OFFSET)))

/*--------*/
#define DMA2_Stream0_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA2_Stream0_NDTR_R_NDT_BIT     	(0)

#define DMA2_Stream0_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S0PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 S0PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream0_PAR            					(((DMA_SxPAR_TypeDef*)(DMA2_BASE+DMA_S0PAR_OFFSET )))
#define DMA2_Stream0_PAR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S0PAR_OFFSET)))

/*--------*/
#define DMA2_Stream0_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream0_PAR_R_PAR_BIT     	(0)

#define DMA2_Stream0_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S0M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 S0M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream0_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA2_BASE+DMA_S0M0AR_OFFSET )))
#define DMA2_Stream0_M0AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S0M0AR_OFFSET)))

/*--------*/
#define DMA2_Stream0_M0AR_R_M0A_MASK    ((uint32_t)0xFFFFFFFF)
#define DMA2_Stream0_M0AR_R_M0A_BIT     (0)

#define DMA2_Stream0_M0AR_M0A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S0M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 S0M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream0_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA2_BASE+DMA_S0M1AR_OFFSET )))
#define DMA2_Stream0_M1AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S0M1AR_OFFSET)))

/*--------*/
#define DMA2_Stream0_M1AR_R_M1A_MASK    ((uint32_t)0xFFFFFFFF)
#define DMA2_Stream0_M1AR_R_M1A_BIT     (0)

#define DMA2_Stream0_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S0FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 S0FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream0_FCR            					(((DMA_SxFCR_TypeDef*)(DMA2_BASE+DMA_S0FCR_OFFSET )))
#define DMA2_Stream0_FCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S0FCR_OFFSET)))

/*--------*/
#define DMA2_Stream0_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream0_FCR_R_FTH_BIT     	(0)
#define DMA2_Stream0_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream0_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream0_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream0_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA2_Stream0_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream0_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream0_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream0_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream0_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream0_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA2_Stream0_FCR_R_DMDIS_BIT    (2)
#define DMA2_Stream0_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA2_Stream0_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA2_Stream0_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA2_Stream0_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream0_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA2_Stream0_FCR_R_FS_BIT     	(3)
#define DMA2_Stream0_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream0_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA2_Stream0_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA2_Stream0_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA2_Stream0_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA2_Stream0_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA2_Stream0_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream0_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream0_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA2_Stream0_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA2_Stream0_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA2_Stream0_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA2_Stream0_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA2_Stream0_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA2_Stream0_FCR_R_FEIE_BIT    	(7)
#define DMA2_Stream0_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA2_Stream0_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA2_Stream0_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream0_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream0_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/


/* TODO S1CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 S1CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream1_CR            					(((DMA_SxCR_TypeDef*)(DMA2_BASE+DMA_S1CR_OFFSET )))
#define DMA2_Stream1_CR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S1CR_OFFSET)))

/*--------*/
#define DMA2_Stream1_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA2_Stream1_CR_R_EN_BIT    (0)
#define DMA2_Stream1_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA2_Stream1_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA2_Stream1_CR_R_DMEIE_BIT     (1)
#define DMA2_Stream1_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA2_Stream1_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA2_Stream1_CR_R_TEIE_BIT     	(2)
#define DMA2_Stream1_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA2_Stream1_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA2_Stream1_CR_R_HTIE_BIT     	(3)
#define DMA2_Stream1_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA2_Stream1_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA2_Stream1_CR_R_TCIE_BIT     	(4)
#define DMA2_Stream1_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA2_Stream1_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA2_Stream1_CR_R_PFCTRL_BIT    (5)
#define DMA2_Stream1_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA2_Stream1_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA2_Stream1_CR_R_DIR_BIT     	(6)
#define DMA2_Stream1_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA2_Stream1_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA2_Stream1_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream1_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA2_Stream1_CR_R_CIRC_BIT     	(8)
#define DMA2_Stream1_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA2_Stream1_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA2_Stream1_CR_R_PINC_BIT     	(9)
#define DMA2_Stream1_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA2_Stream1_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA2_Stream1_CR_R_MINC_BIT     	(10)
#define DMA2_Stream1_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA2_Stream1_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA2_Stream1_CR_R_PSIZE_BIT     (11)
#define DMA2_Stream1_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA2_Stream1_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA2_Stream1_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream1_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA2_Stream1_CR_R_MSIZE_BIT     (13)
#define DMA2_Stream1_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA2_Stream1_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA2_Stream1_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream1_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA2_Stream1_CR_R_PINCOS_BIT    (15)
#define DMA2_Stream1_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA2_Stream1_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA2_Stream1_CR_R_PL_BIT     	(16)
#define DMA2_Stream1_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA2_Stream1_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA2_Stream1_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA2_Stream1_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA2_Stream1_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA2_Stream1_CR_PL_MED			((uint32_t)0x00000001)
#define DMA2_Stream1_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA2_Stream1_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA2_Stream1_CR_R_DBM_BIT     	(18)
#define DMA2_Stream1_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA2_Stream1_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA2_Stream1_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA2_Stream1_CR_R_CT_BIT     	(19)
#define DMA2_Stream1_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA2_Stream1_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA2_Stream1_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA2_Stream1_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA2_Stream1_CR_R_PBURST_BIT    (21)
#define DMA2_Stream1_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA2_Stream1_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA2_Stream1_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA2_Stream1_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream1_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream1_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA2_Stream1_CR_R_MBURST_BIT    (23)
#define DMA2_Stream1_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA2_Stream1_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA2_Stream1_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA2_Stream1_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream1_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream1_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream1_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream1_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA2_Stream1_CR_R_CHSEL_BIT     (23)
#define DMA2_Stream1_CR_R_CHSEL_SAI1_A	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_R_CHSEL_DCMI	((uint32_t)0x02000000)
#define DMA2_Stream1_CR_R_CHSEL_ADC3	((uint32_t)0x04000000)
#define DMA2_Stream1_CR_R_CHSEL_CH3		((uint32_t)0x06000000)
#define DMA2_Stream1_CR_R_CHSEL_SPI4_TX	((uint32_t)0x08000000)
#define DMA2_Stream1_CR_R_CHSEL_USART6_RX	((uint32_t)0x0A000000)
#define DMA2_Stream1_CR_R_CHSEL_TIM1_CH1	((uint32_t)0x0C000000)
#define DMA2_Stream1_CR_R_CHSEL_TIM8_UP		((uint32_t)0x0E000000)

#define DMA2_Stream1_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream1_CR_CHSEL_SAI1_A	((uint32_t)0x00000000)
#define DMA2_Stream1_CR_CHSEL_DCMI		((uint32_t)0x00000001)
#define DMA2_Stream1_CR_CHSEL_ADC3		((uint32_t)0x00000002)
#define DMA2_Stream1_CR_CHSEL_CH3		((uint32_t)0x00000003)
#define DMA2_Stream1_CR_CHSEL_SPI4_TX	((uint32_t)0x00000004)
#define DMA2_Stream1_CR_CHSEL_USART6_RX	((uint32_t)0x00000005)
#define DMA2_Stream1_CR_CHSEL_TIM1_CH1	((uint32_t)0x00000006)
#define DMA2_Stream1_CR_CHSEL_TIM8_UP	((uint32_t)0x00000007)
/*--------*/


/* TODO S1NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 S1NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream1_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA2_BASE+DMA_S1NDTR_OFFSET )))
#define DMA2_Stream1_NDTR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S1NDTR_OFFSET)))

/*--------*/
#define DMA2_Stream1_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA2_Stream1_NDTR_R_NDT_BIT     	(0)

#define DMA2_Stream1_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S1PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 S1PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream1_PAR            					(((DMA_SxPAR_TypeDef*)(DMA2_BASE+DMA_S1PAR_OFFSET )))
#define DMA2_Stream1_PAR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S1PAR_OFFSET)))

/*--------*/
#define DMA2_Stream1_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream1_PAR_R_PAR_BIT     	(0)

#define DMA2_Stream1_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S1M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 S1M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream1_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA2_BASE+DMA_S1M0AR_OFFSET )))
#define DMA2_Stream1_M0AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S1M0AR_OFFSET)))

/*--------*/
#define DMA2_Stream1_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream1_M0AR_R_M0A_BIT     	(0)

#define DMA2_Stream1_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S1M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 S1M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream1_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA2_BASE+DMA_S1M1AR_OFFSET )))
#define DMA2_Stream1_M1AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S1M1AR_OFFSET)))

/*--------*/
#define DMA2_Stream1_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream1_M1AR_R_M1A_BIT     	(0)

#define DMA2_Stream1_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S1FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 S1FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream1_FCR            					(((DMA_SxFCR_TypeDef*)(DMA2_BASE+DMA_S1FCR_OFFSET )))
#define DMA2_Stream1_FCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S1FCR_OFFSET)))

/*--------*/
#define DMA2_Stream1_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream1_FCR_R_FTH_BIT     	(0)
#define DMA2_Stream1_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream1_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream1_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream1_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA2_Stream1_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream1_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream1_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream1_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream1_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream1_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA2_Stream1_FCR_R_DMDIS_BIT    (2)
#define DMA2_Stream1_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA2_Stream1_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA2_Stream1_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA2_Stream1_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream1_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA2_Stream1_FCR_R_FS_BIT     	(3)
#define DMA2_Stream1_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream1_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA2_Stream1_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA2_Stream1_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA2_Stream1_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA2_Stream1_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA2_Stream1_FCR_FS_MASK    	((uint32_t)0x00000007)
#define DMA2_Stream1_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream1_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA2_Stream1_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA2_Stream1_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA2_Stream1_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA2_Stream1_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA2_Stream1_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA2_Stream1_FCR_R_FEIE_BIT    	(7)
#define DMA2_Stream1_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA2_Stream1_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA2_Stream1_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream1_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream1_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/


/* TODO S2CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 S2CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream2_CR            					(((DMA_SxCR_TypeDef*)(DMA2_BASE+DMA_S2CR_OFFSET )))
#define DMA2_Stream2_CR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S2CR_OFFSET)))

/*--------*/
#define DMA2_Stream2_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA2_Stream2_CR_R_EN_BIT    (0)
#define DMA2_Stream2_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA2_Stream2_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA2_Stream2_CR_R_DMEIE_BIT     (1)
#define DMA2_Stream2_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA2_Stream2_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA2_Stream2_CR_R_TEIE_BIT     	(2)
#define DMA2_Stream2_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA2_Stream2_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA2_Stream2_CR_R_HTIE_BIT     	(3)
#define DMA2_Stream2_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA2_Stream2_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA2_Stream2_CR_R_TCIE_BIT     	(4)
#define DMA2_Stream2_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA2_Stream2_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA2_Stream2_CR_R_PFCTRL_BIT    (5)
#define DMA2_Stream2_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA2_Stream2_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA2_Stream2_CR_R_DIR_BIT     	(6)
#define DMA2_Stream2_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA2_Stream2_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA2_Stream2_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream2_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA2_Stream2_CR_R_CIRC_BIT     	(8)
#define DMA2_Stream2_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA2_Stream2_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA2_Stream2_CR_R_PINC_BIT     	(9)
#define DMA2_Stream2_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA2_Stream2_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA2_Stream2_CR_R_MINC_BIT     	(10)
#define DMA2_Stream2_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA2_Stream2_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA2_Stream2_CR_R_PSIZE_BIT     (11)
#define DMA2_Stream2_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA2_Stream2_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA2_Stream2_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream2_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA2_Stream2_CR_R_MSIZE_BIT     (13)
#define DMA2_Stream2_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA2_Stream2_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA2_Stream2_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream2_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA2_Stream2_CR_R_PINCOS_BIT    (15)
#define DMA2_Stream2_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA2_Stream2_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA2_Stream2_CR_R_PL_BIT     	(16)
#define DMA2_Stream2_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA2_Stream2_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA2_Stream2_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA2_Stream2_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA2_Stream2_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA2_Stream2_CR_PL_MED			((uint32_t)0x00000001)
#define DMA2_Stream2_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA2_Stream2_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA2_Stream2_CR_R_DBM_BIT     	(18)
#define DMA2_Stream2_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA2_Stream2_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA2_Stream2_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA2_Stream2_CR_R_CT_BIT     	(19)
#define DMA2_Stream2_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA2_Stream2_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA2_Stream2_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA2_Stream2_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA2_Stream2_CR_R_PBURST_BIT    (21)
#define DMA2_Stream2_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA2_Stream2_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA2_Stream2_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA2_Stream2_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream2_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream2_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA2_Stream2_CR_R_MBURST_BIT    (23)
#define DMA2_Stream2_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA2_Stream2_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA2_Stream2_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA2_Stream2_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream2_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream2_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream2_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream2_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA2_Stream2_CR_R_CHSEL_BIT     (23)
#define DMA2_Stream2_CR_R_CHSEL_TIM8_CH1	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_CHSEL_TIM8_CH2	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_CHSEL_TIM8_CH3	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_R_CHSEL_ADC2	((uint32_t)0x02000000)
#define DMA2_Stream2_CR_R_CHSEL_CH2		((uint32_t)0x04000000)
#define DMA2_Stream2_CR_R_CHSEL_SPI1_RX	((uint32_t)0x06000000)
#define DMA2_Stream2_CR_R_CHSEL_USART1_RX	((uint32_t)0x08000000)
#define DMA2_Stream2_CR_R_CHSEL_USART6_RX	((uint32_t)0x0A000000)
#define DMA2_Stream2_CR_R_CHSEL_TIM1_CH2	((uint32_t)0x0C000000)
#define DMA2_Stream2_CR_R_CHSEL_TIM8_CH1_1	((uint32_t)0x0E000000)

#define DMA2_Stream2_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream2_CR_CHSEL_TIM8_CH1	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_CHSEL_TIM8_CH2	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_CHSEL_TIM8_CH3	((uint32_t)0x00000000)
#define DMA2_Stream2_CR_CHSEL_ADC2		((uint32_t)0x00000001)
#define DMA2_Stream2_CR_CHSEL_CH2		((uint32_t)0x00000002)
#define DMA2_Stream2_CR_CHSEL_SPI1_RX	((uint32_t)0x00000003)
#define DMA2_Stream2_CR_CHSEL_USART1_RX	((uint32_t)0x00000004)
#define DMA2_Stream2_CR_CHSEL_USART6_RX	((uint32_t)0x00000005)
#define DMA2_Stream2_CR_CHSEL_TIM1_CH2	((uint32_t)0x00000006)
#define DMA2_Stream2_CR_CHSEL_TIM8_CH1_1	((uint32_t)0x00000007)
/*--------*/


/* TODO S2NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 S2NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream2_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA2_BASE+DMA_S2NDTR_OFFSET )))
#define DMA2_Stream2_NDTR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S2NDTR_OFFSET)))

/*--------*/
#define DMA2_Stream2_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA2_Stream2_NDTR_R_NDT_BIT     	(0)

#define DMA2_Stream2_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S2PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 S2PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream2_PAR            					(((DMA_SxPAR_TypeDef*)(DMA2_BASE+DMA_S2PAR_OFFSET )))
#define DMA2_Stream2_PAR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S2PAR_OFFSET)))

/*--------*/
#define DMA2_Stream2_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream2_PAR_R_PAR_BIT     	(0)

#define DMA2_Stream2_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S2M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 S2M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream2_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA2_BASE+DMA_S2M0AR_OFFSET )))
#define DMA2_Stream2_M0AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S2M0AR_OFFSET)))

/*--------*/
#define DMA2_Stream2_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream2_M0AR_R_M0A_BIT     	(0)

#define DMA2_Stream2_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S2M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 21 S2M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream2_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA2_BASE+DMA_S2M1AR_OFFSET )))
#define DMA2_Stream2_M1AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S2M1AR_OFFSET)))

/*--------*/
#define DMA2_Stream2_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream2_M1AR_R_M1A_BIT     	(0)

#define DMA2_Stream2_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S2FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 22 S2FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream2_FCR            					(((DMA_SxFCR_TypeDef*)(DMA2_BASE+DMA_S2FCR_OFFSET )))
#define DMA2_Stream2_FCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S2FCR_OFFSET)))

/*--------*/
#define DMA2_Stream2_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream2_FCR_R_FTH_BIT     	(0)
#define DMA2_Stream2_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream2_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream2_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream2_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA2_Stream2_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream2_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream2_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream2_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream2_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream2_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA2_Stream2_FCR_R_DMDIS_BIT    (2)
#define DMA2_Stream2_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA2_Stream2_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA2_Stream2_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA2_Stream2_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream2_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA2_Stream2_FCR_R_FS_BIT     	(3)
#define DMA2_Stream2_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream2_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA2_Stream2_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA2_Stream2_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA2_Stream2_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA2_Stream2_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA2_Stream2_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream2_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream2_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA2_Stream2_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA2_Stream2_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA2_Stream2_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA2_Stream2_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA2_Stream2_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA2_Stream2_FCR_R_FEIE_BIT    	(7)
#define DMA2_Stream2_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA2_Stream2_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA2_Stream2_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream2_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream2_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/



/* TODO S3CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 23 S3CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream3_CR            					(((DMA_SxCR_TypeDef*)(DMA2_BASE+DMA_S3CR_OFFSET )))
#define DMA2_Stream3_CR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S3CR_OFFSET)))

/*--------*/
#define DMA2_Stream3_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA2_Stream3_CR_R_EN_BIT    (0)
#define DMA2_Stream3_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA2_Stream3_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA2_Stream3_CR_R_DMEIE_BIT     (1)
#define DMA2_Stream3_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA2_Stream3_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA2_Stream3_CR_R_TEIE_BIT     	(2)
#define DMA2_Stream3_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA2_Stream3_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA2_Stream3_CR_R_HTIE_BIT     	(3)
#define DMA2_Stream3_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA2_Stream3_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA2_Stream3_CR_R_TCIE_BIT     	(4)
#define DMA2_Stream3_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA2_Stream3_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA2_Stream3_CR_R_PFCTRL_BIT    (5)
#define DMA2_Stream3_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA2_Stream3_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA2_Stream3_CR_R_DIR_BIT     	(6)
#define DMA2_Stream3_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA2_Stream3_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA2_Stream3_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream3_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA2_Stream3_CR_R_CIRC_BIT     	(8)
#define DMA2_Stream3_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA2_Stream3_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA2_Stream3_CR_R_PINC_BIT     	(9)
#define DMA2_Stream3_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA2_Stream3_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA2_Stream3_CR_R_MINC_BIT     	(10)
#define DMA2_Stream3_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA2_Stream3_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA2_Stream3_CR_R_PSIZE_BIT     (11)
#define DMA2_Stream3_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA2_Stream3_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA2_Stream3_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream3_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA2_Stream3_CR_R_MSIZE_BIT     (13)
#define DMA2_Stream3_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA2_Stream3_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA2_Stream3_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream3_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA2_Stream3_CR_R_PINCOS_BIT    (15)
#define DMA2_Stream3_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA2_Stream3_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA2_Stream3_CR_R_PL_BIT     	(16)
#define DMA2_Stream3_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA2_Stream3_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA2_Stream3_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA2_Stream3_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA2_Stream3_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA2_Stream3_CR_PL_MED			((uint32_t)0x00000001)
#define DMA2_Stream3_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA2_Stream3_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA2_Stream3_CR_R_DBM_BIT     	(18)
#define DMA2_Stream3_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA2_Stream3_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA2_Stream3_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA2_Stream3_CR_R_CT_BIT     	(19)
#define DMA2_Stream3_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA2_Stream3_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA2_Stream3_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA2_Stream3_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA2_Stream3_CR_R_PBURST_BIT    (21)
#define DMA2_Stream3_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA2_Stream3_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA2_Stream3_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA2_Stream3_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream3_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream3_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA2_Stream3_CR_R_MBURST_BIT    (23)
#define DMA2_Stream3_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA2_Stream3_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA2_Stream3_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA2_Stream3_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream3_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream3_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream3_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream3_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA2_Stream3_CR_R_CHSEL_BIT     (23)
#define DMA2_Stream3_CR_R_CHSEL_SAI1_A	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_R_CHSEL_ADC2	((uint32_t)0x02000000)
#define DMA2_Stream3_CR_R_CHSEL_SPI5_RX	((uint32_t)0x04000000)
#define DMA2_Stream3_CR_R_CHSEL_SPI1_TX	((uint32_t)0x06000000)
#define DMA2_Stream3_CR_R_CHSEL_SDMMC1	((uint32_t)0x08000000)
#define DMA2_Stream3_CR_R_CHSEL_SPI4_RX	((uint32_t)0x0A000000)
#define DMA2_Stream3_CR_R_CHSEL_TIM1_CH1	((uint32_t)0x0C000000)
#define DMA2_Stream3_CR_R_CHSEL_TIM8_CH2	((uint32_t)0x0E000000)

#define DMA2_Stream3_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream3_CR_CHSEL_SAI1_A	((uint32_t)0x00000000)
#define DMA2_Stream3_CR_CHSEL_ADC2		((uint32_t)0x00000001)
#define DMA2_Stream3_CR_CHSEL_SPI5_RX	((uint32_t)0x00000002)
#define DMA2_Stream3_CR_CHSEL_SPI1_TX	((uint32_t)0x00000003)
#define DMA2_Stream3_CR_CHSEL_SDMMC1	((uint32_t)0x00000004)
#define DMA2_Stream3_CR_CHSEL_SPI4_RX	((uint32_t)0x00000005)
#define DMA2_Stream3_CR_CHSEL_TIM1_CH1	((uint32_t)0x00000006)
#define DMA2_Stream3_CR_CHSEL_TIM8_CH2	((uint32_t)0x00000007)
/*--------*/


/* TODO S3NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 24 S3NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream3_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA2_BASE+DMA_S3NDTR_OFFSET )))
#define DMA2_Stream3_NDTR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S3NDTR_OFFSET)))

/*--------*/
#define DMA2_Stream3_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA2_Stream3_NDTR_R_NDT_BIT     	(0)

#define DMA2_Stream3_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S3PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 25 S3PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream3_PAR            					(((DMA_SxPAR_TypeDef*)(DMA2_BASE+DMA_S3PAR_OFFSET )))
#define DMA2_Stream3_PAR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S3PAR_OFFSET)))

/*--------*/
#define DMA2_Stream3_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream3_PAR_R_PAR_BIT     	(0)

#define DMA2_Stream3_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S3M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 26 S3M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream3_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA2_BASE+DMA_S3M0AR_OFFSET )))
#define DMA2_Stream3_M0AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S3M0AR_OFFSET)))

/*--------*/
#define DMA2_Stream3_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream3_M0AR_R_M0A_BIT     	(0)

#define DMA2_Stream3_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S3M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 27 S3M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream3_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA2_BASE+DMA_S3M1AR_OFFSET )))
#define DMA2_Stream3_M1AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S3M1AR_OFFSET)))

/*--------*/
#define DMA2_Stream3_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream3_M1AR_R_M1A_BIT     	(0)

#define DMA2_Stream3_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S3FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 28 S3FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream3_FCR            					(((DMA_SxFCR_TypeDef*)(DMA2_BASE+DMA_S3FCR_OFFSET )))
#define DMA2_Stream3_FCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S3FCR_OFFSET)))

/*--------*/
#define DMA2_Stream3_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream3_FCR_R_FTH_BIT     	(0)
#define DMA2_Stream3_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream3_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream3_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream3_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA2_Stream3_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream3_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream3_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream3_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream3_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream3_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA2_Stream3_FCR_R_DMDIS_BIT    (2)
#define DMA2_Stream3_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA2_Stream3_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA2_Stream3_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA2_Stream3_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream3_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA2_Stream3_FCR_R_FS_BIT     	(3)
#define DMA2_Stream3_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream3_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA2_Stream3_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA2_Stream3_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA2_Stream3_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA2_Stream3_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA2_Stream3_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream3_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream3_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA2_Stream3_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA2_Stream3_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA2_Stream3_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA2_Stream3_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA2_Stream3_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA2_Stream3_FCR_R_FEIE_BIT    	(7)
#define DMA2_Stream3_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA2_Stream3_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA2_Stream3_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream3_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream3_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/



/* TODO S4CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 29 S4CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream4_CR            					(((DMA_SxCR_TypeDef*)(DMA2_BASE+DMA_S4CR_OFFSET )))
#define DMA2_Stream4_CR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S4CR_OFFSET)))

/*--------*/
#define DMA2_Stream4_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA2_Stream4_CR_R_EN_BIT    (0)
#define DMA2_Stream4_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA2_Stream4_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA2_Stream4_CR_R_DMEIE_BIT     (1)
#define DMA2_Stream4_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA2_Stream4_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA2_Stream4_CR_R_TEIE_BIT     	(2)
#define DMA2_Stream4_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA2_Stream4_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA2_Stream4_CR_R_HTIE_BIT     	(3)
#define DMA2_Stream4_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA2_Stream4_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA2_Stream4_CR_R_TCIE_BIT     	(4)
#define DMA2_Stream4_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA2_Stream4_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA2_Stream4_CR_R_PFCTRL_BIT    (5)
#define DMA2_Stream4_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA2_Stream4_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA2_Stream4_CR_R_DIR_BIT     	(6)
#define DMA2_Stream4_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA2_Stream4_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA2_Stream4_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream4_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA2_Stream4_CR_R_CIRC_BIT     	(8)
#define DMA2_Stream4_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA2_Stream4_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA2_Stream4_CR_R_PINC_BIT     	(9)
#define DMA2_Stream4_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA2_Stream4_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA2_Stream4_CR_R_MINC_BIT     	(10)
#define DMA2_Stream4_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA2_Stream4_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA2_Stream4_CR_R_PSIZE_BIT     (11)
#define DMA2_Stream4_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA2_Stream4_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA2_Stream4_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream4_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA2_Stream4_CR_R_MSIZE_BIT     (13)
#define DMA2_Stream4_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA2_Stream4_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA2_Stream4_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream4_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA2_Stream4_CR_R_PINCOS_BIT    (15)
#define DMA2_Stream4_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA2_Stream4_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA2_Stream4_CR_R_PL_BIT     	(16)
#define DMA2_Stream4_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA2_Stream4_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA2_Stream4_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA2_Stream4_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA2_Stream4_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA2_Stream4_CR_PL_MED			((uint32_t)0x00000001)
#define DMA2_Stream4_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA2_Stream4_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA2_Stream4_CR_R_DBM_BIT     	(18)
#define DMA2_Stream4_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA2_Stream4_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA2_Stream4_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA2_Stream4_CR_R_CT_BIT     	(19)
#define DMA2_Stream4_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA2_Stream4_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA2_Stream4_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA2_Stream4_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA2_Stream4_CR_R_PBURST_BIT    (21)
#define DMA2_Stream4_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA2_Stream4_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA2_Stream4_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA2_Stream4_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream4_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream4_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA2_Stream4_CR_R_MBURST_BIT    (23)
#define DMA2_Stream4_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA2_Stream4_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA2_Stream4_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA2_Stream4_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream4_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream4_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream4_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA2_Stream4_CR_R_CHSEL_BIT     (23)
#define DMA2_Stream4_CR_R_CHSEL_ADC1	((uint32_t)0x00000000)
#define DMA2_Stream4_CR_R_CHSEL_SAI1_B	((uint32_t)0x02000000)
#define DMA2_Stream4_CR_R_CHSEL_SPI5_TX	((uint32_t)0x04000000)
#define DMA2_Stream4_CR_R_CHSEL_SAI2_A	((uint32_t)0x06000000)
#define DMA2_Stream4_CR_R_CHSEL_CH4		((uint32_t)0x08000000)
#define DMA2_Stream4_CR_R_CHSEL_SPI4_TX	((uint32_t)0x0A000000)
#define DMA2_Stream4_CR_R_CHSEL_TIM1_CH4	((uint32_t)0x0C000000)
#define DMA2_Stream4_CR_R_CHSEL_TIM1_TRIG	((uint32_t)0x0C000000)
#define DMA2_Stream4_CR_R_CHSEL_TIM1_COM	((uint32_t)0x0C000000)
#define DMA2_Stream4_CR_R_CHSEL_TIM8_CH3	((uint32_t)0x0E000000)

#define DMA2_Stream4_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream4_CR_CHSEL_ADC1		((uint32_t)0x00000000)
#define DMA2_Stream4_CR_CHSEL_SAI1_B	((uint32_t)0x00000001)
#define DMA2_Stream4_CR_CHSEL_SPI5_TX	((uint32_t)0x00000002)
#define DMA2_Stream4_CR_CHSEL_SAI2_A	((uint32_t)0x00000003)
#define DMA2_Stream4_CR_CHSEL_CH4		((uint32_t)0x00000004)
#define DMA2_Stream4_CR_CHSEL_SPI4_TX	((uint32_t)0x00000005)
#define DMA2_Stream4_CR_CHSEL_TIM1_CH4	((uint32_t)0x00000006)
#define DMA2_Stream4_CR_CHSEL_TIM1_TRIG	((uint32_t)0x00000006)
#define DMA2_Stream4_CR_CHSEL_TIM1_COM	((uint32_t)0x00000006)
#define DMA2_Stream4_CR_CHSEL_TIM8_CH3	((uint32_t)0x00000007)
/*--------*/


/* TODO S4NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 30 S4NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream4_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA2_BASE+DMA_S4NDTR_OFFSET )))
#define DMA2_Stream4_NDTR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S4NDTR_OFFSET)))

/*--------*/
#define DMA2_Stream4_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA2_Stream4_NDTR_R_NDT_BIT     	(0)

#define DMA2_Stream4_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S4PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 31 S4PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream4_PAR            					(((DMA_SxPAR_TypeDef*)(DMA2_BASE+DMA_S4PAR_OFFSET )))
#define DMA2_Stream4_PAR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S4PAR_OFFSET)))

/*--------*/
#define DMA2_Stream4_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream4_PAR_R_PAR_BIT     	(0)

#define DMA2_Stream4_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S4M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 32 S4M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream4_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA2_BASE+DMA_S4M0AR_OFFSET )))
#define DMA2_Stream4_M0AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S4M0AR_OFFSET)))

/*--------*/
#define DMA2_Stream4_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream4_M0AR_R_M0A_BIT     	(0)

#define DMA2_Stream4_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S4M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 33 S4M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream4_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA2_BASE+DMA_S4M1AR_OFFSET )))
#define DMA2_Stream4_M1AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S4M1AR_OFFSET)))

/*--------*/
#define DMA2_Stream4_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream4_M1AR_R_M1A_BIT     	(0)

#define DMA2_Stream4_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S4FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 34 S4FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream4_FCR            					(((DMA_SxFCR_TypeDef*)(DMA2_BASE+DMA_S4FCR_OFFSET )))
#define DMA2_Stream4_FCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S4FCR_OFFSET)))

/*--------*/
#define DMA2_Stream4_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream4_FCR_R_FTH_BIT     	(0)
#define DMA2_Stream4_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream4_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream4_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream4_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA2_Stream4_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream4_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream4_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream4_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream4_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream4_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA2_Stream4_FCR_R_DMDIS_BIT    (2)
#define DMA2_Stream4_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA2_Stream4_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA2_Stream4_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA2_Stream4_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream4_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA2_Stream4_FCR_R_FS_BIT     	(3)
#define DMA2_Stream4_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream4_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA2_Stream4_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA2_Stream4_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA2_Stream4_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA2_Stream4_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA2_Stream4_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream4_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream4_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA2_Stream4_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA2_Stream4_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA2_Stream4_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA2_Stream4_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA2_Stream4_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA2_Stream4_FCR_R_FEIE_BIT    	(7)
#define DMA2_Stream4_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA2_Stream4_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA2_Stream4_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream4_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream4_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/



/* TODO S5CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 35 S5CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream5_CR            					(((DMA_SxCR_TypeDef*)(DMA2_BASE+DMA_S5CR_OFFSET )))
#define DMA2_Stream5_CR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S5CR_OFFSET)))

/*--------*/
#define DMA2_Stream5_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA2_Stream5_CR_R_EN_BIT    (0)
#define DMA2_Stream5_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA2_Stream5_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA2_Stream5_CR_R_DMEIE_BIT     (1)
#define DMA2_Stream5_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA2_Stream5_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA2_Stream5_CR_R_TEIE_BIT     	(2)
#define DMA2_Stream5_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA2_Stream5_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA2_Stream5_CR_R_HTIE_BIT     	(3)
#define DMA2_Stream5_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA2_Stream5_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA2_Stream5_CR_R_TCIE_BIT     	(4)
#define DMA2_Stream5_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA2_Stream5_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA2_Stream5_CR_R_PFCTRL_BIT    (5)
#define DMA2_Stream5_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA2_Stream5_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA2_Stream5_CR_R_DIR_BIT     	(6)
#define DMA2_Stream5_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA2_Stream5_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA2_Stream5_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream5_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA2_Stream5_CR_R_CIRC_BIT     	(8)
#define DMA2_Stream5_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA2_Stream5_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA2_Stream5_CR_R_PINC_BIT     	(9)
#define DMA2_Stream5_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA2_Stream5_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA2_Stream5_CR_R_MINC_BIT     	(10)
#define DMA2_Stream5_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA2_Stream5_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA2_Stream5_CR_R_PSIZE_BIT     (11)
#define DMA2_Stream5_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA2_Stream5_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA2_Stream5_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream5_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA2_Stream5_CR_R_MSIZE_BIT     (13)
#define DMA2_Stream5_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA2_Stream5_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA2_Stream5_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream5_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA2_Stream5_CR_R_PINCOS_BIT    (15)
#define DMA2_Stream5_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA2_Stream5_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA2_Stream5_CR_R_PL_BIT     	(16)
#define DMA2_Stream5_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA2_Stream5_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA2_Stream5_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA2_Stream5_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA2_Stream5_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA2_Stream5_CR_PL_MED			((uint32_t)0x00000001)
#define DMA2_Stream5_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA2_Stream5_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA2_Stream5_CR_R_DBM_BIT     	(18)
#define DMA2_Stream5_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA2_Stream5_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA2_Stream5_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA2_Stream5_CR_R_CT_BIT     	(19)
#define DMA2_Stream5_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA2_Stream5_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA2_Stream5_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA2_Stream5_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA2_Stream5_CR_R_PBURST_BIT    (21)
#define DMA2_Stream5_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA2_Stream5_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA2_Stream5_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA2_Stream5_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream5_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream5_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA2_Stream5_CR_R_MBURST_BIT    (23)
#define DMA2_Stream5_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA2_Stream5_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA2_Stream5_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA2_Stream5_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream5_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream5_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream5_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA2_Stream5_CR_R_CHSEL_BIT     (23)
#define DMA2_Stream5_CR_R_CHSEL_SAI1_B	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_R_CHSEL_SPI6_TX	((uint32_t)0x02000000)
#define DMA2_Stream5_CR_R_CHSEL_CRYP_OUT	((uint32_t)0x04000000)
#define DMA2_Stream5_CR_R_CHSEL_SPI1_TX	((uint32_t)0x06000000)
#define DMA2_Stream5_CR_R_CHSEL_USART1_RX	((uint32_t)0x08000000)
#define DMA2_Stream5_CR_R_CHSEL_CH5		((uint32_t)0x0A000000)
#define DMA2_Stream5_CR_R_CHSEL_TIM1_UP	((uint32_t)0x0C000000)
#define DMA2_Stream5_CR_R_CHSEL_SPI5_RX	((uint32_t)0x0E000000)

#define DMA2_Stream5_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream5_CR_CHSEL_SAI1_B	((uint32_t)0x00000000)
#define DMA2_Stream5_CR_CHSEL_SPI6_TX	((uint32_t)0x00000001)
#define DMA2_Stream5_CR_CHSEL_CRYP_OUT	((uint32_t)0x00000002)
#define DMA2_Stream5_CR_CHSEL_SPI1_TX	((uint32_t)0x00000003)
#define DMA2_Stream5_CR_CHSEL_USART1_RX	((uint32_t)0x00000004)
#define DMA2_Stream5_CR_CHSEL_CH5		((uint32_t)0x00000005)
#define DMA2_Stream5_CR_CHSEL_TIM1_UP	((uint32_t)0x00000006)
#define DMA2_Stream5_CR_CHSEL_SPI5_RX	((uint32_t)0x00000007)
/*--------*/


/* TODO S5NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 36 S5NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream5_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA2_BASE+DMA_S5NDTR_OFFSET )))
#define DMA2_Stream5_NDTR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S5NDTR_OFFSET)))

/*--------*/
#define DMA2_Stream5_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA2_Stream5_NDTR_R_NDT_BIT     	(0)

#define DMA2_Stream5_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S5PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 37 S5PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream5_PAR            					(((DMA_SxPAR_TypeDef*)(DMA2_BASE+DMA_S5PAR_OFFSET )))
#define DMA2_Stream5_PAR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S5PAR_OFFSET)))

/*--------*/
#define DMA2_Stream5_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream5_PAR_R_PAR_BIT     	(0)

#define DMA2_Stream5_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S5M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 38 S5M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream5_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA2_BASE+DMA_S5M0AR_OFFSET )))
#define DMA2_Stream5_M0AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S5M0AR_OFFSET)))

/*--------*/
#define DMA2_Stream5_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream5_M0AR_R_M0A_BIT     	(0)

#define DMA2_Stream5_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S5M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 39 S5M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream5_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA2_BASE+DMA_S5M1AR_OFFSET )))
#define DMA2_Stream5_M1AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S5M1AR_OFFSET)))

/*--------*/
#define DMA2_Stream5_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream5_M1AR_R_M1A_BIT     	(0)

#define DMA2_Stream5_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S5FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 40 S5FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream5_FCR            					(((DMA_SxFCR_TypeDef*)(DMA2_BASE+DMA_S5FCR_OFFSET )))
#define DMA2_Stream5_FCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S5FCR_OFFSET)))

/*--------*/
#define DMA2_Stream5_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream5_FCR_R_FTH_BIT     	(0)
#define DMA2_Stream5_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream5_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream5_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream5_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA2_Stream5_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream5_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream5_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream5_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream5_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream5_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA2_Stream5_FCR_R_DMDIS_BIT    (2)
#define DMA2_Stream5_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA2_Stream5_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA2_Stream5_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA2_Stream5_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream5_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA2_Stream5_FCR_R_FS_BIT     	(3)
#define DMA2_Stream5_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream5_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA2_Stream5_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA2_Stream5_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA2_Stream5_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA2_Stream5_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA2_Stream5_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream5_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream5_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA2_Stream5_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA2_Stream5_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA2_Stream5_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA2_Stream5_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA2_Stream5_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA2_Stream5_FCR_R_FEIE_BIT    	(7)
#define DMA2_Stream5_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA2_Stream5_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA2_Stream5_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream5_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream5_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/


/* TODO S6CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 41 S6CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream6_CR            					(((DMA_SxCR_TypeDef*)(DMA2_BASE+DMA_S6CR_OFFSET )))
#define DMA2_Stream6_CR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S6CR_OFFSET)))

/*--------*/
#define DMA2_Stream6_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA2_Stream6_CR_R_EN_BIT    (0)
#define DMA2_Stream6_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA2_Stream6_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA2_Stream6_CR_R_DMEIE_BIT     (1)
#define DMA2_Stream6_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA2_Stream6_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA2_Stream6_CR_R_TEIE_BIT     	(2)
#define DMA2_Stream6_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA2_Stream6_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA2_Stream6_CR_R_HTIE_BIT     	(3)
#define DMA2_Stream6_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA2_Stream6_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA2_Stream6_CR_R_TCIE_BIT     	(4)
#define DMA2_Stream6_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA2_Stream6_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA2_Stream6_CR_R_PFCTRL_BIT    (5)
#define DMA2_Stream6_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA2_Stream6_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA2_Stream6_CR_R_DIR_BIT     	(6)
#define DMA2_Stream6_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA2_Stream6_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA2_Stream6_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream6_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA2_Stream6_CR_R_CIRC_BIT     	(8)
#define DMA2_Stream6_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA2_Stream6_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA2_Stream6_CR_R_PINC_BIT     	(9)
#define DMA2_Stream6_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA2_Stream6_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA2_Stream6_CR_R_MINC_BIT     	(10)
#define DMA2_Stream6_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA2_Stream6_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA2_Stream6_CR_R_PSIZE_BIT     (11)
#define DMA2_Stream6_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA2_Stream6_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA2_Stream6_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream6_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA2_Stream6_CR_R_MSIZE_BIT     (13)
#define DMA2_Stream6_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA2_Stream6_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA2_Stream6_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream6_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA2_Stream6_CR_R_PINCOS_BIT    (15)
#define DMA2_Stream6_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA2_Stream6_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA2_Stream6_CR_R_PL_BIT     	(16)
#define DMA2_Stream6_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA2_Stream6_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA2_Stream6_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA2_Stream6_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA2_Stream6_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA2_Stream6_CR_PL_MED			((uint32_t)0x00000001)
#define DMA2_Stream6_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA2_Stream6_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA2_Stream6_CR_R_DBM_BIT     	(18)
#define DMA2_Stream6_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA2_Stream6_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA2_Stream6_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA2_Stream6_CR_R_CT_BIT     	(19)
#define DMA2_Stream6_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA2_Stream6_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA2_Stream6_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA2_Stream6_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA2_Stream6_CR_R_PBURST_BIT    (21)
#define DMA2_Stream6_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA2_Stream6_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA2_Stream6_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA2_Stream6_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream6_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream6_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA2_Stream6_CR_R_MBURST_BIT    (23)
#define DMA2_Stream6_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA2_Stream6_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA2_Stream6_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA2_Stream6_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream6_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream6_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream6_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA2_Stream6_CR_R_CHSEL_BIT     (23)
#define DMA2_Stream6_CR_R_CHSEL_TIM1_CH1	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_CHSEL_TIM1_CH2	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_CHSEL_TIM1_CH3	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_R_CHSEL_SPI6_RX	((uint32_t)0x02000000)
#define DMA2_Stream6_CR_R_CHSEL_CRYP_IN	((uint32_t)0x04000000)
#define DMA2_Stream6_CR_R_CHSEL_SAI2_B	((uint32_t)0x06000000)
#define DMA2_Stream6_CR_R_CHSEL_SDMMC1	((uint32_t)0x08000000)
#define DMA2_Stream6_CR_R_CHSEL_USART6_TX	((uint32_t)0x0A000000)
#define DMA2_Stream6_CR_R_CHSEL_TIM1_CH3_1	((uint32_t)0x0C000000)
#define DMA2_Stream6_CR_R_CHSEL_SPI5_TX	((uint32_t)0x0E000000)

#define DMA2_Stream6_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream6_CR_CHSEL_TIM1_CH1	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_CHSEL_TIM1_CH2	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_CHSEL_TIM1_CH3	((uint32_t)0x00000000)
#define DMA2_Stream6_CR_CHSEL_SPI6_RX	((uint32_t)0x00000001)
#define DMA2_Stream6_CR_CHSEL_CRYP_IN	((uint32_t)0x00000002)
#define DMA2_Stream6_CR_CHSEL_SAI2_B	((uint32_t)0x00000003)
#define DMA2_Stream6_CR_CHSEL_SDMMC1	((uint32_t)0x00000004)
#define DMA2_Stream6_CR_CHSEL_USART6_TX	((uint32_t)0x00000005)
#define DMA2_Stream6_CR_CHSEL_TIM1_CH3_1	((uint32_t)0x00000006)
#define DMA2_Stream6_CR_CHSEL_SPI5_TX	((uint32_t)0x00000007)
/*--------*/


/* TODO S6NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 42 S6NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream6_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA2_BASE+DMA_S6NDTR_OFFSET )))
#define DMA2_Stream6_NDTR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S6NDTR_OFFSET)))

/*--------*/
#define DMA2_Stream6_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA2_Stream6_NDTR_R_NDT_BIT     	(0)

#define DMA2_Stream6_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S6PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 43 S6PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream6_PAR            					(((DMA_SxPAR_TypeDef*)(DMA2_BASE+DMA_S6PAR_OFFSET )))
#define DMA2_Stream6_PAR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S6PAR_OFFSET)))

/*--------*/
#define DMA2_Stream6_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream6_PAR_R_PAR_BIT     	(0)

#define DMA2_Stream6_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S6M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 44 S6M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream6_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA2_BASE+DMA_S6M0AR_OFFSET )))
#define DMA2_Stream6_M0AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S6M0AR_OFFSET)))

/*--------*/
#define DMA2_Stream6_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream6_M0AR_R_M0A_BIT     	(0)

#define DMA2_Stream6_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S6M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 45 S6M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream6_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA2_BASE+DMA_S6M1AR_OFFSET )))
#define DMA2_Stream6_M1AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S6M1AR_OFFSET)))

/*--------*/
#define DMA2_Stream6_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream6_M1AR_R_M1A_BIT     	(0)

#define DMA2_Stream6_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S6FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 46 S6FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream6_FCR            					(((DMA_SxFCR_TypeDef*)(DMA2_BASE+DMA_S6FCR_OFFSET )))
#define DMA2_Stream6_FCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S6FCR_OFFSET)))

/*--------*/
#define DMA2_Stream6_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream6_FCR_R_FTH_BIT     	(0)
#define DMA2_Stream6_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream6_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream6_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream6_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA2_Stream6_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream6_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream6_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream6_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream6_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream6_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA2_Stream6_FCR_R_DMDIS_BIT    (2)
#define DMA2_Stream6_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA2_Stream6_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA2_Stream6_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA2_Stream6_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream6_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA2_Stream6_FCR_R_FS_BIT     	(3)
#define DMA2_Stream6_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream6_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA2_Stream6_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA2_Stream6_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA2_Stream6_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA2_Stream6_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA2_Stream6_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream6_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream6_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA2_Stream6_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA2_Stream6_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA2_Stream6_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA2_Stream6_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA2_Stream6_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA2_Stream6_FCR_R_FEIE_BIT    	(7)
#define DMA2_Stream6_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA2_Stream6_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA2_Stream6_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream6_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream6_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/



/* TODO S7CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 47 S7CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream7_CR            					(((DMA_SxCR_TypeDef*)(DMA2_BASE+DMA_S7CR_OFFSET )))
#define DMA2_Stream7_CR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S7CR_OFFSET)))

/*--------*/
#define DMA2_Stream7_CR_R_EN_MASK   ((uint32_t)0x00000001)
#define DMA2_Stream7_CR_R_EN_BIT    (0)
#define DMA2_Stream7_CR_R_EN_DIS    ((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_EN_EN		((uint32_t)0x00000001)

#define DMA2_Stream7_CR_EN_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_EN_DIS		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_EN_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_DMEIE_MASK    ((uint32_t)0x00000002)
#define DMA2_Stream7_CR_R_DMEIE_BIT     (1)
#define DMA2_Stream7_CR_R_DMEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_DMEIE_EN		((uint32_t)0x00000002)

#define DMA2_Stream7_CR_DMEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_DMEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_DMEIE_EN	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_TEIE_MASK    	((uint32_t)0x00000004)
#define DMA2_Stream7_CR_R_TEIE_BIT     	(2)
#define DMA2_Stream7_CR_R_TEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_TEIE_EN		((uint32_t)0x00000004)

#define DMA2_Stream7_CR_TEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_TEIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_TEIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_HTIE_MASK    	((uint32_t)0x00000008)
#define DMA2_Stream7_CR_R_HTIE_BIT     	(3)
#define DMA2_Stream7_CR_R_HTIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_HTIE_EN		((uint32_t)0x00000008)

#define DMA2_Stream7_CR_HTIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_HTIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_HTIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_TCIE_MASK    	((uint32_t)0x00000010)
#define DMA2_Stream7_CR_R_TCIE_BIT     	(4)
#define DMA2_Stream7_CR_R_TCIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_TCIE_EN		((uint32_t)0x00000010)

#define DMA2_Stream7_CR_TCIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_TCIE_DIS		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_TCIE_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_PFCTRL_MASK   ((uint32_t)0x00000020)
#define DMA2_Stream7_CR_R_PFCTRL_BIT    (5)
#define DMA2_Stream7_CR_R_PFCTRL_DMA    ((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_PFCTRL_PERIPH	((uint32_t)0x00000020)

#define DMA2_Stream7_CR_PFCTRL_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_PFCTRL_DMA		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_PFCTRL_PERIPH	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_DIR_MASK    	((uint32_t)0x000000C0)
#define DMA2_Stream7_CR_R_DIR_BIT     	(6)
#define DMA2_Stream7_CR_R_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_DIR_MEM2PERIPH	((uint32_t)0x00000040)
#define DMA2_Stream7_CR_R_DIR_MEM2MEM		((uint32_t)0x00000080)

#define DMA2_Stream7_CR_DIR_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream7_CR_DIR_PERIPH2MEM	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_DIR_MEM2PERIPH	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_DIR_MEM2MEM		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_CIRC_MASK    	((uint32_t)0x00000100)
#define DMA2_Stream7_CR_R_CIRC_BIT     	(8)
#define DMA2_Stream7_CR_R_CIRC_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_CIRC_EN		((uint32_t)0x00000100)

#define DMA2_Stream7_CR_CIRC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_CIRC_DIS		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_CIRC_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_PINC_MASK    	((uint32_t)0x00000200)
#define DMA2_Stream7_CR_R_PINC_BIT     	(9)
#define DMA2_Stream7_CR_R_PINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_PINC_INC		((uint32_t)0x00000200)

#define DMA2_Stream7_CR_PINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_PINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_PINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_MINC_MASK    	((uint32_t)0x00000400)
#define DMA2_Stream7_CR_R_MINC_BIT     	(10)
#define DMA2_Stream7_CR_R_MINC_FIX    	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_MINC_INC		((uint32_t)0x00000400)

#define DMA2_Stream7_CR_MINC_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_MINC_FIX		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_MINC_INC	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_PSIZE_MASK    ((uint32_t)0x00001800)
#define DMA2_Stream7_CR_R_PSIZE_BIT     (11)
#define DMA2_Stream7_CR_R_PSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_PSIZE_HALF_WORD	((uint32_t)0x00000800)
#define DMA2_Stream7_CR_R_PSIZE_WORD		((uint32_t)0x00001000)

#define DMA2_Stream7_CR_PSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream7_CR_PSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_PSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_PSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_MSIZE_MASK    ((uint32_t)0x00006000)
#define DMA2_Stream7_CR_R_MSIZE_BIT     (13)
#define DMA2_Stream7_CR_R_MSIZE_BYTE   	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_MSIZE_HALF_WORD	((uint32_t)0x00002000)
#define DMA2_Stream7_CR_R_MSIZE_WORD		((uint32_t)0x00004000)

#define DMA2_Stream7_CR_MSIZE_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream7_CR_MSIZE_BYTE		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_MSIZE_HALF_WORD	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_MSIZE_WORD		((uint32_t)0x00000002)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_PINCOS_MASK	((uint32_t)0x00008000)
#define DMA2_Stream7_CR_R_PINCOS_BIT    (15)
#define DMA2_Stream7_CR_R_PINCOS_PSIZE  ((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_PINCOS_FIX	((uint32_t)0x00008000)

#define DMA2_Stream7_CR_PINCOS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_PINCOS_PSIZE	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_PINCOS_FIX	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_PL_MASK    	((uint32_t)0x00030000)
#define DMA2_Stream7_CR_R_PL_BIT     	(16)
#define DMA2_Stream7_CR_R_PL_LOW   		((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_PL_MED		((uint32_t)0x00010000)
#define DMA2_Stream7_CR_R_PL_HIGH		((uint32_t)0x00020000)
#define DMA2_Stream7_CR_R_PL_VERY_HIGH	((uint32_t)0x00030000)

#define DMA2_Stream7_CR_PL_MASK    		((uint32_t)0x00000003)
#define DMA2_Stream7_CR_PL_LOW			((uint32_t)0x00000000)
#define DMA2_Stream7_CR_PL_MED			((uint32_t)0x00000001)
#define DMA2_Stream7_CR_PL_HIGH			((uint32_t)0x00000002)
#define DMA2_Stream7_CR_PL_VERY_HIGH	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_DBM_MASK    	((uint32_t)0x00040000)
#define DMA2_Stream7_CR_R_DBM_BIT     	(18)
#define DMA2_Stream7_CR_R_DBM_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_DBM_EN		((uint32_t)0x00040000)

#define DMA2_Stream7_CR_DBM_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_DBM_DIS			((uint32_t)0x00000000)
#define DMA2_Stream7_CR_DBM_EN	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_CT_MASK    	((uint32_t)0x00080000)
#define DMA2_Stream7_CR_R_CT_BIT     	(19)
#define DMA2_Stream7_CR_R_CT_MEM0    	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_CT_MEM1		((uint32_t)0x00080000)

#define DMA2_Stream7_CR_CT_MASK    		((uint32_t)0x00000001)
#define DMA2_Stream7_CR_CT_MEM0			((uint32_t)0x00000000)
#define DMA2_Stream7_CR_CT_MEM1	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_PBURST_MASK   ((uint32_t)0x00600000)
#define DMA2_Stream7_CR_R_PBURST_BIT    (21)
#define DMA2_Stream7_CR_R_PBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_PBURST_INCR4	((uint32_t)0x00200000)
#define DMA2_Stream7_CR_R_PBURST_INCR8	((uint32_t)0x00400000)
#define DMA2_Stream7_CR_R_PBURST_INCR16	((uint32_t)0x00600000)

#define DMA2_Stream7_CR_PBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream7_CR_PBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_PBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_PBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream7_CR_PBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_MBURST_MASK   ((uint32_t)0x01800000)
#define DMA2_Stream7_CR_R_MBURST_BIT    (23)
#define DMA2_Stream7_CR_R_MBURST_SINGLE ((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_MBURST_INCR4	((uint32_t)0x00800000)
#define DMA2_Stream7_CR_R_MBURST_INCR8	((uint32_t)0x01000000)
#define DMA2_Stream7_CR_R_MBURST_INCR16	((uint32_t)0x01800000)

#define DMA2_Stream7_CR_MBURST_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream7_CR_MBURST_SINGLE	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_MBURST_INCR4	((uint32_t)0x00000001)
#define DMA2_Stream7_CR_MBURST_INCR8	((uint32_t)0x00000002)
#define DMA2_Stream7_CR_MBURST_INCR16	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream7_CR_R_CHSEL_MASK    ((uint32_t)0x0E000000)
#define DMA2_Stream7_CR_R_CHSEL_BIT     (23)
#define DMA2_Stream7_CR_R_CHSEL_SAI2_B	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_R_CHSEL_DCMI	((uint32_t)0x02000000)
#define DMA2_Stream7_CR_R_CHSEL_HASH_IN	((uint32_t)0x04000000)
#define DMA2_Stream7_CR_R_CHSEL_QUADSPI	((uint32_t)0x06000000)
#define DMA2_Stream7_CR_R_CHSEL_USART1_TX	((uint32_t)0x08000000)
#define DMA2_Stream7_CR_R_CHSEL_USART6_TX	((uint32_t)0x0A000000)
#define DMA2_Stream7_CR_R_CHSEL_CH6		((uint32_t)0x0C000000)
#define DMA2_Stream7_CR_R_CHSEL_TIM8_CH4	((uint32_t)0x0E000000)
#define DMA2_Stream7_CR_R_CHSEL_TIM8_TRIG	((uint32_t)0x0E000000)
#define DMA2_Stream7_CR_R_CHSEL_TIM8_COM	((uint32_t)0x0E000000)

#define DMA2_Stream7_CR_CHSEL_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream7_CR_CHSEL_SAI2_B	((uint32_t)0x00000000)
#define DMA2_Stream7_CR_CHSEL_DCMI		((uint32_t)0x00000001)
#define DMA2_Stream7_CR_CHSEL_HASH_IN	((uint32_t)0x00000002)
#define DMA2_Stream7_CR_CHSEL_QUADSPI	((uint32_t)0x00000003)
#define DMA2_Stream7_CR_CHSEL_USART1_TX	((uint32_t)0x00000004)
#define DMA2_Stream7_CR_CHSEL_USART6_TX	((uint32_t)0x00000005)
#define DMA2_Stream7_CR_CHSEL_CH6		((uint32_t)0x00000006)
#define DMA2_Stream7_CR_CHSEL_TIM8_CH4	((uint32_t)0x00000007)
#define DMA2_Stream7_CR_CHSEL_TIM8_TRIG	((uint32_t)0x00000007)
#define DMA2_Stream7_CR_CHSEL_TIM8_COM	((uint32_t)0x00000007)
/*--------*/


/* TODO S7NDTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 48 S7NDTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream7_NDTR            					(((DMA_SxNDTR_TypeDef*)(DMA2_BASE+DMA_S7NDTR_OFFSET )))
#define DMA2_Stream7_NDTR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S7NDTR_OFFSET)))

/*--------*/
#define DMA2_Stream7_NDTR_R_NDT_MASK    	((uint32_t)0x0000FFFF)
#define DMA2_Stream7_NDTR_R_NDT_BIT     	(0)

#define DMA2_Stream7_NDTR_NDT_MASK    	((uint32_t)0x0000FFFF)
/*--------*/

/* TODO S7PAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 49 S7PAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream7_PAR            					(((DMA_SxPAR_TypeDef*)(DMA2_BASE+DMA_S7PAR_OFFSET )))
#define DMA2_Stream7_PAR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S7PAR_OFFSET)))

/*--------*/
#define DMA2_Stream7_PAR_R_PAR_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream7_PAR_R_PAR_BIT     	(0)

#define DMA2_Stream7_PAR_PAR_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S7M0AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 50 S7M0AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream7_M0AR            					(((DMA_SxM0AR_TypeDef*)(DMA2_BASE+DMA_S7M0AR_OFFSET )))
#define DMA2_Stream7_M0AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S7M0AR_OFFSET)))

/*--------*/
#define DMA2_Stream7_M0AR_R_M0A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream7_M0AR_R_M0A_BIT     	(0)

#define DMA2_Stream7_M0AR_M0A_MASK    		((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S7M1AR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 51 S7M1AR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream7_M1AR            					(((DMA_SxM1AR_TypeDef*)(DMA2_BASE+DMA_S7M1AR_OFFSET )))
#define DMA2_Stream7_M1AR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S7M1AR_OFFSET)))

/*--------*/
#define DMA2_Stream7_M1AR_R_M1A_MASK    	((uint32_t)0xFFFFFFFF)
#define DMA2_Stream7_M1AR_R_M1A_BIT     	(0)

#define DMA2_Stream7_M1AR_M1A_MASK    	((uint32_t)0xFFFFFFFF)
/*--------*/

/* TODO S7FCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 52 S7FCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2_Stream7_FCR            					(((DMA_SxFCR_TypeDef*)(DMA2_BASE+DMA_S7FCR_OFFSET )))
#define DMA2_Stream7_FCR_R          					(*((__IO uint32_t *)(DMA2_BASE+DMA_S7FCR_OFFSET)))

/*--------*/
#define DMA2_Stream7_FCR_R_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream7_FCR_R_FTH_BIT     	(0)
#define DMA2_Stream7_FCR_R_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream7_FCR_R_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream7_FCR_R_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream7_FCR_R_FTH_FULL    	((uint32_t)0x00000003)

#define DMA2_Stream7_FCR_FTH_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream7_FCR_FTH_1_4    	((uint32_t)0x00000000)
#define DMA2_Stream7_FCR_FTH_1_2    	((uint32_t)0x00000001)
#define DMA2_Stream7_FCR_FTH_3_4    	((uint32_t)0x00000002)
#define DMA2_Stream7_FCR_FTH_FULL    	((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define DMA2_Stream7_FCR_R_DMDIS_MASK	((uint32_t)0x00000004)
#define DMA2_Stream7_FCR_R_DMDIS_BIT    (2)
#define DMA2_Stream7_FCR_R_DMDIS_EN 	((uint32_t)0x00000000)
#define DMA2_Stream7_FCR_R_DMDIS_DIS    ((uint32_t)0x00000004)

#define DMA2_Stream7_FCR_DMDIS_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_FCR_DMDIS_EN    	((uint32_t)0x00000000)
#define DMA2_Stream7_FCR_DMDIS_DIS    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define DMA2_Stream7_FCR_R_FS_MASK    	((uint32_t)0x00000038)
#define DMA2_Stream7_FCR_R_FS_BIT     	(3)
#define DMA2_Stream7_FCR_R_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream7_FCR_R_FS_1_4    	((uint32_t)0x00000008)
#define DMA2_Stream7_FCR_R_FS_1_2    	((uint32_t)0x00000010)
#define DMA2_Stream7_FCR_R_FS_3_4    	((uint32_t)0x00000018)
#define DMA2_Stream7_FCR_R_FS_EMPTY    	((uint32_t)0x00000020)
#define DMA2_Stream7_FCR_R_FS_FULL    	((uint32_t)0x00000028)

#define DMA2_Stream7_FCR_FS_MASK    	((uint32_t)0x00000003)
#define DMA2_Stream7_FCR_FS_0    		((uint32_t)0x00000000)
#define DMA2_Stream7_FCR_FS_1_4    		((uint32_t)0x00000001)
#define DMA2_Stream7_FCR_FS_1_2    		((uint32_t)0x00000002)
#define DMA2_Stream7_FCR_FS_3_4    		((uint32_t)0x00000003)
#define DMA2_Stream7_FCR_FS_EMPTY    	((uint32_t)0x00000004)
#define DMA2_Stream7_FCR_FS_FULL    	((uint32_t)0x00000005)
/*--------*/

/*--------*/
#define DMA2_Stream7_FCR_R_FEIE_MASK	((uint32_t)0x00000080)
#define DMA2_Stream7_FCR_R_FEIE_BIT    	(7)
#define DMA2_Stream7_FCR_R_FEIE_DIS 	((uint32_t)0x00000000)
#define DMA2_Stream7_FCR_R_FEIE_EN    	((uint32_t)0x00000080)

#define DMA2_Stream7_FCR_FEIE_MASK    	((uint32_t)0x00000001)
#define DMA2_Stream7_FCR_FEIE_DIS    	((uint32_t)0x00000000)
#define DMA2_Stream7_FCR_FEIE_EN    	((uint32_t)0x00000001)
/*--------*/


/* TODO functions */
void DMA2_Mem2Mem(uint32_t mem1, uint32_t mem2,uint16_t size);
uint32_t DMA2_Stream0_Busy(void);
void DMA2_u8Stream0_Init(void);
void DMA2_u16Stream0_Init(void);
#endif /* DMA_H_ */
