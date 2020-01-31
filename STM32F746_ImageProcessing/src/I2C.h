/*
 * I2C.h
 *
 *  Created on: 21/09/2018
 *      Author: InDev
 */

#ifndef I2C_H_
#define I2C_H_

#include "Core.h"
#include <stdint.h>
#include "GPIO.h"
#include "RCC.h"
#include "DMA.h"
#include "Camera_Regs.h"




#define I2C1_BASE             ((uint32_t)0x40005400U)
#define I2C1_OFFSET           ((uint32_t)0x00005400U)
#define I2C2_BASE             ((uint32_t)0x40005800U)
#define I2C2_OFFSET           ((uint32_t)0x00005800U)
#define I2C3_BASE             ((uint32_t)0x40005C00U)
#define I2C3_OFFSET           ((uint32_t)0x00005C00U)
#define I2C4_BASE             ((uint32_t)0x40006000U)
#define I2C4_OFFSET           ((uint32_t)0x00006000U)

typedef __IO struct
{
    __IO  uint32_t PE      		:1;
    __IO  uint32_t TXIE      	:1;
    __IO  uint32_t RXIE      	:1;
    __IO  uint32_t ADDRIE      	:1;
    __IO  uint32_t NACKIE      	:1;
    __IO  uint32_t STOPIE      	:1;
    __IO  uint32_t TCIE      	:1;
    __IO  uint32_t ERRIE      	:1;
    __IO  uint32_t DNF      	:4;
    __IO  uint32_t ANFOFF      	:1;
    	  uint32_t reserved     :1;
    __IO  uint32_t TXDMAEN      :1;
    __IO  uint32_t RXDMAEN      :1;
    __IO  uint32_t SBC      	:1;
    __IO  uint32_t NOSTRETCH    :1;
    	  uint32_t reserved1    :1;
    __IO  uint32_t GCEN    		:1;
    __IO  uint32_t SMBHEN  		:1;
    __IO  uint32_t SMBDEN 		:1;
    __IO  uint32_t ALERTEN 		:1;
    __IO  uint32_t PECEN   		:1;
	      uint32_t reserved2    :8;
}I2C_CR1_TypeDef;/*0x00000000*/

typedef __IO struct
{
    __IO  uint32_t SADD      	:10;
    __IO  uint32_t RD_WRN      	:1;
    __IO  uint32_t ADD10      	:1;
    __IO  uint32_t HEAD10R     	:1;
    __IO  uint32_t START      	:1;
    __IO  uint32_t STOP      	:1;
    __IO  uint32_t NACK      	:1;
    __IO  uint32_t NBYTES      	:8;
    __IO  uint32_t RELOAD      	:1;
    __IO  uint32_t AUTOEND     	:1;
    __IO  uint32_t PECBYTE     	:1;
    	  uint32_t reserved     :5;
}I2C_CR2_TypeDef;/*0x00000004*/

typedef __IO struct
{
    __IO  uint32_t OA1_0   		:1;
    __IO  uint32_t OA1      	:7;
    __IO  uint32_t OA1_8      	:2;
    __IO  uint32_t OA1MODE     	:1;
    	  uint32_t reserved     :4;
    __IO  uint32_t OA1EN      	:1;
    	  uint32_t reserved1    :16;
}I2C_OAR1_TypeDef;/*0x00000008*/

typedef __IO struct
{
	  	  uint32_t reserved     :1;
    __IO  uint32_t OA2      	:7;
    __IO  uint32_t OA2MSK      	:3;
    	  uint32_t reserved1    :4;
    __IO  uint32_t OA2EN      	:1;
    	  uint32_t reserved2    :16;
}I2C_OAR2_TypeDef;/*0x0000000C*/

typedef __IO struct
{
    __IO  uint32_t SCLL      	:8;
    __IO  uint32_t SCLH      	:8;
    __IO  uint32_t SDADEL      	:4;
    __IO  uint32_t SCLDEL      	:4;
    	  uint32_t reserved	    :4;
    __IO  uint32_t PRESC      	:4;
}I2C_TIMINGR_TypeDef;/*0x00000010*/

typedef __IO struct
{
    __IO  uint32_t TIMEOUTA     :12;
    __IO  uint32_t TIDLE      	:1;
	  	  uint32_t reserved	    :2;
    __IO  uint32_t TIMOUTEN    	:1;
    __IO  uint32_t TIMEOUTB    	:12;
    	  uint32_t reserved1    :3;
    __IO  uint32_t TEXTEN      	:1;
}I2C_TIMEOUTR_TypeDef;/*0x00000014*/

typedef __IO struct
{
    __IO  uint32_t TXE      	:1;
    __IO  uint32_t TXIS      	:1;
    __IO  uint32_t RXNE      	:1;
    __IO  uint32_t ADDR      	:1;
    __IO  uint32_t NACKF      	:1;
    __IO  uint32_t STOPF      	:1;
    __IO  uint32_t TC      		:1;
    __IO  uint32_t TCR      	:1;
    __IO  uint32_t BERR      	:1;
    __IO  uint32_t ARLO      	:1;
    __IO  uint32_t OVR      	:1;
    __IO  uint32_t PECERR      	:1;
    __IO  uint32_t TIMEOUT     	:1;
    __IO  uint32_t ALERT     	:1;
    	  uint32_t reserved     :1;
    __IO  uint32_t BUSY	      	:1;
    __IO  uint32_t DIR      	:1;
    __IO  uint32_t ADDCODE      :7;
    	  uint32_t reserved1    :8;
}I2C_ISR_TypeDef;/*0x00000018*/

typedef __IO struct
{
	  	  uint32_t reserved     :3;
    __IO  uint32_t ADDRCF      	:1;
    __IO  uint32_t NACKCF      	:1;
    __IO  uint32_t STOPCF      	:1;
    	  uint32_t reserved1    :2;
    __IO  uint32_t BERRCF      	:1;
    __IO  uint32_t ARLOCF      	:1;
    __IO  uint32_t OVRCF      	:1;
    __IO  uint32_t PECCF      	:1;
    __IO  uint32_t TIMEOUTCF   	:1;
    __IO  uint32_t ALERTCF     	:1;
    	  uint32_t reserved2    :18;
}I2C_ICR_TypeDef;/*0x0000001C*/

typedef __IO struct
{
    __IO  uint32_t PEC      	:8;
    	  uint32_t reserved	    :24;
}I2C_PECR_TypeDef;/*0x00000020*/

typedef __IO struct
{
    __IO  uint32_t RXDATA      	:8;
    	  uint32_t reserved	    :24;
}I2C_RXDR_TypeDef;/*0x00000024*/

typedef __IO struct
{
    __IO  uint32_t TXDATA      	:8;
    	  uint32_t reserved	    :24;
}I2C_TXDR_TypeDef;/*0x00000028*/

