/*
 *  Ultrasonic.c
 *	Created on: Jan 30, 2016
 *  Author: Teja Chintalapati
 *	Contact: teja.chintalapati@gmail.com
 *	Phone: +91-8792-355-512
 *	Description: This program will take distance measurement from Grove Ultrasonic Ranger
 *	Modules used: Hardware Multiplier, TimerA, TimerB
 *
 *             MSP430FR5969
 *          -----------------
 *         |              XIN|-
 *         |                 |
 *         |             XOUT|-
 *         |                 |
 *    	   |             P3.0|<--> Ultrasonic Ranger
 *
 *  If object falls under range of sensor(Upto 400 cm), then sensor returns distance. Else, you'll get 0
 *
 */

/******************************************************************************
 * INCLUDES
 */

#include "mainApp.h"

/******************************************************************************
 * GLOBAL VARIABLES
 */

#if CENTIMETERS
uint16_t distanceCentimeters;

#else
uint16_t distanceInches;
#endif

/******************************************************************************
 * MAIN
 */

void main(void)
{
	boardInitialisation();

	while(1)
	{
#if CENTIMETERS
		distanceCentimeters = getDistance();
		__no_operation();
#else
		distanceInches = getDistance();
#endif
	}
}
