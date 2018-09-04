/*
 * pointers_aritmeric.c
 *
 *  Created on: Sep 4, 2018
 *      Author: user
 */


#include "system/pointers_aritmetic.h"

void pointers_Table_Increase(uint8_t * table)
{
	*table+=1;
}

void pointers_PrintTableValue(uint8_t * table)
{
	printf("Value from table: %d\n", *table);
}

