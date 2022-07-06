#include "main.h"

/**
* print_last_digit - Prints last digit of a number.
* @n: Number to be evaluated.
* Return: int of last digit.
*/
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = n * -1;
	m = n % 10;
	_putchar(m + '0');
	return (m);
}
