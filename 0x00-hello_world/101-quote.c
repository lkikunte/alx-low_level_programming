#include <stdio.h>
#include <unistd.h>
/*
 * main - Prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 *   followed by a new line, to the standard error.
 *   Return: Always 0 (Success)
 */
int main(void)
{
/* function that prints to standard output*/
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