typedef __IO struct
{
	union
	{
		__IO uint32_t 		CR1;      /*!< I2C Control register 1,            Address offset: 0x00 */
		I2C_CR1_TypeDef 	CR1_Bit;      /*!< I2C Control register 1,            Address offset: 0x00 */

	};
	union
	{
		__IO uint32_t 		CR2;      /*!< I2C Control register 2,            Address offset: 0x04 */
		I2C_CR2_TypeDef 	CR2_Bit;      /*!< I2C Control register 2,            Address offset: 0x04 */
	};
	union
	{
		__IO uint32_t 		OAR1;     /*!< I2C Own address 1 register,        Address offset: 0x08 */
		I2C_OAR1_TypeDef 	OAR1_Bit;     /*!< I2C Own address 1 register,        Address offset: 0x08 */
	};
	union
	{
		__IO uint32_t 		OAR2;     /*!< I2C Own address 2 register,        Address offset: 0x0C */
		I2C_OAR2_TypeDef 	OAR2_Bit;     /*!< I2C Own address 2 register,        Address offset: 0x0C */
	};
	union
	{
		__IO uint32_t 		TIMINGR;  /*!< I2C Timing register,               Address offset: 0x10 */
		I2C_TIMINGR_TypeDef TIMINGR_Bit;  /*!< I2C Timing register,               Address offset: 0x10 */
	};
	union
	{
		__IO uint32_t 		TIMEOUTR; /*!< I2C Timeout register,              Address offset: 0x14 */
		I2C_TIMEOUTR_TypeDef TIMEOUTR_Bit; /*!< I2C Timeout register,              Address offset: 0x14 */
	};
	union
	{
		__IO uint32_t 		ISR;      /*!< I2C Interrupt and status register, Address offset: 0x18 */
		I2C_ISR_TypeDef 	ISR_Bit;      /*!< I2C Interrupt and status register, Address offset: 0x18 */
	};
	union
	{
		__IO uint32_t 		ICR;      /*!< I2C Interrupt clear register,      Address offset: 0x1C */
		I2C_ICR_TypeDef 	ICR_Bit;      /*!< I2C Interrupt clear register,      Address offset: 0x1C */
	};
  union
  {
	  __IO uint32_t 		PECR;     /*!< I2C PEC register,                  Address offset: 0x20 */
	  I2C_PECR_TypeDef 		PECR_Bit;     /*!< I2C PEC register,                  Address offset: 0x20 */
  };
  union
  {
	  __IO uint32_t 		RXDR;     /*!< I2C Receive data register,         Address offset: 0x24 */
	  I2C_RXDR_TypeDef 		RXDR_Bit;     /*!< I2C Receive data register,         Address offset: 0x24 */
  };
  union
  {
	  __IO uint32_t 		TXDR;     /*!< I2C Transmit data register,        Address offset: 0x28 */
	  I2C_TXDR_TypeDef 		TXDR_Bit;     /*!< I2C Transmit data register,        Address offset: 0x28 */
  };
} I2C_TypeDef;


#define I2C1                ((I2C_TypeDef *) I2C1_BASE)
#define I2C2                ((I2C_TypeDef *) I2C2_BASE)
#define I2C3                ((I2C_TypeDef *) I2C3_BASE)
#define I2C4                ((I2C_TypeDef *) I2C4_BASE)


#define	I2C_CR1_OFFSET						((uint32_t)0x00000000)
#define	I2C_CR2_OFFSET						((uint32_t)0x00000004)
#define	I2C_OAR1_OFFSET						((uint32_t)0x00000008)
#define	I2C_OAR2_OFFSET						((uint32_t)0x0000000C)
#define	I2C_TIMINGR_OFFSET					((uint32_t)0x00000010)
#define	I2C_TIMEOUTR_OFFSET					((uint32_t)0x00000014)
#define	I2C_ISR_OFFSET						((uint32_t)0x00000018)
#define	I2C_ICR_OFFSET						((uint32_t)0x0000001C)
#define	I2C_PECR_OFFSET						((uint32_t)0x00000020)
#define	I2C_RXDR_OFFSET						((uint32_t)0x00000024)
#define	I2C_TXDR_OFFSET						((uint32_t)0x00000028)

/* TODO I2C1 CR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_CR1            			(((I2C_CR1_TypeDef*)(I2C1_BASE+I2C_CR1_OFFSET )))
#define I2C1_CR1_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_CR1_OFFSET)))


#define  I2C1_CR1_PE                          0x00000001U        /*!< Peripheral enable                   */
#define  I2C1_CR1_TXIE                        0x00000002U        /*!< TX interrupt enable                 */
#define  I2C1_CR1_RXIE                        0x00000004U        /*!< RX interrupt enable                 */
#define  I2C1_CR1_ADDRIE                      0x00000008U        /*!< Address match interrupt enable      */
#define  I2C1_CR1_NACKIE                      0x00000010U        /*!< NACK received interrupt enable      */
#define  I2C1_CR1_STOPIE                      0x00000020U        /*!< STOP detection interrupt enable     */
#define  I2C1_CR1_TCIE                        0x00000040U        /*!< Transfer complete interrupt enable  */
#define  I2C1_CR1_ERRIE                       0x00000080U        /*!< Errors interrupt enable             */
#define  I2C1_CR1_DNF                         0x00000F00U        /*!< Digital noise filter                */
#define  I2C1_CR1_ANFOFF                      0x00001000U        /*!< Analog noise filter OFF             */
#define  I2C1_CR1_TXDMAEN                     0x00004000U        /*!< DMA transmission requests enable    */
#define  I2C1_CR1_RXDMAEN                     0x00008000U        /*!< DMA reception requests enable       */
#define  I2C1_CR1_SBC                         0x00010000U        /*!< Slave byte control                  */
#define  I2C1_CR1_NOSTRETCH                   0x00020000U        /*!< Clock stretching disable            */
#define  I2C1_CR1_GCEN                        0x00080000U        /*!< General call enable                 */
#define  I2C1_CR1_SMBHEN                      0x00100000U        /*!< SMBus host address enable           */
#define  I2C1_CR1_SMBDEN                      0x00200000U        /*!< SMBus device default address enable */
#define  I2C1_CR1_ALERTEN                     0x00400000U        /*!< SMBus alert enable                  */
#define  I2C1_CR1_PECEN                       0x00800000U        /*!< PEC enable                          */

#define  I2C1_CR1_DFN                         I2C1_CR1_DNF                   /*!< Digital noise filter                */

/* TODO I2C1 CR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 CR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_CR2            			(((I2C_CR2_TypeDef*)(I2C1_BASE+I2C_CR2_OFFSET )))
#define I2C1_CR2_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_CR2_OFFSET)))


#define  I2C1_CR2_SADD                        0x000003FFU        /*!< Slave address (master mode)                             */
#define  I2C1_CR2_RD_WRN                      0x00000400U        /*!< Transfer direction (master mode)                        */
#define  I2C1_CR2_ADD10                       0x00000800U        /*!< 10-bit addressing mode (master mode)                    */
#define  I2C1_CR2_HEAD10R                     0x00001000U        /*!< 10-bit address header only read direction (master mode) */
#define  I2C1_CR2_START                       0x00002000U        /*!< START generation                                        */
#define  I2C1_CR2_STOP                        0x00004000U        /*!< STOP generation (master mode)                           */
#define  I2C1_CR2_NACK                        0x00008000U        /*!< NACK generation (slave mode)                            */
#define  I2C1_CR2_NBYTES                      0x00FF0000U        /*!< Number of bytes                                         */
#define  I2C1_CR2_RELOAD                      0x01000000U        /*!< NBYTES reload mode                                      */
#define  I2C1_CR2_AUTOEND                     0x02000000U        /*!< Automatic end mode (master mode)                        */
#define  I2C1_CR2_PECBYTE                     0x04000000U        /*!< Packet error checking byte                              */

