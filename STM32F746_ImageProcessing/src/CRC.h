/*
 * CRC.h
 *
 *  Created on: 27 jul. 2018
 *      Author: InDev
 */

#ifndef CRC_H_
#define CRC_H_

#include "Core.h"
#include <stdint.h>

#define CRC_BASE            ((uint32_t)0x40023000)
#define CRC_OFFSET          ((uint32_t)0x00023000)



typedef __IO struct
{
	__IO uint32_t	DR		:32;
}CRC_DR_TypeDef;

typedef __IO struct
{
	__IO uint32_t	DR8		:8;
		 uint32_t   reserved:24;
}CRC_DR8_TypeDef;

typedef __IO struct
{
	__IO uint32_t	DR16		:16;
	     uint32_t   reserved	:16;
}CRC_DR16_TypeDR16;


typedef __IO struct
{
	__IO uint32_t	IDR		:8;
	     uint32_t	reserved:24;
}CRC_IDR_TypeDef;

typedef __IO struct
{
	__IO uint32_t	RESET	:1;
    	 uint32_t	reserved:2;
	__IO uint32_t	POLYSIZE:2;
	__IO uint32_t	REV_IN	:2;
	__IO uint32_t	REV_OUT	:1;
    	 uint32_t	reserved1:24;
}CRC_CR_TypeDef;

typedef __IO struct
{
	__IO uint32_t	CRC_INIT:32;
}CRC_INIT_TypeDef;

typedef __IO struct
{
	__IO uint32_t	POL:32;
}CRC_POL_TypeDef;


typedef struct
{
	union
	{
		__IO uint32_t 		DR;         /*!< CRC Data register,             Address offset: 0x00 */
		CRC_DR_TypeDef		DR_Bit;
	};
	union
	{
		__IO uint32_t  		IDR;        /*!< CRC Independent data register, Address offset: 0x04 */
		CRC_IDR_TypeDef		IDR_Bit;
	};
	union
	{
		__IO uint32_t 		CR;         /*!< CRC Control register,          Address offset: 0x08 */
		CRC_CR_TypeDef		CR_Bit;
	};
	uint32_t 				reserved;   /*!< Reserved,                                                    0x0C */
	union
	{
		__IO uint32_t  		INIT;        /*!< Initial CRC value register,                  Address offset: 0x10 */
		CRC_INIT_TypeDef  	INIT_Bit;        /*!< Initial CRC value register,                  Address offset: 0x10 */
	};
	union
	{
		__IO uint32_t  		POL;         /*!< CRC polynomial register,                     Address offset: 0x14 */
		CRC_POL_TypeDef  	POL_Bit;         /*!< CRC polynomial register,                     Address offset: 0x14 */
	};
}CRC_TypeDef;



#define CRC                 ((CRC_TypeDef *) CRC_BASE)

#define CRC_DR_OFFSET		((uint32_t)0x00000000)
#define CRC_IDR_OFFSET		((uint32_t)0x00000004)
#define CRC_CR_OFFSET		((uint32_t)0x00000008)
#define CRC_INIT_OFFSET		((uint32_t)0x00000010)
#define CRC_POL_OFFSET		((uint32_t)0x00000014)


/* TODO DR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 DR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define CRC_DR            					(((CRC_DR_TypeDef*)(CRC_BASE+CRC_DR_OFFSET )))
#define CRC_DR_R          					(*((__IO uint32_t *)(CRC_BASE+CRC_DR_OFFSET)))

/*--------*/
#define CRC_DR_R_DR_MASK    		((uint32_t)0xFFFFFFFF)
#define CRC_DR_R_DR_BIT     		(0)

#define CRC_DR_DR_MASK    			((uint32_t)0xFFFFFFFF)
/*--------*/

/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 DR8 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define CRC_DR8            					(((CRC_DR8_TypeDef*)(CRC_BASE+CRC_DR_OFFSET )))
#define CRC_DR8_R          					(*((__IO uint8_t *)(CRC_BASE+CRC_DR_OFFSET)))

/*--------*/
#define CRC_DR8_R_DR8_MASK    		((uint32_t)0x000000FF)
#define CRC_DR8_R_DR8_BIT     		(0)

#define CRC_DR8_DR8_MASK    		((uint32_t)0x000000FF)
/*--------*/


/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 DR16 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define CRC_DR16            					(((CRC_DR16_TypeDef*)(CRC_BASE+CRC_DR_OFFSET )))
#define CRC_DR16_R          					(*((__IO uint16_t *)(CRC_BASE+CRC_DR_OFFSET)))

/*--------*/
#define CRC_DR16_R_DR16_MASK    		((uint32_t)0x0000FFFF)
#define CRC_DR16_R_DR16_BIT     		(0)

#define CRC_DR16_DR16_MASK    			((uint32_t)0x0000FFFF)
/*--------*/

