#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - prints a function with an array
 * @array: array of numbers to print
 * @size: size of array
 * @action: pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if(array && action)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
