#include "stdio.h"
#include "main.h"



int main (void)
{
	system_Init();

	pointers_Intro();

	pointers_PrintValue(&changable_variable);
	pointers_ChangeValue(&changable_variable);
	pointers_PrintValue(&changable_variable);

	pointers_PrintTableValue(changable_table);
	pointers_Table_Increase(changable_table);
	pointers_PrintTableValue(changable_table);

	alu(5,6,add);


	return 0;
}