/* TODO I2C1 OAR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 OAR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_OAR1            			(((I2C_OAR1_TypeDef*)(I2C1_BASE+I2C_OAR1_OFFSET )))
#define I2C1_OAR1_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_OAR1_OFFSET)))

#define  I2C1_OAR1_OA1                        0x000003FFU        /*!< Interface own address 1   */
#define  I2C1_OAR1_OA1MODE                    0x00000400U        /*!< Own address 1 10-bit mode */
#define  I2C1_OAR1_OA1EN                      0x00008000U        /*!< Own address 1 enable      */


/* TODO I2C1 OAR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 OAR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_OAR2            			(((I2C_OAR2_TypeDef*)(I2C1_BASE+I2C_OAR2_OFFSET )))
#define I2C1_OAR2_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_OAR2_OFFSET)))

#define  I2C1_OAR2_OA2                        0x000000FEU        /*!< Interface own address 2 */
#define  I2C1_OAR2_OA2MSK                     0x00000700U        /*!< Own address 2 masks     */
#define  I2C1_OAR2_OA2NOMASK                  0x00000000U        /*!< No mask */
#define  I2C1_OAR2_OA2MASK01                  0x00000100U        /*!< OA2[1] is masked, Only OA2[7:2] are compared */
#define  I2C1_OAR2_OA2MASK02                  0x00000200U        /*!< OA2[2:1] is masked, Only OA2[7:3] are compared */
#define  I2C1_OAR2_OA2MASK03                  0x00000300U        /*!< OA2[3:1] is masked, Only OA2[7:4] are compared */
#define  I2C1_OAR2_OA2MASK04                  0x00000400U        /*!< OA2[4:1] is masked, Only OA2[7:5] are compared */
#define  I2C1_OAR2_OA2MASK05                  0x00000500U        /*!< OA2[5:1] is masked, Only OA2[7:6] are compared */
#define  I2C1_OAR2_OA2MASK06                  0x00000600U        /*!< OA2[6:1] is masked, Only OA2[7] are compared */
#define  I2C1_OAR2_OA2MASK07                  0x00000700U        /*!< OA2[7:1] is masked, No comparison is done */
#define  I2C1_OAR2_OA2EN                      0x00008000U        /*!< Own address 2 enable    */


/* TODO I2C1 TIMINGR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 TIMINGR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_TIMINGR            			(((I2C_TIMINGR_TypeDef*)(I2C1_BASE+I2C_TIMINGR_OFFSET )))
#define I2C1_TIMINGR_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_TIMINGR_OFFSET)))

#define  I2C1_TIMINGR_SCLL                    0x000000FFU        /*!< SCL low period (master mode)  */
#define  I2C1_TIMINGR_SCLH                    0x0000FF00U        /*!< SCL high period (master mode) */
#define  I2C1_TIMINGR_SDADEL                  0x000F0000U        /*!< Data hold time                */
#define  I2C1_TIMINGR_SCLDEL                  0x00F00000U        /*!< Data setup time               */
#define  I2C1_TIMINGR_PRESC                   0xF0000000U        /*!< Timings prescaler             */


/* TODO I2C1 TIMEOUTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 TIMEOUTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_TIMEOUTR            			(((I2C_TIMEOUTR_TypeDef*)(I2C1_BASE+I2C_TIMEOUTR_OFFSET )))
#define I2C1_TIMEOUTR_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_TIMEOUTR_OFFSET)))

#define  I2C1_TIMEOUTR_TIMEOUTA               0x00000FFFU        /*!< Bus timeout A                 */
#define  I2C1_TIMEOUTR_TIDLE                  0x00001000U        /*!< Idle clock timeout detection  */
#define  I2C1_TIMEOUTR_TIMOUTEN               0x00008000U        /*!< Clock timeout enable          */
#define  I2C1_TIMEOUTR_TIMEOUTB               0x0FFF0000U        /*!< Bus timeout B                 */
#define  I2C1_TIMEOUTR_TEXTEN                 0x80000000U        /*!< Extended clock timeout enable */

/* TODO I2C1 ISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 ISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_ISR            			(((I2C_ISR_TypeDef*)(I2C1_BASE+I2C_ISR_OFFSET )))
#define I2C1_ISR_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_ISR_OFFSET)))

#define  I2C1_ISR_TXE                         0x00000001U        /*!< Transmit data register empty    */
#define  I2C1_ISR_TXIS                        0x00000002U        /*!< Transmit interrupt status       */
#define  I2C1_ISR_RXNE                        0x00000004U        /*!< Receive data register not empty */
#define  I2C1_ISR_ADDR                        0x00000008U        /*!< Address matched (slave mode)    */
#define  I2C1_ISR_NACKF                       0x00000010U        /*!< NACK received flag              */
#define  I2C1_ISR_STOPF                       0x00000020U        /*!< STOP detection flag             */
#define  I2C1_ISR_TC                          0x00000040U        /*!< Transfer complete (master mode) */
#define  I2C1_ISR_TCR                         0x00000080U        /*!< Transfer complete reload        */
#define  I2C1_ISR_BERR                        0x00000100U        /*!< Bus error                       */
#define  I2C1_ISR_ARLO                        0x00000200U        /*!< Arbitration lost                */
#define  I2C1_ISR_OVR                         0x00000400U        /*!< Overrun/Underrun                */
#define  I2C1_ISR_PECERR                      0x00000800U        /*!< PEC error in reception          */
#define  I2C1_ISR_TIMEOUT                     0x00001000U        /*!< Timeout or Tlow detection flag  */
#define  I2C1_ISR_ALERT                       0x00002000U        /*!< SMBus alert                     */
#define  I2C1_ISR_BUSY                        0x00008000U        /*!< Bus busy                        */
#define  I2C1_ISR_DIR                         0x00010000U        /*!< Transfer direction (slave mode) */
#define  I2C1_ISR_ADDCODE                     0x00FE0000U        /*!< Address match code (slave mode) */

/* TODO I2C1 ICR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 ICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_ICR            			(((I2C_ICR_TypeDef*)(I2C1_BASE+I2C_ICR_OFFSET )))
#define I2C1_ICR_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_ICR_OFFSET)))

#define  I2C1_ICR_ADDRCF                      0x00000008U        /*!< Address matched clear flag      */
#define  I2C1_ICR_NACKCF                      0x00000010U        /*!< NACK clear flag                 */
#define  I2C1_ICR_STOPCF                      0x00000020U        /*!< STOP detection clear flag       */
#define  I2C1_ICR_BERRCF                      0x00000100U        /*!< Bus error clear flag            */
#define  I2C1_ICR_ARLOCF                      0x00000200U        /*!< Arbitration lost clear flag     */
#define  I2C1_ICR_OVRCF                       0x00000400U        /*!< Overrun/Underrun clear flag     */
#define  I2C1_ICR_PECCF                       0x00000800U        /*!< PAC error clear flag            */
#define  I2C1_ICR_TIMOUTCF                    0x00001000U        /*!< Timeout clear flag              */
#define  I2C1_ICR_ALERTCF                     0x00002000U        /*!< Alert clear flag                */

/* TODO I2C1 PECR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 PECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_PECR            			(((I2C_PECR_TypeDef*)(I2C1_BASE+I2C_PECR_OFFSET )))
#define I2C1_PECR_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_PECR_OFFSET)))

#define  I2C1_PECR_PEC                        0x000000FFU        /*!< PEC register        */

