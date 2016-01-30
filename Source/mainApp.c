/*
 * 	mainApp.c
 *
 *  Created on: Jan 30, 2016
 *  Author: Teja Chintalapati
 *	Contact: teja.chintalapati@gmail.com
 *	Phone: +91-8792-355-512
 *	Description: This file will initialise all modules used in this project
 *
 */

/******************************************************************************
 * INCLUDES
 */

#include "mainApp.h"

/******************************************************************************
 * FUNCTION DEFINITIONS
 */

void boardInitialisation(void)
{
	WDT_A_hold( WDT_A_BASE );																//MSP's WDT is turned on by default. If you don't stop it, at some point, your system'll restart
	unusedPinsConfiguration();																//To minimise power consumption, all pins needs to be initialised. Floating pins waste a lot of power
	pinConfiguration();																		//This function will configure all the pins used in this project
	clockConfiguration();																	//Will configure MCLK = SMCLK = 8MHz and ACLK to 32768 Hz
	timerConfiguration();																	//Will configure timers
}
