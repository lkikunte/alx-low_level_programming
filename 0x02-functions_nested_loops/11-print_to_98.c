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
	for (n = n; n < 98; n++)
		printf("%i, ", n);
	printf("98\n");
}
else
{
	for (n = n; n > 98; n--)
		printf("%i, ", n);
	printf("98");
}
return;
}