/* TODO I2C1 RXDR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 RXDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_RXDR            			(((I2C_RXDR_TypeDef*)(I2C1_BASE+I2C_RXDR_OFFSET )))
#define I2C1_RXDR_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_RXDR_OFFSET)))

#define  I2C1_RXDR_RXDATA                     0x000000FFU        /*!< 8-bit receive data  */

/* TODO I2C1 TXDR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 TXDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C1_TXDR            			(((I2C_TXDR_TypeDef*)(I2C1_BASE+I2C_TXDR_OFFSET )))
#define I2C1_TXDR_R          			(*((__IO uint32_t *)(I2C1_BASE+I2C_TXDR_OFFSET)))

#define  I2C1_TXDR_TXDATA                     0x000000FFU        /*!< 8-bit transmit data */











































































/* TODO I2C2 CR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_CR1            			(((I2C_CR1_TypeDef*)(I2C2_BASE+I2C_CR1_OFFSET )))
#define I2C2_CR1_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_CR1_OFFSET)))


#define  I2C2_CR1_PE                          0x00000001U        /*!< Peripheral enable                   */
#define  I2C2_CR1_TXIE                        0x00000002U        /*!< TX interrupt enable                 */
#define  I2C2_CR1_RXIE                        0x00000004U        /*!< RX interrupt enable                 */
#define  I2C2_CR1_ADDRIE                      0x00000008U        /*!< Address match interrupt enable      */
#define  I2C2_CR1_NACKIE                      0x00000010U        /*!< NACK received interrupt enable      */
#define  I2C2_CR1_STOPIE                      0x00000020U        /*!< STOP detection interrupt enable     */
#define  I2C2_CR1_TCIE                        0x00000040U        /*!< Transfer complete interrupt enable  */
#define  I2C2_CR1_ERRIE                       0x00000080U        /*!< Errors interrupt enable             */
#define  I2C2_CR1_DNF                         0x00000F00U        /*!< Digital noise filter                */
#define  I2C2_CR1_ANFOFF                      0x00001000U        /*!< Analog noise filter OFF             */
#define  I2C2_CR1_TXDMAEN                     0x00004000U        /*!< DMA transmission requests enable    */
#define  I2C2_CR1_RXDMAEN                     0x00008000U        /*!< DMA reception requests enable       */
#define  I2C2_CR1_SBC                         0x00010000U        /*!< Slave byte control                  */
#define  I2C2_CR1_NOSTRETCH                   0x00020000U        /*!< Clock stretching disable            */
#define  I2C2_CR1_GCEN                        0x00080000U        /*!< General call enable                 */
#define  I2C2_CR1_SMBHEN                      0x00100000U        /*!< SMBus host address enable           */
#define  I2C2_CR1_SMBDEN                      0x00200000U        /*!< SMBus device default address enable */
#define  I2C2_CR1_ALERTEN                     0x00400000U        /*!< SMBus alert enable                  */
#define  I2C2_CR1_PECEN                       0x00800000U        /*!< PEC enable                          */

#define  I2C2_CR1_DFN                         I2C2_CR1_DNF                   /*!< Digital noise filter                */

/* TODO I2C2 CR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 CR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_CR2            			(((I2C_CR2_TypeDef*)(I2C2_BASE+I2C_CR2_OFFSET )))
#define I2C2_CR2_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_CR2_OFFSET)))


#define  I2C2_CR2_SADD                        0x000003FFU        /*!< Slave address (master mode)                             */
#define  I2C2_CR2_RD_WRN                      0x00000400U        /*!< Transfer direction (master mode)                        */
#define  I2C2_CR2_ADD10                       0x00000800U        /*!< 10-bit addressing mode (master mode)                    */
#define  I2C2_CR2_HEAD10R                     0x00001000U        /*!< 10-bit address header only read direction (master mode) */
#define  I2C2_CR2_START                       0x00002000U        /*!< START generation                                        */
#define  I2C2_CR2_STOP                        0x00004000U        /*!< STOP generation (master mode)                           */
#define  I2C2_CR2_NACK                        0x00008000U        /*!< NACK generation (slave mode)                            */
#define  I2C2_CR2_NBYTES                      0x00FF0000U        /*!< Number of bytes                                         */
#define  I2C2_CR2_RELOAD                      0x01000000U        /*!< NBYTES reload mode                                      */
#define  I2C2_CR2_AUTOEND                     0x02000000U        /*!< Automatic end mode (master mode)                        */
#define  I2C2_CR2_PECBYTE                     0x04000000U        /*!< Packet error checking byte                              */

/* TODO I2C2 OAR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 OAR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_OAR1            			(((I2C_OAR1_TypeDef*)(I2C2_BASE+I2C_OAR1_OFFSET )))
#define I2C2_OAR1_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_OAR1_OFFSET)))

#define  I2C2_OAR1_OA1                        0x000003FFU        /*!< Interface own address 1   */
#define  I2C2_OAR1_OA1MODE                    0x00000400U        /*!< Own address 1 10-bit mode */
#define  I2C2_OAR1_OA1EN                      0x00008000U        /*!< Own address 1 enable      */


/* TODO I2C2 OAR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 OAR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_OAR2            			(((I2C_OAR2_TypeDef*)(I2C2_BASE+I2C_OAR2_OFFSET )))
#define I2C2_OAR2_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_OAR2_OFFSET)))

#define  I2C2_OAR2_OA2                        0x000000FEU        /*!< Interface own address 2 */
#define  I2C2_OAR2_OA2MSK                     0x00000700U        /*!< Own address 2 masks     */
#define  I2C2_OAR2_OA2NOMASK                  0x00000000U        /*!< No mask */
#define  I2C2_OAR2_OA2MASK01                  0x00000100U        /*!< OA2[1] is masked, Only OA2[7:2] are compared */
#define  I2C2_OAR2_OA2MASK02                  0x00000200U        /*!< OA2[2:1] is masked, Only OA2[7:3] are compared */
#define  I2C2_OAR2_OA2MASK03                  0x00000300U        /*!< OA2[3:1] is masked, Only OA2[7:4] are compared */
#define  I2C2_OAR2_OA2MASK04                  0x00000400U        /*!< OA2[4:1] is masked, Only OA2[7:5] are compared */
#define  I2C2_OAR2_OA2MASK05                  0x00000500U        /*!< OA2[5:1] is masked, Only OA2[7:6] are compared */
#define  I2C2_OAR2_OA2MASK06                  0x00000600U        /*!< OA2[6:1] is masked, Only OA2[7] are compared */
#define  I2C2_OAR2_OA2MASK07                  0x00000700U        /*!< OA2[7:1] is masked, No comparison is done */
#define  I2C2_OAR2_OA2EN                      0x00008000U        /*!< Own address 2 enable    */


/* TODO I2C2 TIMINGR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 TIMINGR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_TIMINGR            			(((I2C_TIMINGR_TypeDef*)(I2C2_BASE+I2C_TIMINGR_OFFSET )))
#define I2C2_TIMINGR_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_TIMINGR_OFFSET)))

#define  I2C2_TIMINGR_SCLL                    0x000000FFU        /*!< SCL low period (master mode)  */
#define  I2C2_TIMINGR_SCLH                    0x0000FF00U        /*!< SCL high period (master mode) */
#define  I2C2_TIMINGR_SDADEL                  0x000F0000U        /*!< Data hold time                */
#define  I2C2_TIMINGR_SCLDEL                  0x00F00000U        /*!< Data setup time               */
#define  I2C2_TIMINGR_PRESC                   0xF0000000U        /*!< Timings prescaler             */


