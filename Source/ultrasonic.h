/*
 * ultrasonic.h
 *
 * Created on: Jan 29, 2016
 * Author: Teja Chintalapati
 * Contact: teja.chintalapati@gmail.com
 * Phone: +91-8792-355-512
 *
 */

#ifndef SOURCE_ULTRASONIC_H_
#define SOURCE_ULTRASONIC_H_

/******************************************************************************
 * FUNCTION DECLARATIONS
 */

void triggerUltrasonicSensor(void);												//Will send pulses to trigger ultrasonic sensor
uint16_t getDistance(void);														//Will return distance b/w sensor and object

#endif /* SOURCE_ULTRASONIC_H_ */
