/**
 * @file activity2.h
 * @author Architha K V
 * @brief Header file for activity2(ADC temp sensor) 
 */
#ifndef _ACTIVITY2_H_
#define _ACTIVITY2_H_

#include <avr/io.h>

#define ENABLE_ADC_PRESCALE ADCSRA=(1<<ADEN)|(7<<ADPS0)
#define SET_VOLTAGE_REFERENCE ADMUX=(1<<REFS0)

#define SET_ADC_INTERRUPT ADCSRA|=(1<<ADIF)
#define ADC_INTERRUPT_NOT_TRIGGERED !(ADCSRA & (1<<ADIF))
/**
 * @brief Initialising ADC 
 * 
 */
void Init_ADC();
/**
 * @brief reading temp value through ADC
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch);
#endif