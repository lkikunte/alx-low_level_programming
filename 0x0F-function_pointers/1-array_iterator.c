#include "function_pointers.h"

/**
* array_iterator - executes function given as parameter on elements of array
* @array: array to use
* @size: size of the array
* @action: pointer to the function to use
* Return: void - successful
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
