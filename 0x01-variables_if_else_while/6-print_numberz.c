#include <stdio.h>

/**
  * main - Prints all decimal digits in numerical order
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
