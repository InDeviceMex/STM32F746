/*
 * USART.h
 *
 *  Created on: 02/10/2018
 *      Author: InDev
 */

#ifndef USART_H_
#define USART_H_

#include "stm32f746xx.h"
#include "RCC.h"
#include "NVIC.h"
#include "GPIO.h"


#define USART1_BASE             ((uint32_t)0x40011000U)
#define USART1_OFFSET           ((uint32_t)0x00011000U)
#define USART2_BASE             ((uint32_t)0x40004400U)
#define USART2_OFFSET           ((uint32_t)0x00004400U)
#define USART3_BASE             ((uint32_t)0x40004800U)
#define USART3_OFFSET           ((uint32_t)0x00004800U)

#define UART4_BASE              ((uint32_t)0x40004C00U)
#define UART4_OFFSET            ((uint32_t)0x00004C00U)
#define UART5_BASE              ((uint32_t)0x40005000U)
#define UART5_OFFSET            ((uint32_t)0x00005000U)

#define USART6_BASE             ((uint32_t)0x40011400U)
#define USART6_OFFSET           ((uint32_t)0x00011400U)

#define UART7_BASE              ((uint32_t)0x40007800U)
#define UART7_OFFSET            ((uint32_t)0x00007800U)
#define UART8_BASE              ((uint32_t)0x40007C00U)
#define UART8_OFFSET            ((uint32_t)0x00007C00U)



typedef __IO struct
{
  __IO uint32_t CR1;    /*!< USART Control register 1,                 Address offset: 0x00 */
  __IO uint32_t CR2;    /*!< USART Control register 2,                 Address offset: 0x04 */
  __IO uint32_t CR3;    /*!< USART Control register 3,                 Address offset: 0x08 */
  __IO uint32_t BRR;    /*!< USART Baud rate register,                 Address offset: 0x0C */
  __IO uint32_t GTPR;   /*!< USART Guard time and prescaler register,  Address offset: 0x10 */
  __IO uint32_t RTOR;   /*!< USART Receiver Time Out register,         Address offset: 0x14 */
  __IO uint32_t RQR;    /*!< USART Request register,                   Address offset: 0x18 */
  __IO uint32_t ISR;    /*!< USART Interrupt and status register,      Address offset: 0x1C */
  __IO uint32_t ICR;    /*!< USART Interrupt flag Clear register,      Address offset: 0x20 */
  __IO uint32_t RDR;    /*!< USART Receive Data register,              Address offset: 0x24 */
  __IO uint32_t TDR;    /*!< USART Transmit Data register,             Address offset: 0x28 */
} USART_TypeDef;


#define USART1              ((USART_TypeDef *) USART1_BASE)
#define USART2              ((USART_TypeDef *) USART2_BASE)
#define USART3              ((USART_TypeDef *) USART3_BASE)

#define UART4               ((USART_TypeDef *) UART4_BASE)
#define UART5               ((USART_TypeDef *) UART5_BASE)

#define USART6              ((USART_TypeDef *) USART6_BASE)
#define UART7               ((USART_TypeDef *) UART7_BASE)
#define UART8               ((USART_TypeDef *) UART8_BASE)

