/*
 * CACHE.c
 *
 *  Created on: 4 ago. 2018
 *      Author: InDev
 */


#include "CACHE.h"

/**
  \brief   Enable I-Cache
  \details Turns on I-Cache
  */
__INLINE void CACHE_EnableICache (void)
{
    __DSB();
    __ISB();
    CACHE->ICIALLU = 0UL;                     /* invalidate I-Cache */
    SCB_CCR->IC =  1UL;  /* enable I-Cache */
    __DSB();
    __ISB();
}


/**
  \brief   Disable I-Cache
  \details Turns off I-Cache
  */
__INLINE void CACHE_DisableICache (void)
{
    __DSB();
    __ISB();
    SCB_CCR->IC =0UL;  							/* disable I-Cache */
    CACHE->ICIALLU = 0UL;                     /* invalidate I-Cache */
    __DSB();
    __ISB();
}



/**
  \brief   Invalidate I-Cache
  \details Invalidates I-Cache
  */
__INLINE void CACHE_InvalidateICache (void)
{
    __DSB();
    __ISB();
    CACHE->ICIALLU = 0UL;
    __DSB();
    __ISB();
}



/**
  \brief   Enable D-Cache
  \details Turns on D-Cache
  */
__INLINE void CACHE_EnableDCache (void)
{
	register uint32_t ccsidr_set;
	register uint32_t ccsidr_way;
	register uint32_t sets;
	register uint32_t ways;

    CACHE_CSSELR->InD=CACHE_CSSELR_InD_DATA;           /* Level 1 data cache */
    CACHE_CSSELR->Level =CACHE_CSSELR_Level_LEVEL0;
    __DSB();

    ccsidr_set = CACHE_CCSIDR->NumSet;
    ccsidr_way = CACHE_CCSIDR->Assoc;

                                            /* invalidate D-Cache */
    sets = (uint32_t)(ccsidr_set);
    do {
      ways = (uint32_t)(ccsidr_way);
      do {
    	CACHE_DCISW->SET=sets;
    	CACHE_DCISW->WAY=ways;
      } while (ways--);
    } while(sets--);
    __DSB();

    SCB_CCR->DC =1;  /* enable D-Cache */

    __DSB();
    __ISB();
}


/**
  \brief   Disable D-Cache
  \details Turns off D-Cache
  */
__INLINE void CACHE_DisableDCache (void)
{
	register uint32_t ccsidr_set;
	register uint32_t ccsidr_way;
	register uint32_t sets;
	register uint32_t ways;

    CACHE_CSSELR->InD=0;
    CACHE_CSSELR->Level=0;          /* Level 1 data cache */
    __DSB();

    ccsidr_set = CACHE_CCSIDR->NumSet;
    ccsidr_way = CACHE_CCSIDR->Assoc;
    SCB_CCR->DC = 0;  /* disable D-Cache */

                                            /* clean & invalidate D-Cache */
    sets = (uint32_t)(ccsidr_set);
    do {
      ways = (uint32_t)(ccsidr_way );
      do {
    	CACHE_DCCISW->SET=sets;
    	CACHE_DCCISW->WAY=ways;
      } while (ways--);
    } while(sets--);

    __DSB();
    __ISB();
}



/**
  \brief   Invalidate D-Cache
  \details Invalidates D-Cache
  */
__INLINE void CACHE_InvalidateDCache (void)
{
	register uint32_t ccsidr_set;
	register uint32_t ccsidr_way;
	register uint32_t sets;
	register uint32_t ways;

    CACHE_CSSELR->InD=0;
    CACHE_CSSELR->Level=0;
    __DSB();

    ccsidr_set = CACHE_CCSIDR->NumSet;
    ccsidr_way = CACHE_CCSIDR->Assoc;

                                            /* invalidate D-Cache */
    sets = (uint32_t)(ccsidr_set);
    do {
      ways = (uint32_t)(ccsidr_way);
      do {
    	CACHE_DCISW->SET=sets;
    	CACHE_DCISW->WAY=ways;
      } while (ways--);
    } while(sets--);

    __DSB();
    __ISB();
}


/**
  \brief   Clean D-Cache
  \details Cleans D-Cache
  */
