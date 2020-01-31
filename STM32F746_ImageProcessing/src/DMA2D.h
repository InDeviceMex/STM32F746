/*
 * DMA2D.h
 *
 *  Created on: 14/09/2018
 *      Author: InDev
 */

#ifndef DMA2D_H_
#define DMA2D_H_

#include "Core.h"
#include "NVIC.h"
#include "RCC.h"
#include <stdint.h>


#define DMA2D_BASE            ((uint32_t)0x4002B000)
#define DMA2D_OFFSET          ((uint32_t)0x0002B000)


typedef __IO struct
{
    __IO  uint32_t START      	:1;
    __IO  uint32_t SUSP      	:1;
    __IO  uint32_t ABORT      	:1;
    	  uint32_t reserved     :5;
    __IO  uint32_t TEIE      	:1;
    __IO  uint32_t TCIE      	:1;
    __IO  uint32_t TWIE      	:1;
    __IO  uint32_t CAEIE      	:1;
    __IO  uint32_t CTCIE      	:1;
    __IO  uint32_t CEIE      	:1;
    	  uint32_t reserved1    :2;
    __IO  uint32_t MODE      	:2;
	 	  uint32_t reserved2    :14;
}DMA2D_CR_TypeDef;/*0x00000000*/


typedef __IO struct
{
    __I   uint32_t TEIF      	:1;
    __I   uint32_t TCIF      	:1;
    __I   uint32_t TWIF      	:1;
    __I   uint32_t CAEIF      	:1;
    __I   uint32_t CTCIF      	:1;
    __I   uint32_t CEIF      	:1;
    	  uint32_t reserved    	:26;
}DMA2D_ISR_TypeDef;/*0x00000004*/


typedef __IO struct
{
    __IO  uint32_t CTEIF      	:1;
    __IO  uint32_t CTCIF      	:1;
    __IO  uint32_t CTWIF      	:1;
    __IO  uint32_t CAECIF      	:1;
    __IO  uint32_t CCTCIF      	:1;
    __IO  uint32_t CCEIF      	:1;
    	  uint32_t reserved    	:26;
}DMA2D_IFCR_TypeDef;/*0x00000008*/


typedef __IO struct
{
    __IO  uint32_t MA      		:32;
}DMA2D_FGMAR_TypeDef;/*0x0000000C*/


typedef __IO struct
{
    __IO  uint32_t LO      		:14;
	      uint32_t reserved    	:18;
}DMA2D_FGOR_TypeDef;/*0x00000010*/


typedef __IO struct
{
    __IO  uint32_t MA      		:32;
}DMA2D_BGMAR_TypeDef;/*0x00000014*/


typedef __IO struct
{
    __IO  uint32_t LO      		:14;
	      uint32_t reserved    	:18;
}DMA2D_BGOR_TypeDef;/*0x00000018*/


typedef __IO struct
{
    __IO  uint32_t CM      		:4;
    __IO  uint32_t CCM      	:1;
    __IO  uint32_t START      	:1;
    	  uint32_t reserved     :2;
    __IO  uint32_t CS      		:8;
    __IO  uint32_t AM      		:2;
    	  uint32_t reserved1    :6;
    __IO  uint32_t ALPHA      	:8;
}DMA2D_FGPFCCR_TypeDef;/*0x0000001C*/


typedef __IO struct
{
    __IO  uint32_t BLUE      	:8;
    __IO  uint32_t GREEN      	:8;
    __IO  uint32_t RED      	:8;
    	  uint32_t reserved     :8;
}DMA2D_FGCOLR_TypeDef;/*0x00000020*/


typedef __IO struct
{
    __IO  uint32_t CM      		:4;
    __IO  uint32_t CCM      	:1;
    __IO  uint32_t START      	:1;
    	  uint32_t reserved     :2;
    __IO  uint32_t CS      		:8;
    __IO  uint32_t AM      		:2;
    	  uint32_t reserved1    :6;
    __IO  uint32_t ALPHA      	:8;
}DMA2D_BGPFCCR_TypeDef;/*0x00000024*/


