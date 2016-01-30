/*
 * mainApp.h
 *
 * Created on: Jan 30, 2016
 * Author: Teja Chintalapati
 * Contact: teja.chintalapati@gmail.com
 * Phone: +91-8792-355-512
 *
 */

#ifndef ULTRASONIC_SOURCE_MAINAPP_H_
#define ULTRASONIC_SOURCE_MAINAPP_H_

/******************************************************************************
 * INCLUDES
 */

#include <driverlib.h>
#include "clockInitialisation.h"
#include "pinInitialisation.h"
#include "portInitialisation.h"
#include "timerInitialisation.h"
#include "ultrasonic.h"

#define GLOBAL_IQ    														   7			//Please read C:\ti\msp430\MSPWare_2_40_00_37\iqmathlib\MSP430-IQmathLib-UsersGuide to choose appropriate IQValue
#include "IQmathLib.h"

/******************************************************************************
 * DEFINITIONS
 */

//Used in Ultrasonic.c
#define ULTRASONICPORT														   GPIO_PORT_P3
#define ULTRASONICPIN														   GPIO_PIN0

//If true, this will give distance in centimeters. Else, you get distance in inches
#define CENTIMETERS															   true

//If you want to see clock frequencies, then make this true
#define DEBUG																   false

//Used in clockInitiaisation.c
#define LF_CRYSTAL_FREQUENCY_IN_HZ     										   32768
#define HF_CRYSTAL_FREQUENCY_IN_HZ											   0            // FR5969 Launchpad does not have 16MHz crystal

//Used in portInitialisation.c
#define allPins																   GPIO_PIN0 + GPIO_PIN1 + GPIO_PIN2 + GPIO_PIN3 + GPIO_PIN4 + GPIO_PIN5 + GPIO_PIN6 + GPIO_PIN7

/******************************************************************************
 * GLOBAL VARIABLES
 */


/******************************************************************************
 * FUNCTION DECLARATION
 */

void boardInitialisation(void);

#endif /* ULTRASONIC_SOURCE_MAINAPP_H_ */
