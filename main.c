#include "stdio.h"
#include "main.h"


int main (void)
{
	system_Init();

	pointers_Intro();

	pointers_Print(&changable_variable);
	pointers_ChangeValue(&changable_variable);
	pointers_Print(&changable_variable);

	return 0;
}
