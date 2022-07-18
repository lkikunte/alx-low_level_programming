#include "main.h"

/**
* _strpbrk - Searches a string for any set of bytes
* @s: String to search
* @accept: accepted characters
* Return: Pointer to the byete in s that matched or NULL if not matched
*/
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
