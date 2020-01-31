/*
 * FLASH.h
 *
 *  Created on: 5 ago. 2018
 *      Author: InDev
 */

#ifndef FLASH_H_
#define FLASH_H_

#include "Core.h"
#include <stdint.h>                      		/* standard types definitions                      */

/**
  * @brief FLASH Registers
  */

#define FLASHITCM_BASE         0x00200000U /*!< Base address of : (up to 1 MB) embedded FLASH memory  accessible over ITCM              */
#define FLASHAXI_BASE          0x08000000U /*!< Base address of : (up to 1 MB) embedded FLASH memory accessible over AXI                */
#define FLASH_BASE     		   FLASHAXI_BASE
#define FLASH_END              0x080FFFFFU /*!< FLASH end address */


#define FLASH_R_BASE          ((uint32_t)0x40023C00U)

#define UID_BASE              0x1FF0F420U                   /*!< Unique device ID register base address */
#define FLASHSIZE_BASE        0x1FF0F442U                   /*!< FLASH Size register base address */
#define PACKAGESIZE_BASE      0x1FFF7BF0U                   /*!< Package size register base address */


#define FLASH_SECTOR_TOTAL  8

typedef __IO struct
{
    __IO  uint32_t LATENCY      	:4;
    	  uint32_t reserved		  	:4;
    __IO  uint32_t PRFTEN       	:1;
    __IO  uint32_t ARTEN        	:1;
	      uint32_t reserved1	  	:1;
	__IO  uint32_t ARTRST        	:1;
	      uint32_t reserved2	  	:20;
}FLASH_ACR_TypeDef;

typedef __IO struct
{
    __IO  uint32_t KEY      		:32;
}FLASH_KEYR_TypeDef;

typedef __IO struct
{
    __IO  uint32_t OPTKEYR      	:32;
}FLASH_OPTKEYR_TypeDef;


typedef __IO struct
{
    __IO  uint32_t EOP		      	:1;
    __IO  uint32_t OPERR	      	:1;
    	  uint32_t reserved		  	:2;
    __IO  uint32_t WRPERR       	:1;
    __IO  uint32_t PGAERR        	:1;
    __IO  uint32_t PGPERR        	:1;
    __IO  uint32_t ERSERR        	:1;
	      uint32_t reserved1	  	:8;
	__I   uint32_t BSY        		:1;
	      uint32_t reserved2	  	:15;
}FLASH_SR_TypeDef;



typedef __IO struct
{
    __IO  uint32_t PG		      	:1;
    __IO  uint32_t SER		      	:1;
    __IO  uint32_t MER		      	:1;
    __IO  uint32_t SNB		      	:4;
	      uint32_t reserved		  	:1;
    __IO  uint32_t PSIZE		  	:2;
    	  uint32_t reserved1	  	:6;
    __IO  uint32_t STRT		       	:1;
	      uint32_t reserved2	  	:7;
    __IO  uint32_t EOPIE        	:1;
    __IO  uint32_t ERRIE        	:1;
	      uint32_t reserved3	  	:5;
	__IO  uint32_t LOCK        		:1;
}FLASH_CR_TypeDef;


typedef __IO struct
{
    __IO  uint32_t OPTLOCK		    :1;
    __IO  uint32_t OPTSTRT		    :1;
    __IO  uint32_t BOR_LEV		    :2;
    __IO  uint32_t WWDG_SW	      	:1;
    __IO  uint32_t IWDG_SW	      	:1;
    __IO  uint32_t nRST_STOP      	:1;
    __IO  uint32_t nRST_STDBY      	:1;
    __IO  uint32_t RDP		      	:8;
    __IO  uint32_t nWRP		      	:8;
	      uint32_t reserved		  	:6;
    __IO  uint32_t IWDG_STDBY	  	:1;
    __IO  uint32_t IWDG_STOP	  	:1;
}FLASH_OPTCR_TypeDef;


typedef __IO struct
{
    __IO  uint32_t BOOT_ADD0		:16;
    __IO  uint32_t BOOT_ADD1		:16;
}FLASH_OPTCR1_TypeDef;

