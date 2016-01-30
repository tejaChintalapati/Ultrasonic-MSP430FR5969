/*
 * timerInitialisation.c
 *
 *  Created on: Jan 29, 2016
 *  Author: Teja Chintalapati
 *	Contact: teja.chintalapati@gmail.com
 *	Phone: +91-8792-355-512
 *	Description: This file will initialise TimerA and TimerB. TimerA is used to send trigger pulses
 *				 to ultrasonic sensor. TimerB is used to calculate the pulse duration of echo from Ultrasonic Sensor
 *
 */

/******************************************************************************
 * INCLUDES
 */

#include "mainApp.h"

/******************************************************************************
 * GLOBAL VARIABLES
 */

extern uint16_t pulseWidth;														//Used to calculate pulse duration from sensor

/******************************************************************************
 * FUNCTION DEFINITIONS
 */

void timerConfiguration(void)
{
	/*TimerA is used to send trigger pulses to sensor. (Used to keep MCU in LPM3).
	 * You may comment out this code if you want to use __delay_cycles(). But I highly recommend you not to do so
	 */
	Timer_A_initUpModeParam initTimerAUpParam = {0};
		initTimerAUpParam.clockSource =					TIMER_A_CLOCKSOURCE_SMCLK;
		initTimerAUpParam.clockSourceDivider = 			TIMER_A_CLOCKSOURCE_DIVIDER_1;
		initTimerAUpParam.timerPeriod = 				40;
		initTimerAUpParam.timerInterruptEnable_TAIE =	TIMER_A_TAIE_INTERRUPT_ENABLE;
		initTimerAUpParam.captureCompareInterruptEnable_CCR0_CCIE
													=	TIMER_A_CCIE_CCR0_INTERRUPT_ENABLE;
		initTimerAUpParam.timerClear = 					TIMER_A_DO_CLEAR;
		initTimerAUpParam.startTimer = 					false;
	Timer_A_initUpMode(TIMER_A0_BASE, &initTimerAUpParam);

	//Timer B is used to calculate sensor output pulse duration
	Timer_B_initUpModeParam initTimerBUpParam = {0};
		initTimerBUpParam.clockSource =					TIMER_B_CLOCKSOURCE_SMCLK;
		initTimerBUpParam.clockSourceDivider = 			TIMER_B_CLOCKSOURCE_DIVIDER_1;
		initTimerBUpParam.timerPeriod = 				80;
		initTimerBUpParam.timerInterruptEnable_TBIE =	TIMER_B_TBIE_INTERRUPT_ENABLE;
		initTimerBUpParam.captureCompareInterruptEnable_CCR0_CCIE
														=	TIMER_B_CCIE_CCR0_INTERRUPT_ENABLE;
		initTimerBUpParam.timerClear = 					TIMER_B_DO_CLEAR;
		initTimerBUpParam.startTimer = 					false;
	Timer_B_initUpMode(TIMER_B0_BASE, &initTimerBUpParam);

	Timer_A_clearTimerInterrupt(TIMER_A0_BASE);
	Timer_B_clearTimerInterrupt(TIMER_B0_BASE);
}

/******************************************************************************
 * Interrupt Service Routine
 */

#pragma vector = TIMER0_A0_VECTOR
__interrupt void timerA0_CCR0_ISR(void)
{
	__low_power_mode_off_on_exit();
}

#pragma vector = TIMER0_B0_VECTOR
__interrupt void timerB0_CCR0_ISR(void)
{
	pulseWidth++;																//Increment pulse duration
}

#pragma vector = TIMER0_A1_VECTOR
__interrupt void timer0_A1_ISR(void)
{
	switch(__even_in_range(TA0IV, 0x14))
	{
	case TA0IV_NONE: break;                 									// (0x00) None
	case TA0IV_TACCR1: break;               									// (0x02) CCR1 IFG
	case TA0IV_TACCR2: break;               									// (0x04) CCR2 IFG
	case TA0IV_3: break;                    									// (0x06) Reserved
	case TA0IV_4: break;                    									// (0x08) Reserved
	case TA0IV_5: break;                    									// (0x0A) Reserved
	case TA0IV_6: break;                    									// (0x0C) Reserved
	case TA0IV_TAIFG: break;                									// (0x0E) TA1IFG - TAR overflow
	default: _never_executed();
	}
}

#pragma vector = TIMER0_B1_VECTOR
__interrupt void timerB_ISR(void)
{
	switch(__even_in_range(TB0IV, 0x14))
	{
	case TB0IV_NONE: break;                		 // (0x00) None
	case TB0IV_TBCCR1: break;					 // (0x02) CCR1
	case TB0IV_TBCCR2: break;					 // (0x04) CCR2
	case TB0IV_TBCCR3: break;                    // (0x06) CCR3
	case TB0IV_TBCCR4: break;                    // (0x08) CCR4
	case TB0IV_TBCCR5: break;                    // (0x0A) CCR5
	case TB0IV_TBCCR6: break;                    // (0x0C) CCR6
	case TB0IV_TBIFG: break;                   	 // (0x0E) TA1IFG - TAR overflow
	default: _never_executed();
	}
}
