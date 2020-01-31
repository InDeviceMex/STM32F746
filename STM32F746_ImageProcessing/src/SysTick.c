/*
 * STK.c
 *
 *  Created on: 24 jul. 2018
 *      Author: InDev
 */


#include <SysTick.h>

uint64_t u64Count=0;
uint32_t CPUFrecus=0;

int32_t SysTick_InitTick(uint32_t tick, uint32_t priority, uint32_t clock)
{
    SysTick_RVR_R=0;
    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=clock;
    if(tick>0x1000000)
    {
    	tick=0x1000000;
    }
    if(tick==0)
        return 0;

    u64Count=0;
    SCB_SHPR3->TICK=priority;
    SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;
    SysTick_RVR_R=tick-1;
    SysTick_CVR->CURRENT=0;
    return 1;
}

int32_t SysTick_InitFrec(float frec, uint32_t priority)
{
    uint32_t CPUClock=0,count=0;
    float CPUClockF=0,countF=0;

    SysTick_RVR_R=0;
    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=SysTick_CSR_CLKSOURCE_SYSCLK;

    CPUClock=RCC_GetSysClockFreq();
    CPUClockF=(float)CPUClock;
    countF=CPUClockF/frec;
    count=(uint32_t)countF;
    if(count>0x1000000)
    {
        SysTick_CSR->CLKSOURCE=SysTick_CSR_CLKSOURCE_AHB8;
        CPUClockF=CPUClockF/8;
        countF=CPUClockF/frec;
        count=(uint32_t)countF;
        if(count>0x1000000)
            return 0;
    }
    if(count<10)
        return 0;


    CPUFrecus=CPUClockF;

    u64Count=0;
    SCB_SHPR3->TICK=priority;
    SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;
    SysTick_RVR_R=count-1;
    SysTick_CVR->CURRENT=0;
    return 1;
}


int32_t SysTick_Initus(float time, uint32_t priority)
{
    uint32_t CPUClock=0,count=0;
    float CPUClockF=0,countF=0;

    SysTick_RVR_R=0;
    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=SysTick_CSR_CLKSOURCE_SYSCLK;

    CPUClock=RCC_GetSysClockFreq();
    CPUClockF=(float)CPUClock;
    CPUClockF/=1000000;
    countF=CPUClockF*time;
    count=(uint32_t)countF;
    if(count>0x1000000)
    {
        SysTick_CSR->CLKSOURCE=SysTick_CSR_CLKSOURCE_AHB8;
        CPUClockF=CPUClockF/8;
        countF=CPUClockF*time;
        count=(uint32_t)countF;
        if(count>0x1000000)
            return 0;
    }
    if(count<10)
        return 0;


    CPUFrecus=CPUClockF;
    u64Count=0;
    SCB_SHPR3->TICK=priority;
    SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;
    SysTick_RVR_R=count-1;
    SysTick_CVR->CURRENT=0;
    return 1;
}


int32_t SysTick_ChangeTimeus(float time)
{
    uint32_t count=0;
    float CPUClockF=0,countF=0;
    uint32_t source=0;


    SysTick_CSR->TICKINT=SysTick_CSR_TICKINT_DIS;
    SysTick_CSR->ENABLE=SysTick_CSR_ENABLE_DIS;

    CPUClockF=CPUFrecus;
    countF=CPUClockF*time;
    count=(uint32_t)countF;
    if(count>0x1000000)
    {
    	source=1;
        CPUClockF=CPUClockF/8;
        countF=CPUClockF*time;
        count=(uint32_t)countF;
        if(count>0x1000000)
            return 0;
    }
    if(count==0)
        return 0;

    CPUFrecus=CPUClockF;
    if(source==1)
    {
    	SysTick_CSR->CLKSOURCE=SysTick_CSR_CLKSOURCE_AHB8;
    }
    else
    {
        SysTick_CSR->CLKSOURCE=SysTick_CSR_CLKSOURCE_SYSCLK;
    }

    SysTick_RVR_R=count-1;
    SysTick_CVR->CURRENT=0;
    SysTick_CSR->TICKINT=SysTick_CSR_TICKINT_EN;
    SysTick_CSR->ENABLE=SysTick_CSR_ENABLE_EN;


    return 1;
}

int64_t SysTick_Count(void)
{
	return u64Count;
}

int32_t SysTick_State(void)
{
	return SysTick_CSR->COUNTFLAG;
}
