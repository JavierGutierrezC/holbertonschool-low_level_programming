#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to he first ellement of the array
 * @size: number of element sin the array
 * @value: value to search for
 * Return: Index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0;
	size_t mid = 0;
	size_t x = 0;

	if (array == NULL)
		return (-1);
	high = size - 1;
	while(low <= high)
	{
		/*mid = (low + high) / 2;*/
		printf("Searching in array: ");
		for(x = low; x < high; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[high]);
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
