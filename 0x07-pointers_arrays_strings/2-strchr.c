#include "holberton.h"

/**
* _strchr - Locates a character in a string
* @s: String
* @c: Character to be located
* Return: the string from character found
*/
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