typedef __IO struct
{
    __IO  uint32_t BLUE      	:8;
    __IO  uint32_t GREEN      	:8;
    __IO  uint32_t RED      	:8;
    	  uint32_t reserved     :8;
}DMA2D_BGCOLR_TypeDef;/*0x00000028*/


typedef __IO struct
{
    __IO  uint32_t MA      		:32;
}DMA2D_FGCMAR_TypeDef;/*0x0000002C*/


typedef __IO struct
{
    __IO  uint32_t MA      		:32;
}DMA2D_BGCMAR_TypeDef;/*0x00000030*/


typedef __IO struct
{
    __IO  uint32_t CM      		:3;
	      uint32_t reserved    	:29;
}DMA2D_OPFCCR_TypeDef;/*0x00000034*/


typedef __IO struct
{
    __IO  uint32_t BLUE      	:8;
    __IO  uint32_t GREEN      	:8;
    __IO  uint32_t RED      	:8;
    __IO  uint32_t ALPHA      	:8;
}DMA2D_OCOLR_8888_TypeDef;/*0x00000038*/


typedef __IO struct
{
    __IO  uint32_t BLUE      	:4;
    __IO  uint32_t GREEN      	:4;
    __IO  uint32_t RED      	:4;
    __IO  uint32_t ALPHA      	:4;
          uint32_t reserved    	:16;
}DMA2D_OCOLR_4444_TypeDef;/*0x00000038*/


typedef __IO struct
{
    __IO  uint32_t BLUE      	:5;
    __IO  uint32_t GREEN      	:5;
    __IO  uint32_t RED      	:5;
    __IO  uint32_t ALPHA      	:1;
          uint32_t reserved    	:16;
}DMA2D_OCOLR_1555_TypeDef;/*0x00000038*/


typedef __IO struct
{
    __IO  uint32_t BLUE      	:5;
    __IO  uint32_t GREEN      	:6;
    __IO  uint32_t RED      	:5;
          uint32_t reserved    	:16;
}DMA2D_OCOLR_565_TypeDef;/*0x00000038*/


typedef __IO struct
{
    __IO  uint32_t MA      		:32;
}DMA2D_OMAR_TypeDef;/*0x0000003C*/


typedef __IO struct
{
    __IO  uint32_t LO      		:14;
	      uint32_t reserved    	:18;
}DMA2D_OOR_TypeDef;/*0x00000040*/


typedef __IO struct
{
    __IO  uint32_t NL      		:16;
    __IO  uint32_t PL      		:14;
	      uint32_t reserved    	:2;
}DMA2D_NLR_TypeDef;/*0x00000044*/


typedef __IO struct
{
    __IO  uint32_t LW      		:16;
	      uint32_t reserved    	:16;
}DMA2D_LWR_TypeDef;/*0x00000048*/

typedef __IO struct
{
    __IO  uint32_t EN	      	:1;
    	  uint32_t reserved     :7;
    __IO  uint32_t DT	      	:8;
    	  uint32_t reserved1    :16;
}DMA2D_AMTCR_TypeDef;/*0x0000004C*/

/**
  * @brief DMA2D Controller
  */