/* TODO I2C2 TIMEOUTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 TIMEOUTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_TIMEOUTR            			(((I2C_TIMEOUTR_TypeDef*)(I2C2_BASE+I2C_TIMEOUTR_OFFSET )))
#define I2C2_TIMEOUTR_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_TIMEOUTR_OFFSET)))

#define  I2C2_TIMEOUTR_TIMEOUTA               0x00000FFFU        /*!< Bus timeout A                 */
#define  I2C2_TIMEOUTR_TIDLE                  0x00001000U        /*!< Idle clock timeout detection  */
#define  I2C2_TIMEOUTR_TIMOUTEN               0x00008000U        /*!< Clock timeout enable          */
#define  I2C2_TIMEOUTR_TIMEOUTB               0x0FFF0000U        /*!< Bus timeout B                 */
#define  I2C2_TIMEOUTR_TEXTEN                 0x80000000U        /*!< Extended clock timeout enable */

/* TODO I2C2 ISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 ISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_ISR            			(((I2C_ISR_TypeDef*)(I2C2_BASE+I2C_ISR_OFFSET )))
#define I2C2_ISR_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_ISR_OFFSET)))

#define  I2C2_ISR_TXE                         0x00000001U        /*!< Transmit data register empty    */
#define  I2C2_ISR_TXIS                        0x00000002U        /*!< Transmit interrupt status       */
#define  I2C2_ISR_RXNE                        0x00000004U        /*!< Receive data register not empty */
#define  I2C2_ISR_ADDR                        0x00000008U        /*!< Address matched (slave mode)    */
#define  I2C2_ISR_NACKF                       0x00000010U        /*!< NACK received flag              */
#define  I2C2_ISR_STOPF                       0x00000020U        /*!< STOP detection flag             */
#define  I2C2_ISR_TC                          0x00000040U        /*!< Transfer complete (master mode) */
#define  I2C2_ISR_TCR                         0x00000080U        /*!< Transfer complete reload        */
#define  I2C2_ISR_BERR                        0x00000100U        /*!< Bus error                       */
#define  I2C2_ISR_ARLO                        0x00000200U        /*!< Arbitration lost                */
#define  I2C2_ISR_OVR                         0x00000400U        /*!< Overrun/Underrun                */
#define  I2C2_ISR_PECERR                      0x00000800U        /*!< PEC error in reception          */
#define  I2C2_ISR_TIMEOUT                     0x00001000U        /*!< Timeout or Tlow detection flag  */
#define  I2C2_ISR_ALERT                       0x00002000U        /*!< SMBus alert                     */
#define  I2C2_ISR_BUSY                        0x00008000U        /*!< Bus busy                        */
#define  I2C2_ISR_DIR                         0x00010000U        /*!< Transfer direction (slave mode) */
#define  I2C2_ISR_ADDCODE                     0x00FE0000U        /*!< Address match code (slave mode) */

/* TODO I2C2 ICR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 ICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_ICR            			(((I2C_ICR_TypeDef*)(I2C2_BASE+I2C_ICR_OFFSET )))
#define I2C2_ICR_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_ICR_OFFSET)))

#define  I2C2_ICR_ADDRCF                      0x00000008U        /*!< Address matched clear flag      */
#define  I2C2_ICR_NACKCF                      0x00000010U        /*!< NACK clear flag                 */
#define  I2C2_ICR_STOPCF                      0x00000020U        /*!< STOP detection clear flag       */
#define  I2C2_ICR_BERRCF                      0x00000100U        /*!< Bus error clear flag            */
#define  I2C2_ICR_ARLOCF                      0x00000200U        /*!< Arbitration lost clear flag     */
#define  I2C2_ICR_OVRCF                       0x00000400U        /*!< Overrun/Underrun clear flag     */
#define  I2C2_ICR_PECCF                       0x00000800U        /*!< PAC error clear flag            */
#define  I2C2_ICR_TIMOUTCF                    0x00001000U        /*!< Timeout clear flag              */
#define  I2C2_ICR_ALERTCF                     0x00002000U        /*!< Alert clear flag                */

/* TODO I2C2 PECR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 PECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_PECR            			(((I2C_PECR_TypeDef*)(I2C2_BASE+I2C_PECR_OFFSET )))
#define I2C2_PECR_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_PECR_OFFSET)))

#define  I2C2_PECR_PEC                        0x000000FFU        /*!< PEC register        */

/* TODO I2C2 RXDR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 RXDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_RXDR            			(((I2C_RXDR_TypeDef*)(I2C2_BASE+I2C_RXDR_OFFSET )))
#define I2C2_RXDR_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_RXDR_OFFSET)))

#define  I2C2_RXDR_RXDATA                     0x000000FFU        /*!< 8-bit receive data  */

/* TODO I2C2 TXDR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 TXDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C2_TXDR            			(((I2C_TXDR_TypeDef*)(I2C2_BASE+I2C_TXDR_OFFSET )))
#define I2C2_TXDR_R          			(*((__IO uint32_t *)(I2C2_BASE+I2C_TXDR_OFFSET)))

#define  I2C2_TXDR_TXDATA                     0x000000FFU        /*!< 8-bit transmit data */









































































/* TODO I2C3 CR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_CR1            			(((I2C_CR1_TypeDef*)(I2C3_BASE+I2C_CR1_OFFSET )))
#define I2C3_CR1_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_CR1_OFFSET)))


#define  I2C3_CR1_PE                          0x00000001U        /*!< Peripheral enable                   */
#define  I2C3_CR1_TXIE                        0x00000002U        /*!< TX interrupt enable                 */
#define  I2C3_CR1_RXIE                        0x00000004U        /*!< RX interrupt enable                 */
#define  I2C3_CR1_ADDRIE                      0x00000008U        /*!< Address match interrupt enable      */
#define  I2C3_CR1_NACKIE                      0x00000010U        /*!< NACK received interrupt enable      */
#define  I2C3_CR1_STOPIE                      0x00000020U        /*!< STOP detection interrupt enable     */
#define  I2C3_CR1_TCIE                        0x00000040U        /*!< Transfer complete interrupt enable  */
#define  I2C3_CR1_ERRIE                       0x00000080U        /*!< Errors interrupt enable             */
#define  I2C3_CR1_DNF                         0x00000F00U        /*!< Digital noise filter                */
#define  I2C3_CR1_ANFOFF                      0x00001000U        /*!< Analog noise filter OFF             */
#define  I2C3_CR1_TXDMAEN                     0x00004000U        /*!< DMA transmission requests enable    */
#define  I2C3_CR1_RXDMAEN                     0x00008000U        /*!< DMA reception requests enable       */
#define  I2C3_CR1_SBC                         0x00010000U        /*!< Slave byte control                  */
#define  I2C3_CR1_NOSTRETCH                   0x00020000U        /*!< Clock stretching disable            */
#define  I2C3_CR1_GCEN                        0x00080000U        /*!< General call enable                 */
#define  I2C3_CR1_SMBHEN                      0x00100000U        /*!< SMBus host address enable           */
#define  I2C3_CR1_SMBDEN                      0x00200000U        /*!< SMBus device default address enable */
#define  I2C3_CR1_ALERTEN                     0x00400000U        /*!< SMBus alert enable                  */
#define  I2C3_CR1_PECEN                       0x00800000U        /*!< PEC enable                          */

