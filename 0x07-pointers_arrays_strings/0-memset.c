#include "main.h"

/**
* _memset - Fills a memory area with a constant byte
* @s: Memory area to fill
* @b: Constant byte to be used to fill
* @n: Size of memory area to fill
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