typedef struct
{
	union
	{
		__IO uint32_t 		CR;            /*!< DMA2D Control Register,                         Address offset: 0x00 */
		DMA2D_CR_TypeDef 	CR_Bit;            /*!< DMA2D Control Register,                         Address offset: 0x00 */
	};
	union
	{
		__IO uint32_t 		ISR;           /*!< DMA2D Interrupt Status Register,                Address offset: 0x04 */
		DMA2D_ISR_TypeDef 	ISR_Bit;           /*!< DMA2D Interrupt Status Register,                Address offset: 0x04 */
	};
	union
	{
		__IO uint32_t 		IFCR;          /*!< DMA2D Interrupt Flag Clear Register,            Address offset: 0x08 */
		DMA2D_IFCR_TypeDef 	IFCR_Bit;          /*!< DMA2D Interrupt Flag Clear Register,            Address offset: 0x08 */
	};
	union
	{
		__IO uint32_t 		FGMAR;         /*!< DMA2D Foreground Memory Address Register,       Address offset: 0x0C */
		DMA2D_FGMAR_TypeDef FGMAR_Bit;         /*!< DMA2D Foreground Memory Address Register,       Address offset: 0x0C */
	};
	union
	{
		__IO uint32_t 		FGOR;          /*!< DMA2D Foreground Offset Register,               Address offset: 0x10 */
		DMA2D_FGOR_TypeDef 	FGOR_Bit;          /*!< DMA2D Foreground Offset Register,               Address offset: 0x10 */
	};
	union
	{
		__IO uint32_t 		BGMAR;         /*!< DMA2D Background Memory Address Register,       Address offset: 0x14 */
		DMA2D_BGMAR_TypeDef BGMAR_Bit;         /*!< DMA2D Background Memory Address Register,       Address offset: 0x14 */
	};
	union
	{
		__IO uint32_t 		BGOR;          /*!< DMA2D Background Offset Register,               Address offset: 0x18 */
		DMA2D_BGOR_TypeDef 	BGOR_Bit;          /*!< DMA2D Background Offset Register,               Address offset: 0x18 */
	};
	union
	{
		__IO uint32_t 			FGPFCCR;       /*!< DMA2D Foreground PFC Control Register,          Address offset: 0x1C */
		DMA2D_FGPFCCR_TypeDef 	FGPFCCR_Bit;       /*!< DMA2D Foreground PFC Control Register,          Address offset: 0x1C */
	};
	union
	{
		__IO uint32_t 			FGCOLR;        /*!< DMA2D Foreground Color Register,                Address offset: 0x20 */
		DMA2D_FGCOLR_TypeDef	FGCOLR_Bit;        /*!< DMA2D Foreground Color Register,                Address offset: 0x20 */
	};
	union
	{
		__IO uint32_t 			BGPFCCR;       /*!< DMA2D Background PFC Control Register,          Address offset: 0x24 */
		DMA2D_BGPFCCR_TypeDef 	BGPFCCR_Bit;       /*!< DMA2D Background PFC Control Register,          Address offset: 0x24 */
	};
	union
	{
		__IO uint32_t 			BGCOLR;        /*!< DMA2D Background Color Register,                Address offset: 0x28 */
		DMA2D_BGCOLR_TypeDef 	BGCOLR_Bit;        /*!< DMA2D Background Color Register,                Address offset: 0x28 */
	};
	union
	{
		__IO uint32_t 			FGCMAR;        /*!< DMA2D Foreground CLUT Memory Address Register,  Address offset: 0x2C */
		DMA2D_FGCMAR_TypeDef 	FGCMAR_Bit;        /*!< DMA2D Foreground CLUT Memory Address Register,  Address offset: 0x2C */
	};
	union
	{
		__IO uint32_t 			BGCMAR;        /*!< DMA2D Background CLUT Memory Address Register,  Address offset: 0x30 */
		DMA2D_BGCMAR_TypeDef 	BGCMAR_Bit;        /*!< DMA2D Background CLUT Memory Address Register,  Address offset: 0x30 */
	};
	union
	{
		__IO uint32_t 			OPFCCR;        /*!< DMA2D Output PFC Control Register,              Address offset: 0x34 */
		DMA2D_OPFCCR_TypeDef 	OPFCCR_Bit;        /*!< DMA2D Output PFC Control Register,              Address offset: 0x34 */
	};
	union
	{
		__IO uint32_t 				OCOLR;         /*!< DMA2D Output Color Register,                    Address offset: 0x38 */
		DMA2D_OCOLR_8888_TypeDef 	OCOLR_8888_Bit;         /*!< DMA2D Output Color Register,                    Address offset: 0x38 */
		DMA2D_OCOLR_4444_TypeDef 	OCOLR_4444_Bit;        /*!< DMA2D Output PFC Control Register,              Address offset: 0x34 */
		DMA2D_OCOLR_1555_TypeDef 	OCOLR_1555_Bit;        /*!< DMA2D Output PFC Control Register,              Address offset: 0x34 */
		DMA2D_OCOLR_565_TypeDef 	OCOLR_565_Bit;        /*!< DMA2D Output PFC Control Register,              Address offset: 0x34 */
	};
	union
	{
		__IO uint32_t 			OMAR;          /*!< DMA2D Output Memory Address Register,           Address offset: 0x3C */
		DMA2D_OMAR_TypeDef 		OMAR_Bit;          /*!< DMA2D Output Memory Address Register,           Address offset: 0x3C */
	};
	union
	{
		__IO uint32_t 			OOR;           /*!< DMA2D Output Offset Register,                   Address offset: 0x40 */
		DMA2D_OOR_TypeDef 		OOR_Bit;           /*!< DMA2D Output Offset Register,                   Address offset: 0x40 */
	};
	union
	{
		__IO uint32_t 			NLR;           /*!< DMA2D Number of Line Register,                  Address offset: 0x44 */
		DMA2D_NLR_TypeDef	 	NLR_Bit;           /*!< DMA2D Number of Line Register,                  Address offset: 0x44 */
	};
	union
	{
		__IO uint32_t 			LWR;           /*!< DMA2D Line Watermark Register,                  Address offset: 0x48 */
		DMA2D_LWR_TypeDef 		LWR_Bit;           /*!< DMA2D Line Watermark Register,                  Address offset: 0x48 */
	};
	union
	{
		__IO uint32_t 			AMTCR;         /*!< DMA2D AHB Master Timer Configuration Register,  Address offset: 0x4C */
		DMA2D_AMTCR_TypeDef 	AMTCR_Bit;         /*!< DMA2D AHB Master Timer Configuration Register,  Address offset: 0x4C */
	};
	uint32_t      reserved[236]; /*!< Reserved, 0x50-0x3FF */
	union
	{
		__IO uint32_t 				FGCLUT[256];   /*!< DMA2D Foreground CLUT,                          Address offset:400-7FF */
		DMA2D_OCOLR_8888_TypeDef	FGCLUT_8888[256];
		DMA2D_OCOLR_4444_TypeDef	FGCLUT_4444[256];
		DMA2D_OCOLR_1555_TypeDef	FGCLUT_1555[256];
		DMA2D_OCOLR_565_TypeDef		FGCLUT_565[256];
	};
	union
	{
		__IO uint32_t 				BGCLUT[256];   /*!< DMA2D Background CLUT,                          Address offset:800-BFF */
		DMA2D_OCOLR_8888_TypeDef	BGCLUT_8888[256];
		DMA2D_OCOLR_4444_TypeDef	BGCLUT_4444[256];
		DMA2D_OCOLR_1555_TypeDef	BGCLUT_1555[256];
		DMA2D_OCOLR_565_TypeDef		BGCLUT_565[256];};
} DMA2D_TypeDef;