#define  I2C3_CR1_DFN                         I2C3_CR1_DNF                   /*!< Digital noise filter                */

/* TODO I2C3 CR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 CR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_CR2            			(((I2C_CR2_TypeDef*)(I2C3_BASE+I2C_CR2_OFFSET )))
#define I2C3_CR2_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_CR2_OFFSET)))


#define  I2C3_CR2_SADD                        0x000003FFU        /*!< Slave address (master mode)                             */
#define  I2C3_CR2_RD_WRN                      0x00000400U        /*!< Transfer direction (master mode)                        */
#define  I2C3_CR2_ADD10                       0x00000800U        /*!< 10-bit addressing mode (master mode)                    */
#define  I2C3_CR2_HEAD10R                     0x00001000U        /*!< 10-bit address header only read direction (master mode) */
#define  I2C3_CR2_START                       0x00002000U        /*!< START generation                                        */
#define  I2C3_CR2_STOP                        0x00004000U        /*!< STOP generation (master mode)                           */
#define  I2C3_CR2_NACK                        0x00008000U        /*!< NACK generation (slave mode)                            */
#define  I2C3_CR2_NBYTES                      0x00FF0000U        /*!< Number of bytes                                         */
#define  I2C3_CR2_RELOAD                      0x01000000U        /*!< NBYTES reload mode                                      */
#define  I2C3_CR2_AUTOEND                     0x02000000U        /*!< Automatic end mode (master mode)                        */
#define  I2C3_CR2_PECBYTE                     0x04000000U        /*!< Packet error checking byte                              */

/* TODO I2C3 OAR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 OAR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_OAR1            			(((I2C_OAR1_TypeDef*)(I2C3_BASE+I2C_OAR1_OFFSET )))
#define I2C3_OAR1_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_OAR1_OFFSET)))

#define  I2C3_OAR1_OA1                        0x000003FFU        /*!< Interface own address 1   */
#define  I2C3_OAR1_OA1MODE                    0x00000400U        /*!< Own address 1 10-bit mode */
#define  I2C3_OAR1_OA1EN                      0x00008000U        /*!< Own address 1 enable      */


/* TODO I2C3 OAR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 OAR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_OAR2            			(((I2C_OAR2_TypeDef*)(I2C3_BASE+I2C_OAR2_OFFSET )))
#define I2C3_OAR2_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_OAR2_OFFSET)))

#define  I2C3_OAR2_OA2                        0x000000FEU        /*!< Interface own address 2 */
#define  I2C3_OAR2_OA2MSK                     0x00000700U        /*!< Own address 2 masks     */
#define  I2C3_OAR2_OA2NOMASK                  0x00000000U        /*!< No mask */
#define  I2C3_OAR2_OA2MASK01                  0x00000100U        /*!< OA2[1] is masked, Only OA2[7:2] are compared */
#define  I2C3_OAR2_OA2MASK02                  0x00000200U        /*!< OA2[2:1] is masked, Only OA2[7:3] are compared */
#define  I2C3_OAR2_OA2MASK03                  0x00000300U        /*!< OA2[3:1] is masked, Only OA2[7:4] are compared */
#define  I2C3_OAR2_OA2MASK04                  0x00000400U        /*!< OA2[4:1] is masked, Only OA2[7:5] are compared */
#define  I2C3_OAR2_OA2MASK05                  0x00000500U        /*!< OA2[5:1] is masked, Only OA2[7:6] are compared */
#define  I2C3_OAR2_OA2MASK06                  0x00000600U        /*!< OA2[6:1] is masked, Only OA2[7] are compared */
#define  I2C3_OAR2_OA2MASK07                  0x00000700U        /*!< OA2[7:1] is masked, No comparison is done */
#define  I2C3_OAR2_OA2EN                      0x00008000U        /*!< Own address 2 enable    */


/* TODO I2C3 TIMINGR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 TIMINGR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_TIMINGR            			(((I2C_TIMINGR_TypeDef*)(I2C3_BASE+I2C_TIMINGR_OFFSET )))
#define I2C3_TIMINGR_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_TIMINGR_OFFSET)))

#define  I2C3_TIMINGR_SCLL                    0x000000FFU        /*!< SCL low period (master mode)  */
#define  I2C3_TIMINGR_SCLH                    0x0000FF00U        /*!< SCL high period (master mode) */
#define  I2C3_TIMINGR_SDADEL                  0x000F0000U        /*!< Data hold time                */
#define  I2C3_TIMINGR_SCLDEL                  0x00F00000U        /*!< Data setup time               */
#define  I2C3_TIMINGR_PRESC                   0xF0000000U        /*!< Timings prescaler             */


/* TODO I2C3 TIMEOUTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 TIMEOUTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_TIMEOUTR            			(((I2C_TIMEOUTR_TypeDef*)(I2C3_BASE+I2C_TIMEOUTR_OFFSET )))
#define I2C3_TIMEOUTR_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_TIMEOUTR_OFFSET)))

#define  I2C3_TIMEOUTR_TIMEOUTA               0x00000FFFU        /*!< Bus timeout A                 */
#define  I2C3_TIMEOUTR_TIDLE                  0x00001000U        /*!< Idle clock timeout detection  */
#define  I2C3_TIMEOUTR_TIMOUTEN               0x00008000U        /*!< Clock timeout enable          */
#define  I2C3_TIMEOUTR_TIMEOUTB               0x0FFF0000U        /*!< Bus timeout B                 */
#define  I2C3_TIMEOUTR_TEXTEN                 0x80000000U        /*!< Extended clock timeout enable */

/* TODO I2C3 ISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 ISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_ISR            			(((I2C_ISR_TypeDef*)(I2C3_BASE+I2C_ISR_OFFSET )))
#define I2C3_ISR_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_ISR_OFFSET)))

#define  I2C3_ISR_TXE                         0x00000001U        /*!< Transmit data register empty    */
#define  I2C3_ISR_TXIS                        0x00000002U        /*!< Transmit interrupt status       */
#define  I2C3_ISR_RXNE                        0x00000004U        /*!< Receive data register not empty */
#define  I2C3_ISR_ADDR                        0x00000008U        /*!< Address matched (slave mode)    */
#define  I2C3_ISR_NACKF                       0x00000010U        /*!< NACK received flag              */
#define  I2C3_ISR_STOPF                       0x00000020U        /*!< STOP detection flag             */
#define  I2C3_ISR_TC                          0x00000040U        /*!< Transfer complete (master mode) */
#define  I2C3_ISR_TCR                         0x00000080U        /*!< Transfer complete reload        */
#define  I2C3_ISR_BERR                        0x00000100U        /*!< Bus error                       */
#define  I2C3_ISR_ARLO                        0x00000200U        /*!< Arbitration lost                */
#define  I2C3_ISR_OVR                         0x00000400U        /*!< Overrun/Underrun                */
#define  I2C3_ISR_PECERR                      0x00000800U        /*!< PEC error in reception          */
#define  I2C3_ISR_TIMEOUT                     0x00001000U        /*!< Timeout or Tlow detection flag  */
#define  I2C3_ISR_ALERT                       0x00002000U        /*!< SMBus alert                     */
#define  I2C3_ISR_BUSY                        0x00008000U        /*!< Bus busy                        */
#define  I2C3_ISR_DIR                         0x00010000U        /*!< Transfer direction (slave mode) */
#define  I2C3_ISR_ADDCODE                     0x00FE0000U        /*!< Address match code (slave mode) */

