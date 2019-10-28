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
	size_t y = 1;
	int temp = 0;

	if (size >= 2 || array == NULL)
	{
		while (x < size)
		{
			if (array[x - 1] > array[x])
			{
				temp = array[x];
				array[x] = array[x - 1];
				array[x - 1] = temp;
				print_array(array, size);
			}
			else
			{
				y = y + 1;
			}
			x = x + 1;
			if (y == size && x == size)
			{
				break;
			}
			else if (x == size)
			{
				x = 1;
				y = 1;
			}
		}
	}
}
