#include "main.h"

/**
* _isdigit - Check if a numerical input is a digit in ASCII
* @x: The number to be evalutated
* Return: int 1 if number input is a digit or 0 if not
*/
int _isdigit(int x)
{
	if (x > 47 && x < 58)
		return (1);
	return (0);
}
