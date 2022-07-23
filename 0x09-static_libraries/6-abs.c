#include "main.h"

/**
* _abs - Computes and prints the absolute value of an integer
* @n: Number to be computed.
* Return: int of absolute value.
*/
int _abs(int n)
{
int v;

	if (n >= 0)
	{
		v = n * 1;
		return (v);
	}
	else
	{
		v = n * -1;
		return (v);
	}
}