/* TODO I2C3 ICR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 ICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_ICR            			(((I2C_ICR_TypeDef*)(I2C3_BASE+I2C_ICR_OFFSET )))
#define I2C3_ICR_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_ICR_OFFSET)))

#define  I2C3_ICR_ADDRCF                      0x00000008U        /*!< Address matched clear flag      */
#define  I2C3_ICR_NACKCF                      0x00000010U        /*!< NACK clear flag                 */
#define  I2C3_ICR_STOPCF                      0x00000020U        /*!< STOP detection clear flag       */
#define  I2C3_ICR_BERRCF                      0x00000100U        /*!< Bus error clear flag            */
#define  I2C3_ICR_ARLOCF                      0x00000200U        /*!< Arbitration lost clear flag     */
#define  I2C3_ICR_OVRCF                       0x00000400U        /*!< Overrun/Underrun clear flag     */
#define  I2C3_ICR_PECCF                       0x00000800U        /*!< PAC error clear flag            */
#define  I2C3_ICR_TIMOUTCF                    0x00001000U        /*!< Timeout clear flag              */
#define  I2C3_ICR_ALERTCF                     0x00002000U        /*!< Alert clear flag                */

/* TODO I2C3 PECR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 PECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_PECR            			(((I2C_PECR_TypeDef*)(I2C3_BASE+I2C_PECR_OFFSET )))
#define I2C3_PECR_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_PECR_OFFSET)))

#define  I2C3_PECR_PEC                        0x000000FFU        /*!< PEC register        */

/* TODO I2C3 RXDR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 RXDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_RXDR            			(((I2C_RXDR_TypeDef*)(I2C3_BASE+I2C_RXDR_OFFSET )))
#define I2C3_RXDR_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_RXDR_OFFSET)))

#define  I2C3_RXDR_RXDATA                     0x000000FFU        /*!< 8-bit receive data  */

/* TODO I2C3 TXDR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 TXDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C3_TXDR            			(((I2C_TXDR_TypeDef*)(I2C3_BASE+I2C_TXDR_OFFSET )))
#define I2C3_TXDR_R          			(*((__IO uint32_t *)(I2C3_BASE+I2C_TXDR_OFFSET)))

#define  I2C3_TXDR_TXDATA                     0x000000FFU        /*!< 8-bit transmit data */









































































/* TODO I2C4 CR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 CR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_CR1            			(((I2C_CR1_TypeDef*)(I2C4_BASE+I2C_CR1_OFFSET )))
#define I2C4_CR1_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_CR1_OFFSET)))


#define  I2C4_CR1_PE                          0x00000001U        /*!< Peripheral enable                   */
#define  I2C4_CR1_TXIE                        0x00000002U        /*!< TX interrupt enable                 */
#define  I2C4_CR1_RXIE                        0x00000004U        /*!< RX interrupt enable                 */
#define  I2C4_CR1_ADDRIE                      0x00000008U        /*!< Address match interrupt enable      */
#define  I2C4_CR1_NACKIE                      0x00000010U        /*!< NACK received interrupt enable      */
#define  I2C4_CR1_STOPIE                      0x00000020U        /*!< STOP detection interrupt enable     */
#define  I2C4_CR1_TCIE                        0x00000040U        /*!< Transfer complete interrupt enable  */
#define  I2C4_CR1_ERRIE                       0x00000080U        /*!< Errors interrupt enable             */
#define  I2C4_CR1_DNF                         0x00000F00U        /*!< Digital noise filter                */
#define  I2C4_CR1_ANFOFF                      0x00001000U        /*!< Analog noise filter OFF             */
#define  I2C4_CR1_TXDMAEN                     0x00004000U        /*!< DMA transmission requests enable    */
#define  I2C4_CR1_RXDMAEN                     0x00008000U        /*!< DMA reception requests enable       */
#define  I2C4_CR1_SBC                         0x00010000U        /*!< Slave byte control                  */
#define  I2C4_CR1_NOSTRETCH                   0x00020000U        /*!< Clock stretching disable            */
#define  I2C4_CR1_GCEN                        0x00080000U        /*!< General call enable                 */
#define  I2C4_CR1_SMBHEN                      0x00100000U        /*!< SMBus host address enable           */
#define  I2C4_CR1_SMBDEN                      0x00200000U        /*!< SMBus device default address enable */
#define  I2C4_CR1_ALERTEN                     0x00400000U        /*!< SMBus alert enable                  */
#define  I2C4_CR1_PECEN                       0x00800000U        /*!< PEC enable                          */

#define  I2C4_CR1_DFN                         I2C4_CR1_DNF                   /*!< Digital noise filter                */

/* TODO I2C4 CR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 CR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_CR2            			(((I2C_CR2_TypeDef*)(I2C4_BASE+I2C_CR2_OFFSET )))
#define I2C4_CR2_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_CR2_OFFSET)))


#define  I2C4_CR2_SADD                        0x000003FFU        /*!< Slave address (master mode)                             */
#define  I2C4_CR2_RD_WRN                      0x00000400U        /*!< Transfer direction (master mode)                        */
#define  I2C4_CR2_ADD10                       0x00000800U        /*!< 10-bit addressing mode (master mode)                    */
#define  I2C4_CR2_HEAD10R                     0x00001000U        /*!< 10-bit address header only read direction (master mode) */
#define  I2C4_CR2_START                       0x00002000U        /*!< START generation                                        */
#define  I2C4_CR2_STOP                        0x00004000U        /*!< STOP generation (master mode)                           */
#define  I2C4_CR2_NACK                        0x00008000U        /*!< NACK generation (slave mode)                            */
#define  I2C4_CR2_NBYTES                      0x00FF0000U        /*!< Number of bytes                                         */
#define  I2C4_CR2_RELOAD                      0x01000000U        /*!< NBYTES reload mode                                      */
#define  I2C4_CR2_AUTOEND                     0x02000000U        /*!< Automatic end mode (master mode)                        */
#define  I2C4_CR2_PECBYTE                     0x04000000U        /*!< Packet error checking byte                              */

/* TODO I2C4 OAR1 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 OAR1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_OAR1            			(((I2C_OAR1_TypeDef*)(I2C4_BASE+I2C_OAR1_OFFSET )))
#define I2C4_OAR1_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_OAR1_OFFSET)))

#define  I2C4_OAR1_OA1                        0x000003FFU        /*!< Interface own address 1   */
#define  I2C4_OAR1_OA1MODE                    0x00000400U        /*!< Own address 1 10-bit mode */
#define  I2C4_OAR1_OA1EN                      0x00008000U        /*!< Own address 1 enable      */


/* TODO I2C4 OAR2 */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 4 OAR2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_OAR2            			(((I2C_OAR2_TypeDef*)(I2C4_BASE+I2C_OAR2_OFFSET )))
#define I2C4_OAR2_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_OAR2_OFFSET)))