typedef struct
{
  union
  {
	  __IO uint32_t 		ACR;      /*!< FLASH access control register,     Address offset: 0x00 */
	  FLASH_ACR_TypeDef		ACR_Bit;
  };
  union
  {
	  __IO uint32_t 		KEYR;     /*!< FLASH key register,                Address offset: 0x04 */
	  FLASH_KEYR_TypeDef	KEYR_Bit;
  };
  union
  {
	  __IO uint32_t 		OPTKEYR;  /*!< FLASH option key register,         Address offset: 0x08 */
	  FLASH_OPTKEYR_TypeDef	OPTKEYR_Bit;
  };
  union
  {
	  __IO uint32_t 		SR;       /*!< FLASH status register,             Address offset: 0x0C */
	  FLASH_SR_TypeDef		SR_Bit;
  };
  union
  {
	  __IO uint32_t 		CR;       /*!< FLASH control register,            Address offset: 0x10 */
	  FLASH_CR_TypeDef		CR_Bit;
  };
  union
  {
	  __IO uint32_t 		OPTCR;    /*!< FLASH option control register ,    Address offset: 0x14 */
	  FLASH_OPTCR_TypeDef	OPTCR_Bit;
  };
  union
  {
	  __IO uint32_t 		OPTCR1;   /*!< FLASH option control register 1 ,  Address offset: 0x18 */
	  FLASH_OPTCR1_TypeDef	OPTCR1_Bit;
  };
} FLASH_TypeDef;



#define FLASH               ((FLASH_TypeDef *) FLASH_R_BASE)

#define FLASH_ACR_OFFSET      ((uint32_t)0x0000)
#define FLASH_KEYR_OFFSET     ((uint32_t)0x0004)
#define FLASH_OPTKEYR_OFFSET  ((uint32_t)0x0008)
#define FLASH_SR_OFFSET       ((uint32_t)0x000C)
#define FLASH_CR_OFFSET       ((uint32_t)0x0010)
#define FLASH_OPTCR_OFFSET    ((uint32_t)0x0014)
#define FLASH_OPTCR1_OFFSET   ((uint32_t)0x0018)


/*TODO ACR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 ACR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FLASH_ACR            (((FLASH_ACR_TypeDef*)(FLASH_R_BASE+FLASH_ACR_OFFSET )))
#define FLASH_ACR_R          (*((__IO uint32_t *)(FLASH_R_BASE+FLASH_ACR_OFFSET)))


/*--------*/
#define FLASH_ACR_R_LATENCY_MASK    	((uint32_t)0x0000000F)
#define FLASH_ACR_R_LATENCY_BIT     	(0)
#define FLASH_ACR_R_LATENCY_0WS     	((uint32_t)0x00000000)
#define FLASH_ACR_R_LATENCY_1WS		   	((uint32_t)0x00000001)
#define FLASH_ACR_R_LATENCY_2WS     	((uint32_t)0x00000002)
#define FLASH_ACR_R_LATENCY_3WS     	((uint32_t)0x00000003)
#define FLASH_ACR_R_LATENCY_4WS     	((uint32_t)0x00000004)
#define FLASH_ACR_R_LATENCY_5WS     	((uint32_t)0x00000005)
#define FLASH_ACR_R_LATENCY_6WS     	((uint32_t)0x00000006)
#define FLASH_ACR_R_LATENCY_7WS     	((uint32_t)0x00000007)
#define FLASH_ACR_R_LATENCY_8WS     	((uint32_t)0x00000008)
#define FLASH_ACR_R_LATENCY_9WS		   	((uint32_t)0x00000009)
#define FLASH_ACR_R_LATENCY_10WS     	((uint32_t)0x0000000A)
#define FLASH_ACR_R_LATENCY_11WS     	((uint32_t)0x0000000B)
#define FLASH_ACR_R_LATENCY_12WS     	((uint32_t)0x0000000C)
#define FLASH_ACR_R_LATENCY_13WS     	((uint32_t)0x0000000D)
#define FLASH_ACR_R_LATENCY_14WS     	((uint32_t)0x0000000E)
#define FLASH_ACR_R_LATENCY_15WS     	((uint32_t)0x0000000F)

#define FLASH_ACR_LATENCY_MASK    		((uint32_t)0x0000000F)
#define FLASH_ACR_LATENCY_0WS     		((uint32_t)0x00000000)
#define FLASH_ACR_LATENCY_1WS		   	((uint32_t)0x00000001)
#define FLASH_ACR_LATENCY_2WS     		((uint32_t)0x00000002)
#define FLASH_ACR_LATENCY_3WS     		((uint32_t)0x00000003)
#define FLASH_ACR_LATENCY_4WS     		((uint32_t)0x00000004)
#define FLASH_ACR_LATENCY_5WS     		((uint32_t)0x00000005)
#define FLASH_ACR_LATENCY_6WS     		((uint32_t)0x00000006)
#define FLASH_ACR_LATENCY_7WS     		((uint32_t)0x00000007)
#define FLASH_ACR_LATENCY_8WS     		((uint32_t)0x00000008)
#define FLASH_ACR_LATENCY_9WS		   	((uint32_t)0x00000009)
#define FLASH_ACR_LATENCY_10WS     		((uint32_t)0x0000000A)
#define FLASH_ACR_LATENCY_11WS     		((uint32_t)0x0000000B)
#define FLASH_ACR_LATENCY_12WS     		((uint32_t)0x0000000C)
#define FLASH_ACR_LATENCY_13WS     		((uint32_t)0x0000000D)
#define FLASH_ACR_LATENCY_14WS     		((uint32_t)0x0000000E)
#define FLASH_ACR_LATENCY_15WS     		((uint32_t)0x0000000F)
/*--------*/