#define DMA2D               ((DMA2D_TypeDef *)DMA2D_BASE)

#define	DMA2D_CR_OFFSET						((uint32_t)0x00000000)
#define	DMA2D_ISR_OFFSET					((uint32_t)0x00000004)
#define	DMA2D_IFCR_OFFSET					((uint32_t)0x00000008)
#define	DMA2D_FGMAR_OFFSET					((uint32_t)0x0000000C)
#define	DMA2D_FGOR_OFFSET					((uint32_t)0x00000010)
#define	DMA2D_BGMAR_OFFSET					((uint32_t)0x00000014)
#define	DMA2D_BGOR_OFFSET					((uint32_t)0x00000018)
#define	DMA2D_FGPFCCR_OFFSET				((uint32_t)0x0000001C)
#define	DMA2D_FGCOLR_OFFSET					((uint32_t)0x00000020)
#define	DMA2D_BGPFCCR_OFFSET				((uint32_t)0x00000024)
#define	DMA2D_BGCOLR_OFFSET					((uint32_t)0x00000028)
#define	DMA2D_FGCMAR_OFFSET					((uint32_t)0x0000002C)
#define	DMA2D_BGCMAR_OFFSET					((uint32_t)0x00000030)
#define	DMA2D_OPFCCR_OFFSET					((uint32_t)0x00000034)
#define	DMA2D_OCOLR_OFFSET					((uint32_t)0x00000038)
#define	DMA2D_OMAR_OFFSET					((uint32_t)0x0000003C)
#define	DMA2D_OOR_OFFSET					((uint32_t)0x00000040)
#define	DMA2D_NLR_OFFSET					((uint32_t)0x00000044)
#define	DMA2D_LWR_OFFSET					((uint32_t)0x00000048)
#define	DMA2D_AMTCR_OFFSET					((uint32_t)0x0000004C)