/******************************************************************************/
/*                                                                            */
/*      Universal Synchronous Asynchronous Receiver Transmitter (USART)       */
/*                                                                            */
/******************************************************************************/
/******************  Bit definition for USART_CR1 register  *******************/
#define  USART_CR1_UE                        0x00000001U            /*!< USART Enable                                    */
#define  USART_CR1_RE                        0x00000004U            /*!< Receiver Enable                                 */
#define  USART_CR1_TE                        0x00000008U            /*!< Transmitter Enable                              */
#define  USART_CR1_IDLEIE                    0x00000010U            /*!< IDLE Interrupt Enable                           */
#define  USART_CR1_RXNEIE                    0x00000020U            /*!< RXNE Interrupt Enable                           */
#define  USART_CR1_TCIE                      0x00000040U            /*!< Transmission Complete Interrupt Enable          */
#define  USART_CR1_TXEIE                     0x00000080U            /*!< TXE Interrupt Enable                            */
#define  USART_CR1_PEIE                      0x00000100U            /*!< PE Interrupt Enable                             */
#define  USART_CR1_PS                        0x00000200U            /*!< Parity Selection                                */
#define  USART_CR1_PCE                       0x00000400U            /*!< Parity Control Enable                           */
#define  USART_CR1_WAKE                      0x00000800U            /*!< Receiver Wakeup method                          */
#define  USART_CR1_M                         0x10001000U            /*!< Word length                                     */
#define  USART_CR1_M_0                       0x00001000U            /*!< Word length - Bit 0                             */
#define  USART_CR1_MME                       0x00002000U            /*!< Mute Mode Enable                                */
#define  USART_CR1_CMIE                      0x00004000U            /*!< Character match interrupt enable                */
#define  USART_CR1_OVER8                     0x00008000U            /*!< Oversampling by 8-bit or 16-bit mode            */
#define  USART_CR1_DEDT                      0x001F0000U            /*!< DEDT[4:0] bits (Driver Enable Deassertion Time) */
#define  USART_CR1_DEDT_0                    0x00010000U            /*!< Bit 0 */
#define  USART_CR1_DEDT_1                    0x00020000U            /*!< Bit 1 */
#define  USART_CR1_DEDT_2                    0x00040000U            /*!< Bit 2 */
#define  USART_CR1_DEDT_3                    0x00080000U            /*!< Bit 3 */
#define  USART_CR1_DEDT_4                    0x00100000U            /*!< Bit 4 */
#define  USART_CR1_DEAT                      0x03E00000U            /*!< DEAT[4:0] bits (Driver Enable Assertion Time)   */
#define  USART_CR1_DEAT_0                    0x00200000U            /*!< Bit 0 */
#define  USART_CR1_DEAT_1                    0x00400000U            /*!< Bit 1 */
#define  USART_CR1_DEAT_2                    0x00800000U            /*!< Bit 2 */
#define  USART_CR1_DEAT_3                    0x01000000U            /*!< Bit 3 */
#define  USART_CR1_DEAT_4                    0x02000000U            /*!< Bit 4 */
#define  USART_CR1_RTOIE                     0x04000000U            /*!< Receive Time Out interrupt enable */
#define  USART_CR1_EOBIE                     0x08000000U            /*!< End of Block interrupt enable     */
#define  USART_CR1_M_1                       0x10000000U            /*!< Word length - Bit 1               */

/******************  Bit definition for USART_CR2 register  *******************/
#define  USART_CR2_ADDM7                     0x00000010U            /*!< 7-bit or 4-bit Address Detection       */
#define  USART_CR2_LBDL                      0x00000020U            /*!< LIN Break Detection Length             */
#define  USART_CR2_LBDIE                     0x00000040U            /*!< LIN Break Detection Interrupt Enable   */
#define  USART_CR2_LBCL                      0x00000100U            /*!< Last Bit Clock pulse                   */
#define  USART_CR2_CPHA                      0x00000200U            /*!< Clock Phase                            */
#define  USART_CR2_CPOL                      0x00000400U            /*!< Clock Polarity                         */
#define  USART_CR2_CLKEN                     0x00000800U            /*!< Clock Enable                           */
#define  USART_CR2_STOP                      0x00003000U            /*!< STOP[1:0] bits (STOP bits)             */
#define  USART_CR2_STOP_0                    0x00001000U            /*!< Bit 0 */
#define  USART_CR2_STOP_1                    0x00002000U            /*!< Bit 1 */
#define  USART_CR2_LINEN                     0x00004000U            /*!< LIN mode enable                        */
#define  USART_CR2_SWAP                      0x00008000U            /*!< SWAP TX/RX pins                        */
#define  USART_CR2_RXINV                     0x00010000U            /*!< RX pin active level inversion          */
#define  USART_CR2_TXINV                     0x00020000U            /*!< TX pin active level inversion          */
#define  USART_CR2_DATAINV                   0x00040000U            /*!< Binary data inversion                  */
#define  USART_CR2_MSBFIRST                  0x00080000U            /*!< Most Significant Bit First             */
#define  USART_CR2_ABREN                     0x00100000U            /*!< Auto Baud-Rate Enable                  */
#define  USART_CR2_ABRMODE                   0x00600000U            /*!< ABRMOD[1:0] bits (Auto Baud-Rate Mode) */
#define  USART_CR2_ABRMODE_0                 0x00200000U            /*!< Bit 0 */
#define  USART_CR2_ABRMODE_1                 0x00400000U            /*!< Bit 1 */
#define  USART_CR2_RTOEN                     0x00800000U            /*!< Receiver Time-Out enable  */
#define  USART_CR2_ADD                       0xFF000000U            /*!< Address of the USART node */