/* TODO IDR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 IDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define CRC_IDR            					(((CRC_IDR_TypeDef*)(CRC_BASE+CRC_IDR_OFFSET )))
#define CRC_IDR_R          					(*((__IO uint32_t *)(CRC_BASE+CRC_IDR_OFFSET)))

/*--------*/
#define CRC_IDR_R_IDR_MASK    			((uint32_t)0x000000FF)
#define CRC_IDR_R_IDR_BIT     			(0)

#define CRC_IDR_IDR_MASK    			((uint32_t)0x000000FF)
/*--------*/


/* TODO CR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define CRC_CR            					(((CRC_CR_TypeDef*)(CRC_BASE+CRC_CR_OFFSET )))
#define CRC_CR_R          					(*((__IO uint32_t *)(CRC_BASE+CRC_CR_OFFSET)))


/*--------*/
#define CRC_CR_R_RESET_MASK    			((uint32_t)0x00000001)
#define CRC_CR_R_RESET_BIT     			(0)
#define CRC_CR_R_RESET_NA    			((uint32_t)0x00000000)
#define CRC_CR_R_RESET_RESET			((uint32_t)0x00000001)

#define CRC_CR_RESET_MASK    			((uint32_t)0x00000001)
#define CRC_CR_RESET_NA		   			((uint32_t)0x00000000)
#define CRC_CR_RESET_RESET   			((uint32_t)0x00000001)
/*--------*/


/*--------*/
#define CRC_CR_R_POLYSIZE_MASK    			((uint32_t)0x00000018)
#define CRC_CR_R_POLYSIZE_BIT     			(3)
#define CRC_CR_R_POLYSIZE_32    			((uint32_t)0x00000000)
#define CRC_CR_R_POLYSIZE_16				((uint32_t)0x00000008)
#define CRC_CR_R_POLYSIZE_8					((uint32_t)0x00000010)
#define CRC_CR_R_POLYSIZE_7					((uint32_t)0x00000018)

#define CRC_CR_POLYSIZE_MASK    			((uint32_t)0x00000003)
#define CRC_CR_POLYSIZE_32		   			((uint32_t)0x00000000)
#define CRC_CR_POLYSIZE_16		   			((uint32_t)0x00000001)
#define CRC_CR_POLYSIZE_8		   			((uint32_t)0x00000002)
#define CRC_CR_POLYSIZE_7		   			((uint32_t)0x00000003)
/*--------*/



/*--------*/
#define CRC_CR_R_REV_IN_MASK    			((uint32_t)0x00000060)
#define CRC_CR_R_REV_IN_BIT     			(5)
#define CRC_CR_R_REV_IN_NA    				((uint32_t)0x00000000)
#define CRC_CR_R_REV_IN_BYTE				((uint32_t)0x00000020)
#define CRC_CR_R_REV_IN_HALf_WORD			((uint32_t)0x00000040)
#define CRC_CR_R_REV_IN_WORD				((uint32_t)0x00000060)

#define CRC_CR_REV_IN_MASK    				((uint32_t)0x00000003)
#define CRC_CR_REV_IN_NA		   			((uint32_t)0x00000000)
#define CRC_CR_REV_IN_BYTE		   			((uint32_t)0x00000001)
#define CRC_CR_REV_IN_HALF_WORD   			((uint32_t)0x00000002)
#define CRC_CR_REV_IN_WORD		   			((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define CRC_CR_R_REV_OUT_MASK    			((uint32_t)0x00000080)
#define CRC_CR_R_REV_OUT_BIT     			(7)
#define CRC_CR_R_REV_OUT_NORMAL    			((uint32_t)0x00000000)
#define CRC_CR_R_REV_OUT_REVERSED			((uint32_t)0x00000080)

#define CRC_CR_REV_OUT_MASK    				((uint32_t)0x00000001)
#define CRC_CR_REV_OUT_NORMAL		   		((uint32_t)0x00000000)
#define CRC_CR_REV_OUT_REVERSED		   		((uint32_t)0x00000001)
/*--------*/


/* TODO INIT */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 INIT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define CRC_INIT            					(((CRC_INIT_TypeDef*)(CRC_BASE+CRC_INIT_OFFSET )))
#define CRC_INIT_R          					(*((__IO uint32_t *)(CRC_BASE+CRC_INIT_OFFSET)))

/*--------*/
#define CRC_INIT_R_INIT_MASK    			((uint32_t)0xFFFFFFFF)
#define CRC_INIT_R_INIT_BIT     			(0)

#define CRC_INIT_INIT_MASK    				((uint32_t)0xFFFFFFFF)
/*--------*/


/* TODO POL */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 POL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define CRC_POL            					(((CRC_POL_TypeDef*)(CRC_BASE+CRC_POL_OFFSET )))
#define CRC_POL_R          					(*((__IO uint32_t *)(CRC_BASE+CRC_POL_OFFSET)))

/*--------*/
#define CRC_POL_R_POL_MASK    				((uint32_t)0xFFFFFFFF)
#define CRC_POL_R_POL_BIT     				(0)

#define CRC_POL_POL_MASK    				((uint32_t)0xFFFFFFFF)
/*--------*/


#endif /* CRC_H_ */