/* TODO DMA2D CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_CR            			(((DMA2D_CR_TypeDef*)(DMA2D_BASE+DMA2D_CR_OFFSET )))
#define DMA2D_CR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_CR_OFFSET)))

#define DMA2D_CR_START                     0x00000001U               /*!< Start transfer                          */
#define DMA2D_CR_SUSP                      0x00000002U               /*!< Suspend transfer                        */
#define DMA2D_CR_ABORT                     0x00000004U               /*!< Abort transfer                          */
#define DMA2D_CR_TEIE                      0x00000100U               /*!< Transfer Error Interrupt Enable         */
#define DMA2D_CR_TCIE                      0x00000200U               /*!< Transfer Complete Interrupt Enable      */
#define DMA2D_CR_TWIE                      0x00000400U               /*!< Transfer Watermark Interrupt Enable     */
#define DMA2D_CR_CAEIE                     0x00000800U               /*!< CLUT Access Error Interrupt Enable      */
#define DMA2D_CR_CTCIE                     0x00001000U               /*!< CLUT Transfer Complete Interrupt Enable */
#define DMA2D_CR_CEIE                      0x00002000U               /*!< Configuration Error Interrupt Enable    */
#define DMA2D_CR_MODE                      0x00030000U               /*!< DMA2D Mode[1:0]                         */
#define DMA2D_CR_MODE_0                    0x00010000U               /*!< DMA2D Mode bit 0                        */
#define DMA2D_CR_MODE_1                    0x00020000U               /*!< DMA2D Mode bit 1                        */



/* TODO DMA2D ISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 ISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_ISR            			(((DMA2D_ISR_TypeDef*)(DMA2D_BASE+DMA2D_ISR_OFFSET )))
#define DMA2D_ISR_R          			(*((__I uint32_t *)(DMA2D_BASE+DMA2D_ISR_OFFSET)))

#define DMA2D_ISR_TEIF                     0x00000001U               /*!< Transfer Error Interrupt Flag         */
#define DMA2D_ISR_TCIF                     0x00000002U               /*!< Transfer Complete Interrupt Flag      */
#define DMA2D_ISR_TWIF                     0x00000004U               /*!< Transfer Watermark Interrupt Flag     */
#define DMA2D_ISR_CAEIF                    0x00000008U               /*!< CLUT Access Error Interrupt Flag      */
#define DMA2D_ISR_CTCIF                    0x00000010U               /*!< CLUT Transfer Complete Interrupt Flag */
#define DMA2D_ISR_CEIF                     0x00000020U               /*!< Configuration Error Interrupt Flag    */


/* TODO DMA2D IFCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 IFCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_IFCR            			(((DMA2D_IFCR_TypeDef*)(DMA2D_BASE+DMA2D_IFCR_OFFSET )))
#define DMA2D_IFCR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_IFCR_OFFSET)))

#define DMA2D_IFCR_CTEIF                   0x00000001U               /*!< Clears Transfer Error Interrupt Flag         */
#define DMA2D_IFCR_CTCIF                   0x00000002U               /*!< Clears Transfer Complete Interrupt Flag      */
#define DMA2D_IFCR_CTWIF                   0x00000004U               /*!< Clears Transfer Watermark Interrupt Flag     */
#define DMA2D_IFCR_CAECIF                  0x00000008U               /*!< Clears CLUT Access Error Interrupt Flag      */
#define DMA2D_IFCR_CCTCIF                  0x00000010U               /*!< Clears CLUT Transfer Complete Interrupt Flag */
#define DMA2D_IFCR_CCEIF                   0x00000020U               /*!< Clears Configuration Error Interrupt Flag    */

