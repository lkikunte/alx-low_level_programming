#include "main.h"

/**
* jack_bauer - Prints every minute of the day.
* Return: void
*/
void jack_bauer(void)
{
int h, h1, m, m1;

for (h = 0; h < 3; h++)
{
	for (h1 = 0; h1 < 5; h1++)
	{
		for (m = 0; m < 7; m++)
		{
			for (m1 = 0; m1 < 10; m1++)
			{
				_putchar(h + '0');
				_putchar(h1 + '0');
				_putchar(':');
				_putchar(m + '0');
				_putchar(m1 + '0');
				_putchar('\n');
			}
		}

	}
}
}