/*--------*/
#define FLASH_ACR_R_PRFTEN_MASK    		((uint32_t)0x00000100)
#define FLASH_ACR_R_PRFTEN_BIT     		(8)
#define FLASH_ACR_R_PRFTEN_DIS     		((uint32_t)0x00000000)
#define FLASH_ACR_R_PRFTEN_EN		   	((uint32_t)0x00000100)

#define FLASH_ACR_PRFTEN_MASK    		((uint32_t)0x00000001)
#define FLASH_ACR_PRFTEN_DIS    		((uint32_t)0x00000000)
#define FLASH_ACR_PRFTEN_EN 		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_ACR_R_ARTEN_MASK    		((uint32_t)0x00000200)
#define FLASH_ACR_R_ARTEN_BIT     		(9)
#define FLASH_ACR_R_ARTEN_DIS     		((uint32_t)0x00000000)
#define FLASH_ACR_R_ARTEN_EN		   	((uint32_t)0x00000200)

#define FLASH_ACR_ARTEN_MASK    		((uint32_t)0x00000001)
#define FLASH_ACR_ARTEN_DIS    			((uint32_t)0x00000000)
#define FLASH_ACR_ARTEN_EN 		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_ACR_R_ARTRST_MASK    		((uint32_t)0x00000800)
#define FLASH_ACR_R_ARTRST_BIT     		(11)
#define FLASH_ACR_R_ARTRST_NORESET 		((uint32_t)0x00000000)
#define FLASH_ACR_R_ARTRST_RESET	   	((uint32_t)0x00000800)

#define FLASH_ACR_ARTRST_MASK    		((uint32_t)0x00000001)
#define FLASH_ACR_ARTRST_NORESET		((uint32_t)0x00000000)
#define FLASH_ACR_ARTRST_RESET	   		((uint32_t)0x00000001)
/*--------*/


/*TODO KEYR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 KEYR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FLASH_KEYR            (((FLASH_KEYR_TypeDef*)(FLASH_R_BASE+FLASH_KEYR_OFFSET )))
#define FLASH_KEYR_R          (*((__IO uint32_t *)(FLASH_R_BASE+FLASH_KEYR_OFFSET)))


typedef enum
{
	FLASH_KEYR_KEY1=0x45670123,
	FLASH_KEYR_KEY2=0xCDEF89AB,
}FLASH_KEYR_Type;

/*--------*/
#define FLASH_KEYR_R_KEY_MASK    		((uint32_t)0xFFFFFFFF)
#define FLASH_KEYR_R_KEY_BIT     		(0)
#define FLASH_KEYR_R_KEY_KEY1	 		((uint32_t)0x45670123)
#define FLASH_KEYR_R_KEY_KEY2	   		((uint32_t)0xCDEF89AB)

#define FLASH_KEYR_KEY_MASK    			((uint32_t)0xFFFFFFFF)
#define FLASH_KEYR_KEY_KEY1				((uint32_t)0x45670123)
#define FLASH_KEYR_KEY_KEY2		   		((uint32_t)0xCDEF89AB)
/*--------*/

/*TODO OPTKEYR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 OPTKEYR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FLASH_OPTKEYR            (((FLASH_OPTKEYR_TypeDef*)(FLASH_R_BASE+FLASH_OPTKEYR_OFFSET )))
#define FLASH_OPTKEYR_R          (*((__IO uint32_t *)(FLASH_R_BASE+FLASH_OPTKEYR_OFFSET)))


typedef enum
{
	FLASH_OPTKEYR_OPTKEY1=0x08192A3B,
	FLASH_OPTKEYR_OPTKEY2=0x4C5D6E7F,
}FLASH_OPTKEYR_Type;

/*--------*/
#define FLASH_OPTKEYR_R_OPTKEYR_MASK    		((uint32_t)0xFFFFFFFF)
#define FLASH_OPTKEYR_R_OPTKEYR_BIT     		(0)
#define FLASH_OPTKEYR_R_OPTKEYR_OPTKEY1	 		((uint32_t)0x08192A3B)
#define FLASH_OPTKEYR_R_OPTKEYR_OPTKEY2	   		((uint32_t)0x4C5D6E7F)

