#include "main.h"

/**
* main - Prints alphabet in lowercase.
* Return: 0
*/
int main(void)
{

/**
* print_alphabet - Prints alphabet.
* Return: void
*/
	void print_alphabet(void)
	{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	}
}
