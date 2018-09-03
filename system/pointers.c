/*
 * pointers.c
 *
 *  Created on: Sep 3, 2018
 *      Author: user
 */

#include "system/pointers.h"


void pointers_Intro(void)
{
	printf("Let's see how pointers works!\n");

	uint8_t  storage_variable;

	storage_variable = 10;

	uint8_t *pointer_to_storage = &storage_variable;

	printf("Address of storage: %p, value of storage: %d\n", pointer_to_storage, *pointer_to_storage);

}
