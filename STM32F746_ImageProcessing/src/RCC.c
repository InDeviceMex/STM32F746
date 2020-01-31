/*
 * RCC.c
 *
 *  Created on: 9 ago. 2018
 *      Author: InDev
 */


#include "RCC.h"


static void RCC_SetSysClock(void);
static void RCC_SetSAIClock(void);
static void RCC_SetI2SClock(void);

uint32_t SystemCoreClock = 216000000;
uint32_t HCLKFreq=0;
uint32_t PCLK1Freq=0;
uint32_t PCLK2Freq=0;

const uint8_t AHBPrescTable[16] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9};
const uint8_t APBPrescTable[8] = {0, 0, 0, 0, 1, 2, 3, 4};



void RCC_SystemInit(void)
{

  /* FPU settings ------------------------------------------------------------*/
 	FPU_Init();
  /* Reset the RCC clock configuration to the default reset state ------------*/
  /* Set HSION bit */
  MPU_DiscableCacheSRAM2();
  AccessControl_EnableTCM();
  AccessControl_EnableTCM_RetryRMW();
  RCC_CR->HSION=1;

  /* Reset CFGR register */
  RCC_CFGR_R = 0x00000000;

  /* Reset HSEON, CSSON and PLLON bits */
  RCC_CR->HSEON=0;
  RCC_CR->CSSON=0;
  RCC_CR->PLLON=0;

  /* Reset PLLCFGR register */
  RCC_PLLCFGR->PLLM=16;
  RCC_PLLCFGR->PLLN=192;
  RCC_PLLCFGR->PLLP=0;
  RCC_PLLCFGR->PLLSRC=0;
  RCC_PLLCFGR->PLLQ=4;

  /* Reset HSEBYP bit */
  RCC_CR->HSEBYP=0;

  /* Disable all interrupts */
  RCC_CIR_R = 0x00000000;

  /* Configure Flash prefetch, Instruction cache, Data cache and wait state */
  FLASH_Init();
  CACHE_EnableICache();
  CACHE_EnableDCache();

  RCC_SetSysClock();
  /* Configure the Vector Table location add offset address ------------------*/
//#ifdef VECT_TAB_SRAM
  //SCB->VTOR = 0;//RAMDTCM_BASE | VECT_TAB_OFFSET; /* Vector Table Relocation in Internal SRAM */
//#else
  SCB->VTOR = FLASH_BASE | VECT_TAB_OFFSET; /* Vector Table Relocation in Internal FLASH */
//#endif
}


static void RCC_SetSAIClock(void)
{
	RCC_PLLSAICFGR->PLLSAIN=384;  //VCO 384MHz
	RCC_PLLSAICFGR->PLLSAIP=3;   // 48 MHz USB, RNG, SDMMC
	RCC_PLLSAICFGR->PLLSAIQ=12;  // SAI CLK 32MHz
	RCC_PLLSAICFGR->PLLSAIR=7;   // LCD CLK 54.85MHz

	RCC_DKCFGR1->PLLSAIDIVQ=0;
	RCC_DKCFGR1->PLLSAIDIVR=RCC_DKCFGR1_PLLSAIDIVR_2;
    RCC_CR->PLLSAION = 1;

    /* Wait till the main PLL is ready */
    while((RCC_CR->PLLSAIRDY) == 0)
    {
    }

}



static void RCC_SetI2SClock(void)
{
	RCC_PLLI2SCFGR->PLLI2SN=384;  //VCO 384MHz
	RCC_PLLI2SCFGR->PLLI2SP=3;   // 48 MHz USB, RNG, SDMMC
	RCC_PLLI2SCFGR->PLLI2SQ=12;  // SAI CLK 32MHz
	RCC_PLLI2SCFGR->PLLI2SR=7;   // LCD CLK 54.85MHz

	RCC_DKCFGR1->PLLI2SDIVQ=0;
    RCC_CR->PLLI2SON = 1;

    /* Wait till the main PLL is ready */
    while((RCC_CR->PLLI2SRDY) == 0)
    {
    }

}