#define FLASH_OPTKEYR_OPTKEYR_MASK    			((uint32_t)0xFFFFFFFF)
#define FLASH_OPTKEYR_OPTKEYR_OPTKEY1			((uint32_t)0x08192A3B)
#define FLASH_OPTKEYR_OPTKEYR_OPTKEY2	   		((uint32_t)0x4C5D6E7F)
/*--------*/


/*TODO SR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 SR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FLASH_SR            (((FLASH_SR_TypeDef*)(FLASH_R_BASE+FLASH_SR_OFFSET )))
#define FLASH_SR_R          (*((__IO uint32_t *)(FLASH_R_BASE+FLASH_SR_OFFSET)))


/*--------*/
#define FLASH_SR_R_EOP_MASK    		((uint32_t)0x00000001)
#define FLASH_SR_R_EOP_BIT     		(0)
#define FLASH_SR_R_EOP_NOEND   		((uint32_t)0x00000000)
#define FLASH_SR_R_EOP_END		   	((uint32_t)0x00000001)
#define FLASH_SR_R_EOP_CLEAR	   	((uint32_t)0x00000001)

#define FLASH_SR_EOP_MASK    		((uint32_t)0x00000001)
#define FLASH_SR_EOP_NOEND    		((uint32_t)0x00000000)
#define FLASH_SR_EOP_END		   	((uint32_t)0x00000001)
#define FLASH_SR_EOP_CLEAR 		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_SR_R_OPERR_MASK   	((uint32_t)0x00000002)
#define FLASH_SR_R_OPERR_BIT    	(1)
#define FLASH_SR_R_OPERR_NOERROR	((uint32_t)0x00000000)
#define FLASH_SR_R_OPERR_ERROR	   	((uint32_t)0x00000002)

#define FLASH_SR_OPERR_MASK    		((uint32_t)0x00000001)
#define FLASH_SR_OPERR_NOERROR 		((uint32_t)0x00000000)
#define FLASH_SR_OPERR_ERROR	   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_SR_R_WRPERR_MASK    	((uint32_t)0x00000010)
#define FLASH_SR_R_WRPERR_BIT     	(4)
#define FLASH_SR_R_WRPERR_NOERROR   ((uint32_t)0x00000000)
#define FLASH_SR_R_WRPERR_ERROR		((uint32_t)0x00000010)
#define FLASH_SR_R_WRPERR_CLEAR	   	((uint32_t)0x00000010)

#define FLASH_SR_WRPERR_MASK    	((uint32_t)0x00000001)
#define FLASH_SR_WRPERR_NOERROR    	((uint32_t)0x00000000)
#define FLASH_SR_WRPERR_ERROR		((uint32_t)0x00000001)
#define FLASH_SR_WRPERR_CLEAR 		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_SR_R_PGAERR_MASK    	((uint32_t)0x00000020)
#define FLASH_SR_R_PGAERR_BIT     	(5)
#define FLASH_SR_R_PGAERR_NOERROR   ((uint32_t)0x00000000)
#define FLASH_SR_R_PGAERR_ERROR		((uint32_t)0x00000020)
#define FLASH_SR_R_PGAERR_CLEAR	   	((uint32_t)0x00000020)

#define FLASH_SR_PGAERR_MASK    	((uint32_t)0x00000001)
#define FLASH_SR_PGAERR_NOERROR    	((uint32_t)0x00000000)
#define FLASH_SR_PGAERR_ERROR		((uint32_t)0x00000001)
#define FLASH_SR_PGAERR_CLEAR 		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_SR_R_PGPERR_MASK    	((uint32_t)0x00000040)
#define FLASH_SR_R_PGPERR_BIT     	(6)
#define FLASH_SR_R_PGPERR_NOERROR   ((uint32_t)0x00000000)
#define FLASH_SR_R_PGPERR_ERROR		((uint32_t)0x00000040)
#define FLASH_SR_R_PGPERR_CLEAR	   	((uint32_t)0x00000040)

#define FLASH_SR_PGPERR_MASK    	((uint32_t)0x00000001)
#define FLASH_SR_PGPERR_NOERROR    	((uint32_t)0x00000000)
#define FLASH_SR_PGPERR_ERROR		((uint32_t)0x00000001)
#define FLASH_SR_PGPERR_CLEAR 		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_SR_R_ERSERR_MASK    	((uint32_t)0x00000080)
#define FLASH_SR_R_ERSERR_BIT     	(7)
#define FLASH_SR_R_ERSERR_NOERROR   ((uint32_t)0x00000000)
#define FLASH_SR_R_ERSERR_ERROR		((uint32_t)0x00000080)
#define FLASH_SR_R_ERSERR_CLEAR	   	((uint32_t)0x00000080)

