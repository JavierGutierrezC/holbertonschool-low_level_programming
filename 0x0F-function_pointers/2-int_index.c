#include "function_pointers.h"

/**
 * int_index - Searches for the integer
 * @array: array to print
 * @size: Size of the array
 * @cmp: pointer that point to the array
 * Return: -1 for 0 or null
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) == 1)
			{
				return (x);
			}
		}
	}
	return (-1);
}