#define  I2C4_OAR2_OA2                        0x000000FEU        /*!< Interface own address 2 */
#define  I2C4_OAR2_OA2MSK                     0x00000700U        /*!< Own address 2 masks     */
#define  I2C4_OAR2_OA2NOMASK                  0x00000000U        /*!< No mask */
#define  I2C4_OAR2_OA2MASK01                  0x00000100U        /*!< OA2[1] is masked, Only OA2[7:2] are compared */
#define  I2C4_OAR2_OA2MASK02                  0x00000200U        /*!< OA2[2:1] is masked, Only OA2[7:3] are compared */
#define  I2C4_OAR2_OA2MASK03                  0x00000300U        /*!< OA2[3:1] is masked, Only OA2[7:4] are compared */
#define  I2C4_OAR2_OA2MASK04                  0x00000400U        /*!< OA2[4:1] is masked, Only OA2[7:5] are compared */
#define  I2C4_OAR2_OA2MASK05                  0x00000500U        /*!< OA2[5:1] is masked, Only OA2[7:6] are compared */
#define  I2C4_OAR2_OA2MASK06                  0x00000600U        /*!< OA2[6:1] is masked, Only OA2[7] are compared */
#define  I2C4_OAR2_OA2MASK07                  0x00000700U        /*!< OA2[7:1] is masked, No comparison is done */
#define  I2C4_OAR2_OA2EN                      0x00008000U        /*!< Own address 2 enable    */


/* TODO I2C4 TIMINGR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 5 TIMINGR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_TIMINGR            			(((I2C_TIMINGR_TypeDef*)(I2C4_BASE+I2C_TIMINGR_OFFSET )))
#define I2C4_TIMINGR_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_TIMINGR_OFFSET)))

#define  I2C4_TIMINGR_SCLL                    0x000000FFU        /*!< SCL low period (master mode)  */
#define  I2C4_TIMINGR_SCLH                    0x0000FF00U        /*!< SCL high period (master mode) */
#define  I2C4_TIMINGR_SDADEL                  0x000F0000U        /*!< Data hold time                */
#define  I2C4_TIMINGR_SCLDEL                  0x00F00000U        /*!< Data setup time               */
#define  I2C4_TIMINGR_PRESC                   0xF0000000U        /*!< Timings prescaler             */


/* TODO I2C4 TIMEOUTR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 6 TIMEOUTR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_TIMEOUTR            			(((I2C_TIMEOUTR_TypeDef*)(I2C4_BASE+I2C_TIMEOUTR_OFFSET )))
#define I2C4_TIMEOUTR_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_TIMEOUTR_OFFSET)))

#define  I2C4_TIMEOUTR_TIMEOUTA               0x00000FFFU        /*!< Bus timeout A                 */
#define  I2C4_TIMEOUTR_TIDLE                  0x00001000U        /*!< Idle clock timeout detection  */
#define  I2C4_TIMEOUTR_TIMOUTEN               0x00008000U        /*!< Clock timeout enable          */
#define  I2C4_TIMEOUTR_TIMEOUTB               0x0FFF0000U        /*!< Bus timeout B                 */
#define  I2C4_TIMEOUTR_TEXTEN                 0x80000000U        /*!< Extended clock timeout enable */

/* TODO I2C4 ISR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 ISR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_ISR            			(((I2C_ISR_TypeDef*)(I2C4_BASE+I2C_ISR_OFFSET )))
#define I2C4_ISR_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_ISR_OFFSET)))

#define  I2C4_ISR_TXE                         0x00000001U        /*!< Transmit data register empty    */
#define  I2C4_ISR_TXIS                        0x00000002U        /*!< Transmit interrupt status       */
#define  I2C4_ISR_RXNE                        0x00000004U        /*!< Receive data register not empty */
#define  I2C4_ISR_ADDR                        0x00000008U        /*!< Address matched (slave mode)    */
#define  I2C4_ISR_NACKF                       0x00000010U        /*!< NACK received flag              */
#define  I2C4_ISR_STOPF                       0x00000020U        /*!< STOP detection flag             */
#define  I2C4_ISR_TC                          0x00000040U        /*!< Transfer complete (master mode) */
#define  I2C4_ISR_TCR                         0x00000080U        /*!< Transfer complete reload        */
#define  I2C4_ISR_BERR                        0x00000100U        /*!< Bus error                       */
#define  I2C4_ISR_ARLO                        0x00000200U        /*!< Arbitration lost                */
#define  I2C4_ISR_OVR                         0x00000400U        /*!< Overrun/Underrun                */
#define  I2C4_ISR_PECERR                      0x00000800U        /*!< PEC error in reception          */
#define  I2C4_ISR_TIMEOUT                     0x00001000U        /*!< Timeout or Tlow detection flag  */
#define  I2C4_ISR_ALERT                       0x00002000U        /*!< SMBus alert                     */
#define  I2C4_ISR_BUSY                        0x00008000U        /*!< Bus busy                        */
#define  I2C4_ISR_DIR                         0x00010000U        /*!< Transfer direction (slave mode) */
#define  I2C4_ISR_ADDCODE                     0x00FE0000U        /*!< Address match code (slave mode) */

/* TODO I2C4 ICR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 ICR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_ICR            			(((I2C_ICR_TypeDef*)(I2C4_BASE+I2C_ICR_OFFSET )))
#define I2C4_ICR_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_ICR_OFFSET)))

#define  I2C4_ICR_ADDRCF                      0x00000008U        /*!< Address matched clear flag      */
#define  I2C4_ICR_NACKCF                      0x00000010U        /*!< NACK clear flag                 */
#define  I2C4_ICR_STOPCF                      0x00000020U        /*!< STOP detection clear flag       */
#define  I2C4_ICR_BERRCF                      0x00000100U        /*!< Bus error clear flag            */
#define  I2C4_ICR_ARLOCF                      0x00000200U        /*!< Arbitration lost clear flag     */
#define  I2C4_ICR_OVRCF                       0x00000400U        /*!< Overrun/Underrun clear flag     */
#define  I2C4_ICR_PECCF                       0x00000800U        /*!< PAC error clear flag            */
#define  I2C4_ICR_TIMOUTCF                    0x00001000U        /*!< Timeout clear flag              */
#define  I2C4_ICR_ALERTCF                     0x00002000U        /*!< Alert clear flag                */

/* TODO I2C4 PECR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 PECR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_PECR            			(((I2C_PECR_TypeDef*)(I2C4_BASE+I2C_PECR_OFFSET )))
#define I2C4_PECR_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_PECR_OFFSET)))

#define  I2C4_PECR_PEC                        0x000000FFU        /*!< PEC register        */

/* TODO I2C4 RXDR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 RXDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_RXDR            			(((I2C_RXDR_TypeDef*)(I2C4_BASE+I2C_RXDR_OFFSET )))
#define I2C4_RXDR_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_RXDR_OFFSET)))

#define  I2C4_RXDR_RXDATA                     0x000000FFU        /*!< 8-bit receive data  */

/* TODO I2C4 TXDR */
/*////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 7 TXDR ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////*/
#define I2C4_TXDR            			(((I2C_TXDR_TypeDef*)(I2C4_BASE+I2C_TXDR_OFFSET )))
#define I2C4_TXDR_R          			(*((__IO uint32_t *)(I2C4_BASE+I2C_TXDR_OFFSET)))

#define  I2C4_TXDR_TXDATA                     0x000000FFU        /*!< 8-bit transmit data */






















/*TODO functions*/


uint32_t I2C2_Init(void);
uint32_t I2C2_SendBytes(uint32_t address,uint32_t nBytes,uint8_t* data);
uint32_t I2C2_ReadBytes(uint32_t address,uint32_t nBytes,uint8_t* data);


#endif /* I2C_H_ */