#define FLASH_SR_ERSERR_MASK    	((uint32_t)0x00000001)
#define FLASH_SR_ERSERR_NOERROR    	((uint32_t)0x00000000)
#define FLASH_SR_ERSERR_ERROR		((uint32_t)0x00000001)
#define FLASH_SR_ERSERR_CLEAR 		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_SR_R_BSY_MASK    		((uint32_t)0x00010000)
#define FLASH_SR_R_BSY_BIT     		(16)
#define FLASH_SR_R_BSY_IDLE   		((uint32_t)0x00000000)
#define FLASH_SR_R_BSY_BUSY			((uint32_t)0x00010000)

#define FLASH_SR_BSY_MASK    		((uint32_t)0x00000001)
#define FLASH_SR_BSY_IDLE    		((uint32_t)0x00000000)
#define FLASH_SR_BSY_BUSY			((uint32_t)0x00000001)
/*--------*/



/*TODO CR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 CR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FLASH_CR            (((FLASH_CR_TypeDef*)(FLASH_R_BASE+FLASH_CR_OFFSET )))
#define FLASH_CR_R          (*((__IO uint32_t *)(FLASH_R_BASE+FLASH_CR_OFFSET)))

/*--------*/
#define FLASH_CR_R_PG_MASK    		((uint32_t)0x00000001)
#define FLASH_CR_R_PG_BIT     		(0)
#define FLASH_CR_R_PG_ACT		   	((uint32_t)0x00000001)

#define FLASH_CR_PG_MASK    		((uint32_t)0x00000001)
#define FLASH_CR_PG_ACT		   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_CR_R_SER_MASK    		((uint32_t)0x00000002)
#define FLASH_CR_R_SER_BIT     		(1)
#define FLASH_CR_R_SER_ACT		   	((uint32_t)0x00000002)

#define FLASH_CR_SER_MASK    		((uint32_t)0x00000001)
#define FLASH_CR_SER_ACT		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_CR_R_MER_MASK    		((uint32_t)0x00000004)
#define FLASH_CR_R_MER_BIT     		(2)
#define FLASH_CR_R_MER_ACT		   	((uint32_t)0x00000004)

#define FLASH_CR_MER_MASK    		((uint32_t)0x00000001)
#define FLASH_CR_MER_ACT		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_CR_R_SNB_MASK    		((uint32_t)0x00000078)
#define FLASH_CR_R_SNB_BIT     		(3)
#define FLASH_CR_R_SNB_SEC0		   	((uint32_t)0x00000000)
#define FLASH_CR_R_SNB_SEC1		   	((uint32_t)0x00000008)
#define FLASH_CR_R_SNB_SEC2		   	((uint32_t)0x00000010)
#define FLASH_CR_R_SNB_SEC3		   	((uint32_t)0x00000018)
#define FLASH_CR_R_SNB_SEC4		   	((uint32_t)0x00000020)
#define FLASH_CR_R_SNB_SEC5		   	((uint32_t)0x00000028)
#define FLASH_CR_R_SNB_SEC6		   	((uint32_t)0x00000030)
#define FLASH_CR_R_SNB_SEC7		   	((uint32_t)0x00000038)

#define FLASH_CR_SNB_MASK    		((uint32_t)0x0000000F)
#define FLASH_CR_SNB_SEC0		   	((uint32_t)0x00000000)
#define FLASH_CR_SNB_SEC1    		((uint32_t)0x00000001)
#define FLASH_CR_SNB_SEC2    		((uint32_t)0x00000002)
#define FLASH_CR_SNB_SEC3    		((uint32_t)0x00000003)
#define FLASH_CR_SNB_SEC4    		((uint32_t)0x00000004)
#define FLASH_CR_SNB_SEC5    		((uint32_t)0x00000005)
#define FLASH_CR_SNB_SEC6    		((uint32_t)0x00000006)
#define FLASH_CR_SNB_SEC7    		((uint32_t)0x00000007)
/*--------*/

/*--------*/
#define FLASH_CR_R_PSIZE_MASK    	((uint32_t)0x00000300)
#define FLASH_CR_R_PSIZE_BIT     	(8)
#define FLASH_CR_R_PSIZE_x8		   	((uint32_t)0x00000000)
#define FLASH_CR_R_PSIZE_x16	   	((uint32_t)0x00000100)
#define FLASH_CR_R_PSIZE_x32	   	((uint32_t)0x00000200)
#define FLASH_CR_R_PSIZE_x64	   	((uint32_t)0x00000300)