/* Legacy defines */
#define DMA2D_IFSR_CTEIF                   DMA2D_IFCR_CTEIF                     /*!< Clears Transfer Error Interrupt Flag         */
#define DMA2D_IFSR_CTCIF                   DMA2D_IFCR_CTCIF                     /*!< Clears Transfer Complete Interrupt Flag      */
#define DMA2D_IFSR_CTWIF                   DMA2D_IFCR_CTWIF                     /*!< Clears Transfer Watermark Interrupt Flag     */
#define DMA2D_IFSR_CCAEIF                  DMA2D_IFCR_CAECIF                    /*!< Clears CLUT Access Error Interrupt Flag      */
#define DMA2D_IFSR_CCTCIF                  DMA2D_IFCR_CCTCIF                    /*!< Clears CLUT Transfer Complete Interrupt Flag */
#define DMA2D_IFSR_CCEIF                   DMA2D_IFCR_CCEIF                     /*!< Clears Configuration Error Interrupt Flag    */

/* TODO DMA2D FGMAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 FGMAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_FGMAR            			(((DMA2D_FGMAR_TypeDef*)(DMA2D_BASE+DMA2D_FGMAR_OFFSET )))
#define DMA2D_FGMAR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_FGMAR_OFFSET)))


#define DMA2D_FGMAR_MA                     0xFFFFFFFFU               /*!< Memory Address */

/* TODO DMA2D FGOR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 FGOR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_FGOR            			(((DMA2D_FGOR_TypeDef*)(DMA2D_BASE+DMA2D_FGOR_OFFSET )))
#define DMA2D_FGOR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_FGOR_OFFSET)))

#define DMA2D_FGOR_LO                      0x00003FFFU               /*!< Line Offset */

/* TODO DMA2D BGMAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 BGMAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_BGMAR            			(((DMA2D_BGMAR_TypeDef*)(DMA2D_BASE+DMA2D_BGMAR_OFFSET )))
#define DMA2D_BGMAR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_BGMAR_OFFSET)))

#define DMA2D_BGMAR_MA                     0xFFFFFFFFU               /*!< Memory Address */

/* TODO DMA2D BGOR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 BGOR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_BGOR            			(((DMA2D_BGOR_TypeDef*)(DMA2D_BASE+DMA2D_BGOR_OFFSET )))
#define DMA2D_BGOR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_BGOR_OFFSET)))

#define DMA2D_BGOR_LO                      0x00003FFFU               /*!< Line Offset */

/* TODO DMA2D FGPFCCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 8 FGPFCCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_FGPFCCR            			(((DMA2D_FGPFCCR_TypeDef*)(DMA2D_BASE+DMA2D_FGPFCCR_OFFSET )))
#define DMA2D_FGPFCCR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_FGPFCCR_OFFSET)))

#define DMA2D_FGPFCCR_CM                   0x0000000FU               /*!< Input color mode CM[3:0] */
#define DMA2D_FGPFCCR_CM_0                 0x00000001U               /*!< Input color mode CM bit 0 */
#define DMA2D_FGPFCCR_CM_1                 0x00000002U               /*!< Input color mode CM bit 1 */
#define DMA2D_FGPFCCR_CM_2                 0x00000004U               /*!< Input color mode CM bit 2 */
#define DMA2D_FGPFCCR_CM_3                 0x00000008U               /*!< Input color mode CM bit 3 */
#define DMA2D_FGPFCCR_CCM                  0x00000010U               /*!< CLUT Color mode */
#define DMA2D_FGPFCCR_START                0x00000020U               /*!< Start */
#define DMA2D_FGPFCCR_CS                   0x0000FF00U               /*!< CLUT size */
#define DMA2D_FGPFCCR_AM                   0x00030000U               /*!< Alpha mode AM[1:0] */
#define DMA2D_FGPFCCR_AM_0                 0x00010000U               /*!< Alpha mode AM bit 0 */
#define DMA2D_FGPFCCR_AM_1                 0x00020000U               /*!< Alpha mode AM bit 1 */
#define DMA2D_FGPFCCR_ALPHA                0xFF000000U               /*!< Alpha value */

/* TODO DMA2D FGCOLR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 9 FGCOLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_FGCOLR            			(((DMA2D_FGCOLR_TypeDef*)(DMA2D_BASE+DMA2D_FGCOLR_OFFSET )))
#define DMA2D_FGCOLR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_FGCOLR_OFFSET)))

#define DMA2D_FGCOLR_BLUE                  0x000000FFU               /*!< Blue Value */
#define DMA2D_FGCOLR_GREEN                 0x0000FF00U               /*!< Green Value */
#define DMA2D_FGCOLR_RED                   0x00FF0000U               /*!< Red Value */


