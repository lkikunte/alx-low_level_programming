#include "main.h"

/**
* print_sign - Determines if an integee has neg or pos sign or neither.
* @n: Number to be tested.
* Return: An integer 1 if positive, -1 if negative, 0 if 0.
*/
int print_sign(int n)
{
	if (n <= 0)
		{
		putchar('-');
		return (-1);
		}
	else if (n == 0)
		{
		putchar('0');
		return (0);
		}
	else
		{
		putchar('+');
		return (0);
		}
}
