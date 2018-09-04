/*
 * pointers_basics.c
 *
 *  Created on: Sep 3, 2018
 *      Author: user
 */

#include "system/pointers_basics.h"


void pointers_Intro(void)
{
	printf("Let's see how pointers works!\n");

	uint8_t  storage_variable = 10;

	uint8_t *pointer_to_storage = &storage_variable;

	printf("Address of storage: %p, value of storage: %d\n", pointer_to_storage, *pointer_to_storage);

	*pointer_to_storage = 20;

	printf("Value from pointer: %d, value of storage: %d\n", *pointer_to_storage, storage_variable);
}

void pointers_ChangeValue(uint8_t *variable)
{
	*variable = 15;
}

void pointers_PrintValue(uint8_t *variable)
{
	printf("Value from pointer: %d\n", *variable);
}
