/*
 * pointers_functions.h
 *
 *  Created on: Sep 4, 2018
 *      Author: user
 */

#ifndef POINTERS_FUNCTIONS_H_
#define POINTERS_FUNCTIONS_H_

#include "stdint.h"

uint8_t add( uint8_t a, uint8_t b);

uint8_t sub(uint8_t a, uint8_t b);

void alu(uint8_t a, uint8_t b, uint8_t (*func) (uint8_t,uint8_t));

#endif /* POINTERS_FUNCTIONS_H_ */
