/*
 * 	pinInitialisation.c
 *
 *  Created on: Jan 30, 2016
 *  Author: Teja Chintalapati
 *	Contact: teja.chintalapati@gmail.com
 *	Phone: +91-8792-355-512
 *	Description: This file will initialise all pins required in this program
 *
 */

/******************************************************************************
 * INCLUDES
 */

#include "mainApp.h"

/******************************************************************************
 * FUNCTION DEFINITIONS
 */

void pinConfiguration(void)
{
    /*
     * Set LFXT clock pins to crystal input. By default, they're configured as GPIO.
     * If you don't configure these pins, your code will be stuck in CS_turnOnLFXT function
     */
    GPIO_setAsPeripheralModuleFunctionInputPin( GPIO_PORT_PJ, GPIO_PIN4 + GPIO_PIN5, GPIO_PRIMARY_MODULE_FUNCTION );

}

#pragma vector = PORT1_VECTOR;
__interrupt void Port1_ISR(void)
{
	switch(__even_in_range(P1IV, 0x10))
	{
	case P1IV_NONE : break;							//No Interrupt pending
	case P1IV_P1IFG0 : break;						//(0x02) P1.0 interrupt
	case P1IV_P1IFG1 : break;						//(0x04) P1.1 interrupt
	case P1IV_P1IFG2 : break;						//(0x06) P1.2 interrupt
	case P1IV_P1IFG3 : break;						//(0x08) P1.3 interrupt
	case P1IV_P1IFG4 : break;						//(0x0A) P1.4 interrupt
	case P1IV_P1IFG5 : break;						//(0x0C) P1.5 interrupt
	case P1IV_P1IFG6 : break;						//(0x0E) P1.6 interrupt
	case P1IV_P1IFG7 : break;						//(0x10) P1.7 interrupt
	default :
		__never_executed();
		break;
	}
}

#pragma vector = PORT3_VECTOR;
__interrupt void Port3_ISR(void)
{
	switch(__even_in_range(P3IV, 0x10))
	{
	case P3IV_NONE : break;							//No Interrupt pending
	case P3IV_P3IFG0 :								//(0x02) P3.0 interrupt
		if(P3IES & ULTRASONICPIN)					//High to low interrupt
		{
			Timer_B_stop(TIMER_B0_BASE);
			__low_power_mode_off_on_exit();
		}
		else
		{
			Timer_B_startCounter(TIMER_B0_BASE, TIMER_B_UP_MODE);
			GPIO_selectInterruptEdge(ULTRASONICPORT, ULTRASONICPIN, GPIO_HIGH_TO_LOW_TRANSITION);
		}
		break;
	case P3IV_P3IFG1 : break;						//(0x04) P3.1 interrupt
	case P3IV_P3IFG2 : break;						//(0x06) P3.2 interrupt
	case P3IV_P3IFG3 : break;						//(0x08) P3.3 interrupt
	case P3IV_P3IFG4 : break;						//(0x0A) P3.4 interrupt
	case P3IV_P3IFG5 : break;						//(0x0C) P3.5 interrupt
	case P3IV_P3IFG6 : break;						//(0x0E) P3.6 interrupt
	case P3IV_P3IFG7 : break;						//(0x10) P3.7 interrupt
	default :
		__never_executed();
		break;
	}
}