#define FLASH_CR_PSIZE_MASK    		((uint32_t)0x0000000F)
#define FLASH_CR_PSIZE_x8		   	((uint32_t)0x00000000)
#define FLASH_CR_PSIZE_x16   		((uint32_t)0x00000001)
#define FLASH_CR_PSIZE_x32    		((uint32_t)0x00000002)
#define FLASH_CR_PSIZE_x64    		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FLASH_CR_R_STRT_MASK    	((uint32_t)0x00010000)
#define FLASH_CR_R_STRT_BIT     	(16)
#define FLASH_CR_R_STRT_ACT		   	((uint32_t)0x00010000)

#define FLASH_CR_STRT_MASK    		((uint32_t)0x00000001)
#define FLASH_CR_STRT_ACT		   	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_CR_R_EOPIE_MASK    	((uint32_t)0x01000000)
#define FLASH_CR_R_EOPIE_BIT     	(24)
#define FLASH_CR_R_EOPIE_EN		   	((uint32_t)0x01000000)
#define FLASH_CR_R_EOPIE_DIS	   	((uint32_t)0x00000000)

#define FLASH_CR_EOPIE_MASK    		((uint32_t)0x00000001)
#define FLASH_CR_EOPIE_EN		   	((uint32_t)0x00000001)
#define FLASH_CR_EOPIE_DIS		   	((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define FLASH_CR_R_ERRIE_MASK    	((uint32_t)0x02000000)
#define FLASH_CR_R_ERRIE_BIT     	(25)
#define FLASH_CR_R_ERRIE_EN		   	((uint32_t)0x02000000)
#define FLASH_CR_R_ERRIE_DIS	   	((uint32_t)0x00000000)

#define FLASH_CR_ERRIE_MASK    		((uint32_t)0x00000001)
#define FLASH_CR_ERRIE_EN		   	((uint32_t)0x00000001)
#define FLASH_CR_ERRIE_DIS		   	((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define FLASH_CR_R_LOCK_MASK    	((uint32_t)0x80000000)
#define FLASH_CR_R_LOCK_BIT     	(31)
#define FLASH_CR_R_LOCK_LOCKED	   	((uint32_t)0x80000000)

#define FLASH_CR_LOCK_MASK    		((uint32_t)0x00000001)
#define FLASH_CR_LOCK_LOCKED	   	((uint32_t)0x00000001)
/*--------*/




/*TODO OPTCR*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 OPTCR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FLASH_OPTCR            (((FLASH_OPTCR_TypeDef*)(FLASH_R_BASE+FLASH_OPTCR_OFFSET )))
#define FLASH_OPTCR_R          (*((__IO uint32_t *)(FLASH_R_BASE+FLASH_OPTCR_OFFSET)))

/*--------*/
#define FLASH_OPTCR_R_OPTLOCK_MASK    		((uint32_t)0x00000001)
#define FLASH_OPTCR_R_OPTLOCK_BIT     		(0)
#define FLASH_OPTCR_R_OPTLOCK_LOCKED	   	((uint32_t)0x00000001)

#define FLASH_OPTCR_OPTLOCK_MASK    		((uint32_t)0x00000001)
#define FLASH_OPTCR_OPTLOCK_LOCKED	   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_OPTSTRT_MASK    		((uint32_t)0x00000002)
#define FLASH_OPTCR_R_OPTSTRT_BIT     		(1)
#define FLASH_OPTCR_R_OPTSTRT_START		   	((uint32_t)0x00000002)

#define FLASH_OPTCR_OPTSTRT_MASK    		((uint32_t)0x00000001)
#define FLASH_OPTCR_OPTSTRT_START   		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_BOR_LEV_MASK    		((uint32_t)0x0000000C)
#define FLASH_OPTCR_R_BOR_LEV_BIT     		(2)
#define FLASH_OPTCR_R_BOR_LEV_VBOR3		   	((uint32_t)0x00000000)
#define FLASH_OPTCR_R_BOR_LEV_VBOR2		   	((uint32_t)0x00000004)
#define FLASH_OPTCR_R_BOR_LEV_VBOR1		   	((uint32_t)0x00000008)
#define FLASH_OPTCR_R_BOR_LEV_VBOROFF	   	((uint32_t)0x0000000C)

#define FLASH_OPTCR_BOR_LEV_MASK    		((uint32_t)0x00000003)
#define FLASH_OPTCR_BOR_LEV_VBOR3   		((uint32_t)0x00000000)
#define FLASH_OPTCR_BOR_LEV_VBOR2   		((uint32_t)0x00000001)
#define FLASH_OPTCR_BOR_LEV_VBOR1   		((uint32_t)0x00000002)
#define FLASH_OPTCR_BOR_LEV_VBOROFF   		((uint32_t)0x00000003)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_WWDG_SW_MASK    		((uint32_t)0x00000010)
#define FLASH_OPTCR_R_WWDG_SW_BIT     		(4)

