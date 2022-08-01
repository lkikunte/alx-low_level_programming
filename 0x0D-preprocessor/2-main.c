#include <stdio.h>

/**
* main - Prints the name of the file the program was compiled from
* Return: int - zero as success
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
