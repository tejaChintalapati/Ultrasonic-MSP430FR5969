/*
 * 	clockInitialisation.c
 *
 *  Created on: Jan 29, 2016
 *  Author: Teja Chintalapati
 *	Contact: teja.chintalapati@gmail.com
 *	Phone: +91-8792-355-512
 *	Description: This file will initialise MCLK to 8MHz, SMCLK to 8MHz and ACLK to 32768Hz
 *
 */

/******************************************************************************
 * INCLUDES
 */

#include "mainApp.h"

/******************************************************************************
 * GLOBAL VARIABLES
 */

#if DEBUG
uint32_t MCLK, SMCLK, ACLK;
#endif

/******************************************************************************
 * FUNCTION DEFINITIONS
 */

void clockConfiguration(void)
{
    CS_setExternalClockSource( LF_CRYSTAL_FREQUENCY_IN_HZ, HF_CRYSTAL_FREQUENCY_IN_HZ );

    /*
     * Initialize LFXT crystal oscillator without timeout. In case of failure
     * the code remains 'stuck' in this function.
     */
    CS_turnOnLFXT( CS_LFXT_DRIVE_0 );

    // Set DCO to run at 8MHz
    CS_setDCOFreq( CS_DCORSEL_1, CS_DCOFSEL_3 );

    // Set ACLK to use LFXT as its oscillator source (32KHz)
    CS_initClockSignal( CS_ACLK, CS_LFXTCLK_SELECT, CS_CLOCK_DIVIDER_1 );

    // Set SMCLK to use DCO as its oscillator source
    CS_initClockSignal( CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1 );

    // Set MCLK to use DCO as its oscillator source
    CS_initClockSignal( CS_MCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1 );

#if DEBUG
    MCLK  = CS_getMCLK();
    SMCLK = CS_getSMCLK();
    ACLK  = CS_getACLK();
    __no_operation();
#endif
}

