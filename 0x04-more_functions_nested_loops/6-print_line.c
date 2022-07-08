#include "main.h"

/**
* print_line - Draws as many lines as determined by variable
* @n: Determines how many lines should be drawn
* Return: void
*/
void print_line(int n)
{
	int x;

	if (n < 1)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar(95);
		_putchar('\n');
	}
}