/* TODO DMA2D BGPFCCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 10 BGPFCCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_BGPFCCR            			(((DMA2D_BGPFCCR_TypeDef*)(DMA2D_BASE+DMA2D_BGPFCCR_OFFSET )))
#define DMA2D_BGPFCCR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_BGPFCCR_OFFSET)))

#define DMA2D_BGPFCCR_CM                   0x0000000FU               /*!< Input color mode CM[3:0] */
#define DMA2D_BGPFCCR_CM_0                 0x00000001U               /*!< Input color mode CM bit 0 */
#define DMA2D_BGPFCCR_CM_1                 0x00000002U               /*!< Input color mode CM bit 1 */
#define DMA2D_BGPFCCR_CM_2                 0x00000004U               /*!< Input color mode CM bit 2 */
#define DMA2D_FGPFCCR_CM_3                 0x00000008U               /*!< Input color mode CM bit 3 */
#define DMA2D_BGPFCCR_CCM                  0x00000010U               /*!< CLUT Color mode */
#define DMA2D_BGPFCCR_START                0x00000020U               /*!< Start */
#define DMA2D_BGPFCCR_CS                   0x0000FF00U               /*!< CLUT size */
#define DMA2D_BGPFCCR_AM                   0x00030000U               /*!< Alpha mode AM[1:0] */
#define DMA2D_BGPFCCR_AM_0                 0x00010000U               /*!< Alpha mode AM bit 0 */
#define DMA2D_BGPFCCR_AM_1                 0x00020000U               /*!< Alpha mode AM bit 1 */
#define DMA2D_BGPFCCR_ALPHA                0xFF000000U               /*!< background Input Alpha value */

/* TODO DMA2D BGCOLR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 11 BGCOLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_BGCOLR            			(((DMA2D_BGCOLR_TypeDef*)(DMA2D_BASE+DMA2D_BGCOLR_OFFSET )))
#define DMA2D_BGCOLR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_BGCOLR_OFFSET)))

#define DMA2D_BGCOLR_BLUE                  0x000000FFU               /*!< Blue Value */
#define DMA2D_BGCOLR_GREEN                 0x0000FF00U               /*!< Green Value */
#define DMA2D_BGCOLR_RED                   0x00FF0000U               /*!< Red Value */

/* TODO DMA2D FGCMAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 12 FGCMAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_FGCMAR            			(((DMA2D_FGCMAR_TypeDef*)(DMA2D_BASE+DMA2D_FGCMAR_OFFSET )))
#define DMA2D_FGCMAR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_FGCMAR_OFFSET)))

#define DMA2D_FGCMAR_MA                    0xFFFFFFFFU               /*!< Memory Address */


/* TODO DMA2D BGCMAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 13 BGCMAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_BGCMAR            			(((DMA2D_BGCMAR_TypeDef*)(DMA2D_BASE+DMA2D_BGCMAR_OFFSET )))
#define DMA2D_BGCMAR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_BGCMAR_OFFSET)))

#define DMA2D_BGCMAR_MA                    0xFFFFFFFFU               /*!< Memory Address */


/* TODO DMA2D OPFCCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 14 OPFCCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_OPFCCR            			(((DMA2D_OPFCCR_TypeDef*)(DMA2D_BASE+DMA2D_OPFCCR_OFFSET )))
#define DMA2D_OPFCCR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_OPFCCR_OFFSET)))

#define DMA2D_OPFCCR_CM                    0x00000007U               /*!< Color mode CM[2:0] */
#define DMA2D_OPFCCR_CM_0                  0x00000001U               /*!< Color mode CM bit 0 */
#define DMA2D_OPFCCR_CM_1                  0x00000002U               /*!< Color mode CM bit 1 */
#define DMA2D_OPFCCR_CM_2                  0x00000004U               /*!< Color mode CM bit 2 */


/* TODO DMA2D OCOLR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 15 OCOLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_OCOLR            			(((DMA2D_OCOLR_TypeDef*)(DMA2D_BASE+DMA2D_OCOLR_OFFSET )))
#define DMA2D_OCOLR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_OCOLR_OFFSET)))

/*!<Mode_ARGB8888/RGB888 */