#define FLASH_OPTCR_WWDG_SW_MASK    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_IWDG_SW_MASK    		((uint32_t)0x00000020)
#define FLASH_OPTCR_R_IWDG_SW_BIT     		(5)

#define FLASH_OPTCR_IWDG_SW_MASK    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_nRST_STOP_MASK    	((uint32_t)0x00000040)
#define FLASH_OPTCR_R_nRST_STOP_BIT     	(6)

#define FLASH_OPTCR_nRST_STOP_MASK    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_nRST_STDBY_MASK    	((uint32_t)0x00000080)
#define FLASH_OPTCR_R_nRST_STDBY_BIT     	(7)

#define FLASH_OPTCR_nRST_STDBY_MASK    		((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_RDP_MASK    		((uint32_t)0x0000FF00)
#define FLASH_OPTCR_R_RDP_BIT     		(8)
#define FLASH_OPTCR_R_RDP_LEVEL0		((uint32_t)0x0000AA00)
#define FLASH_OPTCR_R_RDP_LEVEL1		((uint32_t)0x0000CC00)
#define FLASH_OPTCR_R_RDP_LEVEL2		((uint32_t)0x00000000)

#define FLASH_OPTCR_RDP_MASK    		((uint32_t)0x000000FF)
#define FLASH_OPTCR_RDP_LEVEL0   		((uint32_t)0x000000AA)
#define FLASH_OPTCR_RDP_LEVEL1   		((uint32_t)0x000000CC)
#define FLASH_OPTCR_RDP_LEVEL2   		((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_nWRP_MASK    		((uint32_t)0x00FF0000)
#define FLASH_OPTCR_R_nWRP_BIT     		(8)
#define FLASH_OPTCR_R_nWRP_SEC0			((uint32_t)0x00010000)
#define FLASH_OPTCR_R_nWRP_SEC1			((uint32_t)0x00020000)
#define FLASH_OPTCR_R_nWRP_SEC2			((uint32_t)0x00040000)
#define FLASH_OPTCR_R_nWRP_SEC3			((uint32_t)0x00080000)
#define FLASH_OPTCR_R_nWRP_SEC4			((uint32_t)0x00100000)
#define FLASH_OPTCR_R_nWRP_SEC5			((uint32_t)0x00200000)
#define FLASH_OPTCR_R_nWRP_SEC6			((uint32_t)0x00400000)
#define FLASH_OPTCR_R_nWRP_SEC7			((uint32_t)0x00800000)

#define FLASH_OPTCR_nWRP_MASK    		((uint32_t)0x000000FF)
#define FLASH_OPTCR_nWRP_SEC0   		((uint32_t)0x00000001)
#define FLASH_OPTCR_nWRP_SEC1   		((uint32_t)0x00000002)
#define FLASH_OPTCR_nWRP_SEC2   		((uint32_t)0x00000004)
#define FLASH_OPTCR_nWRP_SEC3   		((uint32_t)0x00000008)
#define FLASH_OPTCR_nWRP_SEC4   		((uint32_t)0x00000010)
#define FLASH_OPTCR_nWRP_SEC5   		((uint32_t)0x00000020)
#define FLASH_OPTCR_nWRP_SEC6   		((uint32_t)0x00000040)
#define FLASH_OPTCR_nWRP_SEC7   		((uint32_t)0x00000080)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_IWDG_STDBY_MASK    ((uint32_t)0x40000000)
#define FLASH_OPTCR_R_IWDG_STDBY_BIT     (30)

#define FLASH_OPTCR_IWDG_STDBY_MASK    	((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define FLASH_OPTCR_R_IWDG_STOP_MASK    ((uint32_t)0x80000000)
#define FLASH_OPTCR_R_IWDG_STOP_BIT     (31)

#define FLASH_OPTCR_IWDG_STOP_MASK    	((uint32_t)0x00000001)
/*--------*/

/*TODO OPTCR1*/
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 OPTCR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/

#define FLASH_OPTCR1            (((FLASH_OPTCR1_TypeDef*)(FLASH_R_BASE+FLASH_OPTCR1_OFFSET )))
#define FLASH_OPTCR1_R          (*((__IO uint32_t *)(FLASH_R_BASE+FLASH_OPTCR1_OFFSET)))

