#include <stdio.h>

/**
  * main - Prints all decimal digits in numerical order
  *
  * Return: 0
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
