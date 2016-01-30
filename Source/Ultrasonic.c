/*
 * Ultrasonic.c
 *
 *  Created on: Jan 29, 2016
 *  Author: Teja Chintalapati
 *	Contact: teja.chintalapati@gmail.com
 *	Phone: +91-8792-355-512
 *
 */

/******************************************************************************
 * INCLUDES
 */

#include "mainApp.h"

/******************************************************************************
 * GLOBAL VARIABLES
 */

uint16_t pulseWidth;

/******************************************************************************
 * FUNCTION DEFINITIONS
 */

void triggerUltrasonicSensor(void)
{
	GPIO_setAsOutputPin(ULTRASONICPORT, ULTRASONICPIN);
	GPIO_setOutputLowOnPin(ULTRASONICPORT, ULTRASONICPIN);
	Timer_A_startCounter(TIMER_A0_BASE, TIMER_A_UP_MODE);
	__low_power_mode_3();
	GPIO_setOutputHighOnPin(ULTRASONICPORT, ULTRASONICPIN);
	Timer_A_startCounter(TIMER_A0_BASE, TIMER_A_UP_MODE);
	__low_power_mode_3();
	Timer_A_stop(TIMER_A0_BASE);
}

uint16_t getDistance(void)
{
	triggerUltrasonicSensor();

	GPIO_setAsInputPinWithPullDownResistor(ULTRASONICPORT, ULTRASONICPIN);
	GPIO_selectInterruptEdge(ULTRASONICPORT, ULTRASONICPIN, GPIO_LOW_TO_HIGH_TRANSITION);
	GPIO_clearInterrupt(ULTRASONICPORT, allPins);
	GPIO_enableInterrupt(ULTRASONICPORT, ULTRASONICPIN);
	__low_power_mode_4();
#if CENTIMETERS
	float distance = _IQ7toF(_IQ7div(_IQ7mpy(_IQ7(pulseWidth), _IQ7(10)), _IQ7(58)));
	pulseWidth = 0;
	if(distance < 401)
		return distance;
	else
		return 0;
#else
	float distance = _IQ7toF(_IQ7div(_IQ7mpy(_IQ7(pulseWidth), _IQ7(10)), _IQ7(148)));
	pulseWidth = 0;
	if(distance < 158)
		return distance;
	else
		return 0;
#endif
}
