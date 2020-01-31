/*
 * AccessControl.c
 *
 *  Created on: 4 ago. 2018
 *      Author: InDev
 */

#include "AccessControl.h"

__INLINE void AccessControl_EnableTCM (void)
{

    AccessControl_ITCMCR->EN = 1UL;
    AccessControl_DTCMCR->EN = 1UL;
    __DSB();
    __ISB();
}

__INLINE void AccessControl_DisableTCM (void)
{

    AccessControl_ITCMCR->EN = 0UL;
    AccessControl_DTCMCR->EN = 0UL;
    __DSB();
    __ISB();
}

__INLINE void AccessControl_EnableTCM_RetryRMW (void)
{

    AccessControl_ITCMCR->RETEN  = 1UL;
    AccessControl_ITCMCR->RMW	 = 1UL;
    AccessControl_DTCMCR->RETEN  = 1UL;
    AccessControl_DTCMCR->RMW	 = 1UL;
    __DSB();
    __ISB();
}


__INLINE void AccessControl_DisableTCM_RetryRMW (void)
{

    AccessControl_ITCMCR->RETEN  = 0UL;
    AccessControl_ITCMCR->RMW	 = 0UL;
    AccessControl_DTCMCR->RETEN  = 0UL;
    AccessControl_DTCMCR->RMW	 = 0UL;
    __DSB();
    __ISB();
}

__INLINE void AccessControl_DisableCacheError (void)
{

    AccessControl_CACR->ECCEN  = 1UL;
    __DSB();
    __ISB();
}