/******************  Bit definition for USART_CR3 register  *******************/
#define  USART_CR3_EIE                       0x00000001U            /*!< Error Interrupt Enable                         */
#define  USART_CR3_IREN                      0x00000002U            /*!< IrDA mode Enable                               */
#define  USART_CR3_IRLP                      0x00000004U            /*!< IrDA Low-Power                                 */
#define  USART_CR3_HDSEL                     0x00000008U            /*!< Half-Duplex Selection                          */
#define  USART_CR3_NACK                      0x00000010U            /*!< SmartCard NACK enable                          */
#define  USART_CR3_SCEN                      0x00000020U            /*!< SmartCard mode enable                          */
#define  USART_CR3_DMAR                      0x00000040U            /*!< DMA Enable Receiver                            */
#define  USART_CR3_DMAT                      0x00000080U            /*!< DMA Enable Transmitter                         */
#define  USART_CR3_RTSE                      0x00000100U            /*!< RTS Enable                                     */
#define  USART_CR3_CTSE                      0x00000200U            /*!< CTS Enable                                     */
#define  USART_CR3_CTSIE                     0x00000400U            /*!< CTS Interrupt Enable                           */
#define  USART_CR3_ONEBIT                    0x00000800U            /*!< One sample bit method enable                   */
#define  USART_CR3_OVRDIS                    0x00001000U            /*!< Overrun Disable                                */
#define  USART_CR3_DDRE                      0x00002000U            /*!< DMA Disable on Reception Error                 */
#define  USART_CR3_DEM                       0x00004000U            /*!< Driver Enable Mode                             */
#define  USART_CR3_DEP                       0x00008000U            /*!< Driver Enable Polarity Selection               */
#define  USART_CR3_SCARCNT                   0x000E0000U            /*!< SCARCNT[2:0] bits (SmartCard Auto-Retry Count) */
#define  USART_CR3_SCARCNT_0                 0x00020000U            /*!< Bit 0 */
#define  USART_CR3_SCARCNT_1                 0x00040000U            /*!< Bit 1 */
#define  USART_CR3_SCARCNT_2                 0x00080000U            /*!< Bit 2 */


/******************  Bit definition for USART_BRR register  *******************/
#define  USART_BRR_DIV_FRACTION              0x000FU                /*!< Fraction of USARTDIV */
#define  USART_BRR_DIV_MANTISSA              0xFFF0U                /*!< Mantissa of USARTDIV */

/******************  Bit definition for USART_GTPR register  ******************/
#define  USART_GTPR_PSC                      0x00FFU                /*!< PSC[7:0] bits (Prescaler value) */
#define  USART_GTPR_GT                       0xFF00U                /*!< GT[7:0] bits (Guard time value) */


/*******************  Bit definition for USART_RTOR register  *****************/
#define  USART_RTOR_RTO                      0x00FFFFFFU            /*!< Receiver Time Out Value */
#define  USART_RTOR_BLEN                     0xFF000000U            /*!< Block Length */

/*******************  Bit definition for USART_RQR register  ******************/
#define  USART_RQR_ABRRQ                     0x0001U                /*!< Auto-Baud Rate Request      */
#define  USART_RQR_SBKRQ                     0x0002U                /*!< Send Break Request          */
#define  USART_RQR_MMRQ                      0x0004U                /*!< Mute Mode Request           */
#define  USART_RQR_RXFRQ                     0x0008U                /*!< Receive Data flush Request  */
#define  USART_RQR_TXFRQ                     0x0010U                /*!< Transmit data flush Request */

