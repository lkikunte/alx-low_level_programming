#include "main.h"

/**
* _strncat - Concatenates two strings to a certain limit
* @dest: The destination
* @src: The source
* @n: The limit of the concatenation
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
		dlen++;
	while (j < n && src[j])
		{
		dest[dlen] = src[j];
		dlen++;
		j++;
		}
	dest[dlen + n + 1] = '\0';
	return (dest);
}