__INLINE void CACHE_CleanDCache (void)
{
	register uint32_t ccsidr_set;
	register uint32_t ccsidr_way;
	register uint32_t sets;
	register uint32_t ways;

    CACHE_CSSELR->InD=0;
    CACHE_CSSELR->Level=0;
    __DSB();


    ccsidr_set = CACHE_CCSIDR->NumSet;
    ccsidr_way = CACHE_CCSIDR->Assoc;

                                            /* clean D-Cache */
    sets = (uint32_t)(ccsidr_set);
    do {
    	ways = (uint32_t)(ccsidr_way);
      do {
    	CACHE_DCCSW->SET=sets;
    	CACHE_DCCSW->WAY=ways;

      } while (ways--);
    } while(sets--);

    __DSB();
    __ISB();
}


/**
  \brief   Clean & Invalidate D-Cache
  \details Cleans and Invalidates D-Cache
  */
__INLINE void CACHE_CleanInvalidateDCache (void)
{
	register uint32_t ccsidr_set;
	register uint32_t ccsidr_way;
	register uint32_t sets;
	register uint32_t ways;

    CACHE_CSSELR->InD=0;
    CACHE_CSSELR->Level=0;    /* Level 1 data cache */
    __DSB();


    ccsidr_set = CACHE_CCSIDR->NumSet;
    ccsidr_way = CACHE_CCSIDR->Assoc;

                                            /* clean & invalidate D-Cache */
    sets = (uint32_t)(ccsidr_set);
    do {
      ways = (uint32_t)(ccsidr_way);
      do {
    	CACHE_DCCISW->SET=sets;
    	CACHE_DCCISW->WAY=ways;

      } while (ways--);
    } while(sets--);

    __DSB();
    __ISB();
}


/**
  \brief   D-Cache Invalidate by address
  \details Invalidates D-Cache for the given address
  \param[in]   addr    address (aligned to 32-byte boundary)
  \param[in]   dsize   size of memory block (in number of bytes)
*/
__INLINE void CACHE_InvalidateDCache_by_Addr (uint32_t *addr, int32_t dsize)
{
	register int32_t op_size = dsize;
	register uint32_t op_addr = (uint32_t)addr;
	register int32_t linesize = 32U;                /* in Cortex-M7 size of cache line is fixed to 8 words (32 bytes) */

    __DSB();

    while (op_size > 0) {
      CACHE_DCIMVAC_R = op_addr;
      op_addr += linesize;
      op_size -= linesize;
    }

    __DSB();
    __ISB();
}


/**
  \brief   D-Cache Clean by address
  \details Cleans D-Cache for the given address
  \param[in]   addr    address (aligned to 32-byte boundary)
  \param[in]   dsize   size of memory block (in number of bytes)
*/
__INLINE void CACHE_CleanDCache_by_Addr (uint32_t *addr, int32_t dsize)
{
	register int32_t op_size = dsize;
	register uint32_t op_addr = (uint32_t) addr;
	register  int32_t linesize = 32U;                /* in Cortex-M7 size of cache line is fixed to 8 words (32 bytes) */

    __DSB();

    while (op_size > 0) {
      CACHE_DCCMVAC_R = op_addr;
      op_addr += linesize;
      op_size -= linesize;
    }

    __DSB();
    __ISB();
}


/**
  \brief   D-Cache Clean and Invalidate by address
  \details Cleans and invalidates D_Cache for the given address
  \param[in]   addr    address (aligned to 32-byte boundary)
  \param[in]   dsize   size of memory block (in number of bytes)
*/
__STATIC_INLINE void SCB_CleanInvalidateDCache_by_Addr (uint32_t *addr, int32_t dsize)
{
	register int32_t op_size = dsize;
	register uint32_t op_addr = (uint32_t) addr;
	register  int32_t linesize = 32U;                /* in Cortex-M7 size of cache line is fixed to 8 words (32 bytes) */

    __DSB();

    while (op_size > 0) {
      CACHE_DCCIMVAC_R = op_addr;
      op_addr += linesize;
      op_size -= linesize;
    }

    __DSB();
    __ISB();
}

