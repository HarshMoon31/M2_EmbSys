/**
 * @file Activity_4.c
 * @author Satyajit Patil
 * @brief USART code to display temparature
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <avr/io.h>
#include "Activity_2.h"
#include "Activity_3.h"
#include "Activity_4.h"

void USARTInit(uint16_t ubrr_value)
{
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}
void USARTWrite(char temp_value)
{
  while(!(UCSR0A & (1<<UDRE0)))
  { }
UDR0 = temp_value;
}

char temp_disp()
{
    char temperature;

     if((ReadADC(0)>=0) && (ReadADC(0)<=209)){

       temperature= 20;
    }
    else if((ReadADC(0)>=210) && (ReadADC(0)<=509)){

        temperature= 25;
    }
    else if((ReadADC(0)>=510) && (ReadADC(0)<=709)){

        temperature= 29;
    }
    else if((ReadADC(0)>=710) && (ReadADC(0)<=1024)){

        temperature= 33;
    }
    else
    {
        temperature= 0;
    }
    return temperature;
}
