#include "sort.h"
/**
 * bubble_sort - Sort an array in ascending order via bubble sort
 * @array: array of number to sort
 * @size: size of array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t x = 1;
	int temp = 0;

	if (size > 2)
	{
		while (x < size)
		{
			if (array[x - 1] > array[x])
			{
				temp = array[x];
				array[x] = array[x - 1];
				array[x -1] = array[x];
			}
			x = x + 1;
		}
	}
}
