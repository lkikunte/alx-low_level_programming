#include "main.h"

/**
* set_string - Sets the value of a pointer to char
* @s: Pointer of pointer with which value will be changed
* @to: Point to variable with new value
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