/*--------*/
#define FLASH_OPTCR1_R_BOOT_ADD0_MASK    		((uint32_t)0x0000FFFF)
#define FLASH_OPTCR1_R_BOOT_ADD0_BIT     		(0)
#define FLASH_OPTCR1_R_BOOT_ADD0_ITCMRAM	   	((uint32_t)0x00000000)
#define FLASH_OPTCR1_R_BOOT_ADD0_SysMem		   	((uint32_t)0x00000040)
#define FLASH_OPTCR1_R_BOOT_ADD0_ITCMFLASH	   	((uint32_t)0x00000080)
#define FLASH_OPTCR1_R_BOOT_ADD0_AXIMFLASH	   	((uint32_t)0x00002000)
#define FLASH_OPTCR1_R_BOOT_ADD0_DTCMRAM	   	((uint32_t)0x00008000)
#define FLASH_OPTCR1_R_BOOT_ADD0_SRAM1		   	((uint32_t)0x00008004)
#define FLASH_OPTCR1_R_BOOT_ADD0_SRAM2		   	((uint32_t)0x00008013)

#define FLASH_OPTCR1_BOOT_ADD0_MASK    			((uint32_t)0x0000FFFF)
#define FLASH_OPTCR1_BOOT_ADD0_ITCMRAM	   		((uint32_t)0x00000000)
#define FLASH_OPTCR1_BOOT_ADD0_SysMem		   	((uint32_t)0x00000040)
#define FLASH_OPTCR1_BOOT_ADD0_ITCMFLASH	   	((uint32_t)0x00000080)
#define FLASH_OPTCR1_BOOT_ADD0_AXIMFLASH	   	((uint32_t)0x00002000)
#define FLASH_OPTCR1_BOOT_ADD0_DTCMRAM	   		((uint32_t)0x00008000)
#define FLASH_OPTCR1_BOOT_ADD0_SRAM1		   	((uint32_t)0x00008004)
#define FLASH_OPTCR1_BOOT_ADD0_SRAM2		   	((uint32_t)0x00008013)
/*--------*/

/*--------*/
#define FLASH_OPTCR1_R_BOOT_ADD1_MASK    		((uint32_t)0xFFFF)
#define FLASH_OPTCR1_R_BOOT_ADD1_BIT     		(0)
#define FLASH_OPTCR1_R_BOOT_ADD1_ITCMRAM	   	((uint32_t)0x00000000)
#define FLASH_OPTCR1_R_BOOT_ADD1_SysMem		   	((uint32_t)0x00400000)
#define FLASH_OPTCR1_R_BOOT_ADD1_ITCMFLASH	   	((uint32_t)0x00800000)
#define FLASH_OPTCR1_R_BOOT_ADD1_AXIMFLASH	   	((uint32_t)0x20000000)
#define FLASH_OPTCR1_R_BOOT_ADD1_DTCMRAM	   	((uint32_t)0x80000000)
#define FLASH_OPTCR1_R_BOOT_ADD1_SRAM1		   	((uint32_t)0x80040000)
#define FLASH_OPTCR1_R_BOOT_ADD1_SRAM2		   	((uint32_t)0x80130000)

#define FLASH_OPTCR1_BOOT_ADD1_MASK    			((uint32_t)0x0000FFFF)
#define FLASH_OPTCR1_BOOT_ADD1_ITCMRAM	   		((uint32_t)0x00000000)
#define FLASH_OPTCR1_BOOT_ADD1_SysMem		   	((uint32_t)0x00000040)
#define FLASH_OPTCR1_BOOT_ADD1_ITCMFLASH	   	((uint32_t)0x00000080)
#define FLASH_OPTCR1_BOOT_ADD1_AXIMFLASH	   	((uint32_t)0x00002000)
#define FLASH_OPTCR1_BOOT_ADD1_DTCMRAM	   		((uint32_t)0x00008000)
#define FLASH_OPTCR1_BOOT_ADD1_SRAM1		   	((uint32_t)0x00008004)
#define FLASH_OPTCR1_BOOT_ADD1_SRAM2		   	((uint32_t)0x00008013)
/*--------*/

/* TODO functions */


void     FLASH_Unlock(void);
void     FLASH_UnlockOPT(void);
void     FLASH_Lock(void);
void     FLASH_LockOPT(void);
int32_t  FLASH_Init (void);
uint32_t FLASH_SectorNumber (uint32_t Dir);
int32_t  FLASH_SectorEraseDir(uint32_t dir);
int32_t  FLASH_SectorEraseSection(uint32_t dir);
int32_t  FLASH_MassErase(void);
int32_t FLASH_WriteWord(uint32_t dir, uint32_t size, uint32_t *buffer);
int32_t FLASH_WriteHalfWord(uint32_t dir, uint32_t size, uint16_t *buffer);
int32_t FLASH_WriteByte(uint32_t dir, uint32_t size, uint8_t *buffer);


#endif /* FLASH_H_ */