#define DMA2D_OCOLR_BLUE_1                 0x000000FFU               /*!< BLUE Value */
#define DMA2D_OCOLR_GREEN_1                0x0000FF00U               /*!< GREEN Value  */
#define DMA2D_OCOLR_RED_1                  0x00FF0000U               /*!< Red Value */
#define DMA2D_OCOLR_ALPHA_1                0xFF000000U               /*!< Alpha Channel Value */

/*!<Mode_RGB565 */
#define DMA2D_OCOLR_BLUE_2                 0x0000001FU               /*!< BLUE Value */
#define DMA2D_OCOLR_GREEN_2                0x000007E0U               /*!< GREEN Value  */
#define DMA2D_OCOLR_RED_2                  0x0000F800U               /*!< Red Value */

/*!<Mode_ARGB1555 */
#define DMA2D_OCOLR_BLUE_3                 0x0000001FU               /*!< BLUE Value */
#define DMA2D_OCOLR_GREEN_3                0x000003E0U               /*!< GREEN Value  */
#define DMA2D_OCOLR_RED_3                  0x00007C00U               /*!< Red Value */
#define DMA2D_OCOLR_ALPHA_3                0x00008000U               /*!< Alpha Channel Value */

/*!<Mode_ARGB4444 */
#define DMA2D_OCOLR_BLUE_4                 0x0000000FU               /*!< BLUE Value */
#define DMA2D_OCOLR_GREEN_4                0x000000F0U               /*!< GREEN Value  */
#define DMA2D_OCOLR_RED_4                  0x00000F00U               /*!< Red Value */
#define DMA2D_OCOLR_ALPHA_4                0x0000F000U               /*!< Alpha Channel Value */

/* TODO DMA2D OMAR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 16 OMAR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_OMAR            			(((DMA2D_OMAR_TypeDef*)(DMA2D_BASE+DMA2D_OMAR_OFFSET )))
#define DMA2D_OMAR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_OMAR_OFFSET)))

#define DMA2D_OMAR_MA                      0xFFFFFFFFU               /*!< Memory Address */

/* TODO DMA2D OOR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 17 OOR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_OOR            			(((DMA2D_OOR_TypeDef*)(DMA2D_BASE+DMA2D_OOR_OFFSET )))
#define DMA2D_OOR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_OOR_OFFSET)))

#define DMA2D_OOR_LO                       0x00003FFFU               /*!< Line Offset */

/* TODO DMA2D NLR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 18 NLR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_NLR            			(((DMA2D_NLR_TypeDef*)(DMA2D_BASE+DMA2D_NLR_OFFSET )))
#define DMA2D_NLR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_NLR_OFFSET)))

#define DMA2D_NLR_NL                       0x0000FFFFU               /*!< Number of Lines */
#define DMA2D_NLR_PL                       0x3FFF0000U               /*!< Pixel per Lines */

/* TODO DMA2D LWR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 19 LWR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_LWR            			(((DMA2D_LWR_TypeDef*)(DMA2D_BASE+DMA2D_LWR_OFFSET )))
#define DMA2D_LWR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_LWR_OFFSET)))

#define DMA2D_LWR_LW                       0x0000FFFFU               /*!< Line Watermark */

/* TODO DMA2D AMTCR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 20 AMTCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define DMA2D_AMTCR            			(((DMA2D_AMTCR_TypeDef*)(DMA2D_BASE+DMA2D_AMTCR_OFFSET )))
#define DMA2D_AMTCR_R          			(*((__IO uint32_t *)(DMA2D_BASE+DMA2D_AMTCR_OFFSET)))

#define DMA2D_AMTCR_EN                     0x00000001U               /*!< Enable */
#define DMA2D_AMTCR_DT                     0x0000FF00U               /*!< Dead Time */



/*TODO Functions */

uint32_t DMA2D_Init(void);
uint32_t DMA2D_DeInit(void);

uint32_t DMA2D_Ready(void);
uint32_t DMA2D_SetWait(void);
uint32_t DMA2D_ClearWait(void);

#endif /* DMA2D_H_ */
