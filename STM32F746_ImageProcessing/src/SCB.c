/*
 * SCB.c
 *
 *  Created on: 23 jul. 2018
 *      Author: InDev
 */

#include "SCB.h"


/* TODO IRQ ICSR*/
int32_t __INLINE SCB_PENDSV_Trigger(void)
{
    SCB_ICSR->PENDSVSET=SCB_ICSR_PENDSVSET_SET;
    return SCB_ICSR->PENDSVSET;
}

int32_t __INLINE SCB_PENDSV_Clear(void)
{
    SCB_ICSR->PENDSVCLR=SCB_ICSR_PENDSVCLR_REMOVE;
    return SCB_ICSR->PENDSVSET;
}

int32_t __INLINE SCB_SysTick_Trigger(void)
{
	SCB_ICSR->PENDSTSET=SCB_ICSR_PENDSTSET_SET;
    return SCB_ICSR->PENDSTSET;
}

int32_t __INLINE SCB_SysTick_Clear(void)
{
    SCB_ICSR->PENDSTCLR=SCB_ICSR_PENDSTCLR_REMOVE;
    return SCB_ICSR->PENDSTSET;
}

int32_t __INLINE SCB_NMI_Trigger(void)
{
	SCB_ICSR->NMIPENDSET=SCB_ICSR_NMIPENDSET_SET;
    return SCB_ICSR->NMIPENDSET;
}

int32_t __INLINE SCB_IRQ_ACTIVE(void)
{
	int32_t IRQ=SCB_ICSR->VECTACTIVE;
	if(IRQ>=16)
	{
		IRQ-=16;
		return IRQ;
	}
	return -1;
}
int32_t __INLINE SCB_IRQ_PEND(void)
{
	int32_t IRQ=SCB_ICSR->VECTPENDING;
	if(IRQ>=16)
	{
		IRQ-=16;
		return IRQ;
	}
	return -1;
}

int32_t __INLINE SCB_EXC_ACTIVE(void)
{
	int32_t IRQ=SCB_ICSR->VECTACTIVE;
	if(IRQ<16)
	{
		return IRQ;
	}
	return -1;
}
int32_t __INLINE SCB_EXC_PEND(void)
{
	int32_t IRQ=SCB_ICSR->VECTPENDING;
	if(IRQ<16)
	{
		return IRQ;
	}
	return -1;
}




/* TODO IRQ AIRCR*/
void __INLINE SCB_SystemReset(void)
{
	int32_t Prior= (SCB_AIRCR_R & SCB_AIRCR_R_PRIGROUP_MASK);
	__DSB();
	SCB_AIRCR_R= SCB_AIRCR_R_VECTKEY_WRITE |SCB_AIRCR_R_SYSRESETREQ_RESET |Prior;
	__DSB();
	while(1){};
}


int32_t __INLINE SCB_SetPriorityGrouping(SCB_PRIGROUP_Type group)
{
    int32_t returned=0;
    int32_t reg=SCB_AIRCR_R;

   reg&=SCB_AIRCR_R_VECTKEY_READ|SCB_AIRCR_R_PRIGROUP_MASK;
   reg= reg|SCB_AIRCR_R_VECTKEY_WRITE;
    switch(group)
    {
        case SCB_PRIGROUP_XXXXXXXY:
        	reg|=SCB_AIRCR_R_PRIGROUP_XXXXXXXY;
        	SCB_AIRCR_R=reg;
            returned=1;
            break;
        case SCB_PRIGROUP_XXXXXXYY:
        	reg|=SCB_AIRCR_R_PRIGROUP_XXXXXXYY;
        	SCB_AIRCR_R=reg;
            returned=1;
            break;
        case SCB_PRIGROUP_XXXXXYYY:
        	reg|=SCB_AIRCR_R_PRIGROUP_XXXXXYYY;
        	SCB_AIRCR_R=reg;
            returned=1;
            break;
        case SCB_PRIGROUP_XXXXYYYY:
        	reg|=SCB_AIRCR_R_PRIGROUP_XXXXYYYY;
        	SCB_AIRCR_R=reg;
            returned=1;
            break;
        case SCB_PRIGROUP_XXXYYYYY:
        	reg|=SCB_AIRCR_R_PRIGROUP_XXXYYYYY;
        	SCB_AIRCR_R=reg;
            returned=1;
            break;
        case SCB_PRIGROUP_XXYYYYYY:
        	reg|=SCB_AIRCR_R_PRIGROUP_XXYYYYYY;
        	SCB_AIRCR_R=reg;
            returned=1;
            break;
        case SCB_PRIGROUP_XYYYYYYY:
        	reg|=SCB_AIRCR_R_PRIGROUP_XYYYYYYY;
        	SCB_AIRCR_R=reg;
            returned=1;
            break;
        case SCB_PRIGROUP_YYYYYYYY:
        	reg|=SCB_AIRCR_R_PRIGROUP_YYYYYYYY;
        	SCB_AIRCR_R=reg;
            returned=1;
            break;
        default:
            returned=0;
            break;
    }
    return returned;
}



