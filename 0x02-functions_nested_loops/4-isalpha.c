#include "main.h"

/**
* _isalpha - Finds if an integer is a character in ASCII..
* @c: The integer to be tested.
* Return: An integer, 1, if lowercase, 0, if not.
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