/*******************  Bit definition for USART_ISR register  ******************/
#define  USART_ISR_PE                        0x00000001U            /*!< Parity Error                        */
#define  USART_ISR_FE                        0x00000002U            /*!< Framing Error                       */
#define  USART_ISR_NE                        0x00000004U            /*!< Noise detected Flag                 */
#define  USART_ISR_ORE                       0x00000008U            /*!< OverRun Error                       */
#define  USART_ISR_IDLE                      0x00000010U            /*!< IDLE line detected                  */
#define  USART_ISR_RXNE                      0x00000020U            /*!< Read Data Register Not Empty        */
#define  USART_ISR_TC                        0x00000040U            /*!< Transmission Complete               */
#define  USART_ISR_TXE                       0x00000080U            /*!< Transmit Data Register Empty        */
#define  USART_ISR_LBDF                      0x00000100U            /*!< LIN Break Detection Flag            */
#define  USART_ISR_CTSIF                     0x00000200U            /*!< CTS interrupt flag                  */
#define  USART_ISR_CTS                       0x00000400U            /*!< CTS flag                            */
#define  USART_ISR_RTOF                      0x00000800U            /*!< Receiver Time Out                   */
#define  USART_ISR_EOBF                      0x00001000U            /*!< End Of Block Flag                   */
#define  USART_ISR_ABRE                      0x00004000U            /*!< Auto-Baud Rate Error                */
#define  USART_ISR_ABRF                      0x00008000U            /*!< Auto-Baud Rate Flag                 */
#define  USART_ISR_BUSY                      0x00010000U            /*!< Busy Flag                           */
#define  USART_ISR_CMF                       0x00020000U            /*!< Character Match Flag                */
#define  USART_ISR_SBKF                      0x00040000U            /*!< Send Break Flag                     */
#define  USART_ISR_RWU                       0x00080000U            /*!< Receive Wake Up from mute mode Flag */
#define  USART_ISR_WUF                       0x00100000U            /*!< Wake Up from stop mode Flag         */
#define  USART_ISR_TEACK                     0x00200000U            /*!< Transmit Enable Acknowledge Flag    */
#define  USART_ISR_REACK                     0x00400000U            /*!< Receive Enable Acknowledge Flag     */

/* Legacy define */
#define  USART_ISR_LBD                       USART_ISR_LBDF

/*******************  Bit definition for USART_ICR register  ******************/
#define  USART_ICR_PECF                      0x00000001U            /*!< Parity Error Clear Flag             */
#define  USART_ICR_FECF                      0x00000002U            /*!< Framing Error Clear Flag            */
#define  USART_ICR_NCF                       0x00000004U            /*!< Noise detected Clear Flag           */
#define  USART_ICR_ORECF                     0x00000008U            /*!< OverRun Error Clear Flag            */
#define  USART_ICR_IDLECF                    0x00000010U            /*!< IDLE line detected Clear Flag       */
#define  USART_ICR_TCCF                      0x00000040U            /*!< Transmission Complete Clear Flag    */
#define  USART_ICR_LBDCF                     0x00000100U            /*!< LIN Break Detection Clear Flag      */
#define  USART_ICR_CTSCF                     0x00000200U            /*!< CTS Interrupt Clear Flag            */
#define  USART_ICR_RTOCF                     0x00000800U            /*!< Receiver Time Out Clear Flag        */
#define  USART_ICR_EOBCF                     0x00001000U            /*!< End Of Block Clear Flag             */
#define  USART_ICR_CMCF                      0x00020000U            /*!< Character Match Clear Flag          */
#define  USART_ICR_WUCF                      0x00100000U            /*!< Wake Up from stop mode Clear Flag   */

/*******************  Bit definition for USART_RDR register  ******************/
#define  USART_RDR_RDR                       0x01FFU                /*!< RDR[8:0] bits (Receive Data value) */

/*******************  Bit definition for USART_TDR register  ******************/
#define  USART_TDR_TDR                       0x01FFU                /*!< TDR[8:0] bits (Transmit Data value) */

uint32_t USART_Init(void);

#endif /* USART_H_ */
