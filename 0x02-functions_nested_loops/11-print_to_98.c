#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Prints all the numbers between a given number and 98.
* @n: The number to be evaluated
* Return: void
*/
void print_to_98(int n)
{
int d;

d = n - 98;
if (d < 0)
{
	for (n; n < 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	printf("98");
}
else
{
	for (n; n > 98; n--)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	printf("98");
}
return;
}
