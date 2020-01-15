#include "search_algos.h"
/**
 *linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * @value: value to search for * Return: index where value is located
 * Return: The index of the value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;


	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
