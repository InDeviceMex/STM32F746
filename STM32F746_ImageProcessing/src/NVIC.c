/*
 * NVIC.c
 *
 *  Created on: 22 jul. 2018
 *      Author: InDev
 */


#include "NVIC.h"

int32_t __INLINE  NVIC_EN(IRQn_Type IRQn, uint32_t priority)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    if(IRQn<0)
    	return 0;
    isrBit=IRQn%32;
    isrIndex=IRQn/32;
    if(isrIndex>NVIC_MAX)
        return 0;

    if(NVIC_SET_Priority(IRQn,priority))
        NVICb->ISER[isrIndex]|=(1<<isrBit);
    else
        return 0;
    return 1;
}

int32_t __INLINE NVIC_DIS(IRQn_Type IRQn)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    if(IRQn<0)
    	return 0;
    isrBit=IRQn%32;
    isrIndex=IRQn/32;
    if(isrIndex>NVIC_MAX)
        return 0;
    NVICw->ICER[isrIndex]|=(1<<isrBit);
    return 1;
}

int32_t __INLINE NVIC_GET_PEND(IRQn_Type IRQn)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;
    if(IRQn<0)
    	return 0;

    isrBit=IRQn%32;
    isrIndex=IRQn/32;
    if(isrIndex>NVIC_MAX)
        return 0;
    if(NVICw->ISPR[isrIndex]&(1<<isrBit))
    	return 1;
    return 0;
}

int32_t __INLINE NVIC_PEND(IRQn_Type IRQn)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;
    if(IRQn<0)
    	return 0;

    isrBit=IRQn%32;
    isrIndex=IRQn/32;
    if(isrIndex>NVIC_MAX)
        return 0;
    NVICw->ISPR[isrIndex]|=(1<<isrBit);
    return 1;
}


int32_t __INLINE NVIC_UNPEND(IRQn_Type IRQn)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;
    if(IRQn<0)
    	return 0;

    isrBit=IRQn%32;
    isrIndex=IRQn/32;
    if(isrIndex>NVIC_MAX)
        return 0;
    NVICw->ICPR[isrIndex]|=(1<<isrBit);

    return 1;
}


int32_t __INLINE NVIC_GET_ACTIVE(IRQn_Type IRQn)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;
    if(IRQn<0)
    	return 0;

    isrBit=IRQn%32;
    isrIndex=IRQn/32;
    if(isrIndex>NVIC_MAX)
        return 0;
    if(NVICw->IABR[isrIndex]&(1<<isrBit))
    	return 1;
    return 0;
}

int32_t __INLINE NVIC_SET_Priority(IRQn_Type IRQn,uint32_t priority)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;
    if(IRQn<0)
    	return 0;

    isrBit=IRQn%4;
    isrIndex=IRQn/4;
    if(isrIndex>NVIC_IPR_MAX)
        return 0;

    switch(isrBit)
    {
        case 0:
        	NVIC_IPRw->IPR[isrIndex].IP0=priority;
            break;
        case 1:
        	NVIC_IPRw->IPR[isrIndex].IP1=priority;
            break;
        case 2:
        	NVIC_IPRw->IPR[isrIndex].IP2=priority;
            break;
        case 3:
        	NVIC_IPRw->IPR[isrIndex].IP3=priority;
            break;
        default:
            return 0;
    }
    return 1;
}


int32_t __INLINE NVIC_GET_Priority(IRQn_Type IRQn)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;
    if(IRQn<0)
    	return 0;

    isrBit=IRQn%4;
    isrIndex=IRQn/4;
    if(isrIndex>NVIC_IPR_MAX)
        return 0;

    switch(isrBit)
    {
        case 0:
        	return NVIC_IPRw->IPR[isrIndex].IP0;
        case 1:
        	return NVIC_IPRw->IPR[isrIndex].IP1;
        case 2:
        	return NVIC_IPRw->IPR[isrIndex].IP2;
            break;
        case 3:
        	return NVIC_IPRw->IPR[isrIndex].IP3;
            break;
        default:
            return 0;
    }
    return 0;
}


int32_t NVIC_SWTRIGGER(IRQn_Type IRQn)
{
    if((IRQn>NVIC_IRQ_MAX)||(IRQn<0))
        return 0;
    NVIC->STIR|=IRQn;

    return 1;
}

