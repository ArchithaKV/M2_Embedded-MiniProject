/**
 * @file Activity4.h
 * @author Architha K V
 * @brief header file for activity 4 (writing through UART) 
 */
#ifndef _ACTIVITY4_H_
#define _ACTIVITY4_H_

#include <avr/io.h>
/**
 * @brief Macros
 * 
 */
#define UART_DATA_NOT_WRITTEN !(UCSR0A & (1<<UDRE0))
#define ENABLE_UART UCSR0B|=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0)
#define UART_CHAR_SIZE UCSR0C|=(1<<UCSZ00)|(1<<UCSZ01)
/**
 * @brief Initialise UART 
 * 
 * @param UBRR_val 
 */
void Init_UART(uint16_t UBRR_val);
/**
 * @brief writing data through UART
 * 
 * @param data 
 */
void UARTWriteChar(char data);

#endif