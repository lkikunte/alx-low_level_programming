#include "main.h"

/**
* print_last_digit - Prints last digit of a number.
* @n: Number to be evaluated.
* Return: int of last digit.
*/
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m = m * -1;
	_putchar(m + '0');
	return (m);
}