int32_t __INLINE SCB_GetPriorityGrouping(void)
{
	return SCB->AIRCR_Bit.PRIGROUP;
}


/* TODO SCR*/

int32_t __INLINE SCB_SleepMode(SCB_SLEEPDEEP_Type sleepMode)
{
    int32_t returned=0;
    switch(sleepMode)
    {
        case SCB_SLEEPDEEP_SLEEP:
            SCB_SCR->SLEEPDEEP=SCB_SCR_SLEEPDEEP_SLEEP;
            returned=1;
            break;
        case SCB_SLEEPDEEP_DEEPSLEEP:
            SCB_SCR->SLEEPDEEP=SCB_SCR_SLEEPDEEP_DEEPSLEEP;
            returned=1;
            break;
        default:
            returned=0;
            break;
    }

    return returned;
}

void __INLINE SCB_SET_Event(void)
{
	SCB->SCR_Bit.SEVONPEND=SCB_SCR_SEVEONPEND_ALL;
}

/* TODO CCR*/


int32_t __INLINE SCB_SWTRIGGER_EN(void)
{
    SCB_CCR->USERSETMPEND=SCB_CCR_USERSETMPEND_EN;
    return SCB_CCR->USERSETMPEND;
}


/*SHPR*/

int32_t __INLINE SCB_SetPriority(IRQn_Type IRQn,uint32_t priority)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    if(IRQn>=0)
    	return 0;
    IRQn&=0xF;
    IRQn-=4;

    isrBit=IRQn%4;
    isrIndex=IRQn/4;
    if(isrIndex>2)
        return 0;

    switch(isrBit)
    {
        case 0:
        	SCB_SHPRw->SHPR[isrIndex].PRI0=priority;
            break;
        case 1:
        	SCB_SHPRw->SHPR[isrIndex].PRI1=priority;
            break;
        case 2:
        	SCB_SHPRw->SHPR[isrIndex].PRI2=priority;
            break;
        case 3:
        	SCB_SHPRw->SHPR[isrIndex].PRI3=priority;
            break;
        default:
            return 0;
    }
    return 1;
}


int32_t __INLINE SCB_GetPriority(IRQn_Type IRQn)
{
    uint32_t isrIndex=0;
    uint32_t isrBit=0;

    if(IRQn>=0)
    	return 0;
    IRQn&=0xF;
    IRQn-=4;

    isrBit=IRQn%4;
    isrIndex=IRQn/4;
    if(isrIndex>2)
        return 0;

    switch(isrBit)
    {
        case 0:
        	return SCB_SHPRw->SHPR[isrIndex].PRI0;
        case 1:
        	return SCB_SHPRw->SHPR[isrIndex].PRI1;
        case 2:
        	return SCB_SHPRw->SHPR[isrIndex].PRI2;
            break;
        case 3:
        	return SCB_SHPRw->SHPR[isrIndex].PRI3;
            break;
        default:
            return 0;
    }
    return 0;
}


/*SHCSR*/
int32_t __INLINE SCB_UsageFault_En(void)
{
    SCB_SHCSR->USGFAULTENA=SCB_SHCSR_USGFAULTENA_EN;
    return SCB_SHCSR->USGFAULTENA;
}

int32_t __INLINE SCB_UsageFault_Dis(void)
{
    SCB_SHCSR->USGFAULTENA=SCB_SHCSR_USGFAULTENA_DIS;
    return SCB_SHCSR->USGFAULTENA;
}


int32_t __INLINE SCB_BusFault_En(void)
{
    SCB_SHCSR->BUSFAULTENA=SCB_SHCSR_BUSFAULTENA_EN;
    return SCB_SHCSR->BUSFAULTENA;
}


int32_t __INLINE SCB_BusFault_Dis(void)
{
    SCB_SHCSR->BUSFAULTENA=SCB_SHCSR_BUSFAULTENA_DIS;
    return SCB_SHCSR->BUSFAULTENA;
}


int32_t __INLINE SCB_MPUFault_En(void)
{
	SCB_SHCSR->MEMFAULTENA=SCB_SHCSR_MEMFAULTENA_EN;
    return SCB_SHCSR->MEMFAULTENA;
}

int32_t __INLINE SCB_MPUFault_Dis(void)
{
	SCB_SHCSR->MEMFAULTENA=SCB_SHCSR_MEMFAULTENA_DIS;
    return SCB_SHCSR->MEMFAULTENA;
}





