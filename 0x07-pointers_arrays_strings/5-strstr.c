#include "main.h"

/**
* _strstr - Locates a substring
* @haystack: The string to be searched
* @needle: The substring to find
* Return: Pointe to beginning of located substring or NULL if not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
				break;
		b++;
		if (needle[b] == '\0')
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
