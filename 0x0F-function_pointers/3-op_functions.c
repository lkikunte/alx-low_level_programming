#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - returns the sum of two number
* @a: first number
* @b: second number
* Return: int sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - returns the difference of two numbers
* @a: first number
* @b: second number
* Return: int difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - returns the product of two numbers
* @a: first number
* @b: second number
* Return: int product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - returns the result of division of two numbers
* @a: first number
* @b: second number
* Return: int result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - returns the remainder of the division of two numbers
* @a: first number
* @b: second number
* Return: int remainder
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
