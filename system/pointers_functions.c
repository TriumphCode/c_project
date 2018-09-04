/*
 * pointers_functions.c
 *
 *  Created on: Sep 4, 2018
 *      Author: user
 */

#include "system/pointers_functions.h"

uint8_t add( uint8_t a, uint8_t b)
{
	return a + b;
}

uint8_t sub( uint8_t a, uint8_t b)
{
	return a - b;
}

void  alu(uint8_t a, uint8_t b, uint8_t (*func) (uint8_t,uint8_t))
{
	printf("Value from ALU: %d\n", func(a,b));
}


