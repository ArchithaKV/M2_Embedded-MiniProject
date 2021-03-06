/**
 * @file activity1.c
 * @author Architha K V
 * @brief source code for activity1 
 */
#include <avr/io.h>
#include "activity1.h"

/**
 * @brief function to initialise leds and buttons
 * 
 */


void Init_LED(){
    SET_LED_AS_OUTPUT;   //setting led as output
    SET_BUTTON_AS_INPUT;  // setting button(pinD0) as input
    SET_HEATER_AS_INPUT;  // setting heater button (pinD1) as input
    SET_BUTTON_HIGH;      // setting 1 to   button (pinD1) 
    SET_HEATER_HIGH;     // setting 1 to heater button (pinD1) 
}