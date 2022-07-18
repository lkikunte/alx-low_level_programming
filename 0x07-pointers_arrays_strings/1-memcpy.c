#include "main.h"

/**
* _memcpy - Compies memory area
* @dest: Destination
* @src: Source
* @n: data to copy
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
