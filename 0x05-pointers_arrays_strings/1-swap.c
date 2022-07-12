#include "main.h"

/**
* swap_int - Swaps two pointers source values
* @a: Integer variable 1
* @b: Integer variable 2
* Return: void
*/
void swap_int(int *a, int *b)
{
	int plc;

	plc = *a;
	*a = *b;
	*b = plc;
}
