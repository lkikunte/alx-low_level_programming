#include "main.h"

/**
* _isupper - Identifies the case of a letter
* @x: The letter to be examined
* Return: int 1 for an uppercase letter or 0 for lowercase
*/
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	else
		return (0);
}