static void RCC_SetSysClock(void)
{
/******************************************************************************/
/*            PLL (clocked by HSE) used as System clock source                */
/******************************************************************************/
  __IO uint32_t StartUpCounter = 0, HSEStatus = 0;

  /* Enable HSE */
  RCC_CR->HSEON = 1;

  /* Wait till HSE is ready and if Time out is reached exit */
  do
  {
    HSEStatus = RCC_CR->HSERDY;
    StartUpCounter++;
  } while((HSEStatus == 0) && (StartUpCounter != HSE_STARTUP_TIMEOUT));

  if ((RCC_CR->HSERDY) != RESET)
  {
    HSEStatus = (uint32_t)0x01;
  }
  else
  {
    HSEStatus = (uint32_t)0x00;
  }

  if (HSEStatus == (uint32_t)0x01)
  {
    /* Select regulator voltage output Scale 1 mode */
    RCC_APB1ENR->PWREN = 1;
    PWR_CR1->VOS = 3;
    PWR_CR1->ODEN=1;

    /* HCLK = SYSCLK / 1*/
    RCC_CFGR->HPRE = 0;

    /* PCLK2 = HCLK / 2*/
    RCC_CFGR->PPRE2 = 4;

    /* PCLK1 = HCLK / 4*/
    RCC_CFGR->PPRE1 = 5;

    /* Configure the main PLL */
    RCC_PLLCFGR->PLLM=8;
    RCC_PLLCFGR->PLLN=400;
    RCC_PLLCFGR->PLLP=(2>>1)-1;
    RCC_PLLCFGR->PLLQ=9;
    RCC_PLLCFGR->PLLSRC=1;


   // RCC->PLLCFGR = PLL_M | (PLL_N << 6) | (((PLL_P >> 1) -1) << 16) |
     //              (RCC_PLLCFGR_PLLSRC_HSE) | (PLL_Q << 24);

    /* Enable the main PLL */
    RCC_CR->PLLON = 1;

    /* Wait till the main PLL is ready */
    while((RCC_CR->PLLRDY) == 0)
    {
    }


    /* Select the main PLL as system clock source */
    RCC_CFGR->SW=2;
    /* Wait till the main PLL is used as system clock source */
    while ((RCC_CFGR->SWS ) != 2)
    {
    }
  }
  else
  { /* If HSE fails to start-up, the application will have wrong clock
         configuration. User can add here some code to deal with this error */
  }
  RCC_SetI2SClock();
  RCC_SetSAIClock();
  RCC_APB2ENR->SYSCFGEN=1;
  RCC_AHB1ENR->GPIOAEN=1;
  RCC_AHB1ENR->GPIOCEN=1;
  RCC_CFGR->MCO2PRE=7;
  RCC_CFGR->MCO1PRE=0;
  RCC_CFGR->MCO1=0;
  RCC_CFGR->MCO2=1;

  SYSCFG_CMPCR->CMP_PD=1;
  while(!SYSCFG_CMPCR->READY);


  GPIOC_MODER->MODER9		=2;
  GPIOC_OSPEEDR->OSPEEDR9	=3;
  GPIOC_PUPDR->PUPDR9		=0;
  GPIOC_OTYPER->OTYPER9		=0;
  GPIOC_AFRH->AFR9			=0;

  GPIOA_MODER->MODER8		=2;
  GPIOA_OSPEEDR->OSPEEDR8	=3;
  GPIOA_PUPDR->PUPDR8		=0;
  GPIOA_OTYPER->OTYPER8		=0;
  GPIOA_AFRH->AFR8			=0;


  GPIOA_MODER->MODER0		=1;
  GPIOA_OSPEEDR->OSPEEDR0	=3;
  GPIOA_PUPDR->PUPDR0		=0;
  GPIOA_OTYPER->OTYPER0		=0;
  GPIOA_ODR->ODR0			=1;

}
uint32_t RCC_GetSysClockFreq(void)
{
  uint32_t pllm = 0, pllvco = 0, pllp = 0;
  uint32_t sysclockfreq = 0;

  switch (RCC_CFGR->SWS)
  {
    case 0:  /* HSI used as system clock source */
    {
      sysclockfreq = HSI_VALUE;
       break;
    }
    case 1:  /* HSE used as system clock  source */
    {
      sysclockfreq = HSE_VALUE;
      break;
    }
    case 2:  /* PLL used as system clock  source */
    {
      /* PLL_VCO = (HSE_VALUE or HSI_VALUE / PLLM) * PLLN
      SYSCLK = PLL_VCO / PLLP */
      pllm = RCC_PLLCFGR->PLLM;
      if (RCC_PLLCFGR->PLLSRC != RCC_PLLCFGR_PLLSRC_HSI)
      {
        /* HSE used as PLL clock source */
        pllvco = ((HSE_VALUE / pllm) * (RCC_PLLCFGR->PLLN));
      }
      else
      {
        /* HSI used as PLL clock source */
        pllvco = ((HSI_VALUE / pllm) * (RCC_PLLCFGR->PLLN));
      }
      pllp = (((RCC_PLLCFGR->PLLP) + 1 ) *2);

      sysclockfreq = pllvco/pllp;
      break;
    }
    default:
    {
      sysclockfreq = HSI_VALUE;
      break;
    }
  }
  SystemCoreClock =sysclockfreq;
  return sysclockfreq;
}


uint32_t RCC_GetHCLKFreq(void)
{
  HCLKFreq = RCC_GetSysClockFreq() >> AHBPrescTable[RCC_CFGR->HPRE];
  return HCLKFreq;
}


uint32_t RCC_GetPCLK1Freq(void)
{
  /* Get HCLK source and Compute PCLK1 frequency ---------------------------*/
	PCLK1Freq= (RCC_GetHCLKFreq() >> APBPrescTable[RCC_CFGR->PPRE1]);
  return PCLK1Freq;
}


uint32_t RCC_GetPCLK2Freq(void)
{
  /* Get HCLK source and Compute PCLK2 frequency ---------------------------*/
	PCLK2Freq=(RCC_GetHCLKFreq()>> APBPrescTable[RCC_CFGR->PPRE2]);
  return PCLK2Freq;
}
