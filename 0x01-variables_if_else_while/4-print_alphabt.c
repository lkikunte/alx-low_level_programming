#include <stdio.h>

/**
* main - Prints the English alphabet
* Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
	putchar(c);
	if (c == 'e' || c == 'q')
		continue;
	}
	putchar('\n');
	return (0);
}
