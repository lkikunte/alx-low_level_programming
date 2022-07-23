#include "main.h"

/**
* _strlen - Returns the length of a given string
* @s: the given string
* Return: String length
*/
int _strlen(char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
		l++;
	return (l);
}
