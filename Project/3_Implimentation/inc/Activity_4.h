/**
 * @file Activity_4.h
 * @author Harsh R Moon
 * @brief To display output temparature
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

void USARTInit(uint16_t ubrr_value);

void USARTWrite(char temp_value);

char temp_disp();
#endif 
