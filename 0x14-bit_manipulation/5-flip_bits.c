#include <stdlib.h>
#include "main.h"

/**
* flip_bits - returns the number of bits needed to flip from numbers
* @n: base
* @m: power
* Return: unsigned int - bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;
		mask >>= 1;
	}
	return (count);
}
