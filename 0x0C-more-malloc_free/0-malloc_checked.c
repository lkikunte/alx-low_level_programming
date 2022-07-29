#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - Allocates memory using malloc
* @b: the size of memory needed
* Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
