/**
 * @file Activity_2.c
 * @author Harsh R Moon
 * @brief analog to digital conversion
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <avr/io.h>
#include "Activity_2.h"


void InitADC()
{
    ADMUX=(1<<REFS0); 
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
uint16_t ReadADC(uint8_t ch)
{

    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA&(1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
