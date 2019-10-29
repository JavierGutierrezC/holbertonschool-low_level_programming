#include "sort.h"
/**
 * selection_sort - Sorting by selection
 * @array: Array to sort
 * @size: size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t x = 1, y = 0;
	int min = 0, pos = 0, tem = 0;

	if (size >= 2 || array == NULL)
	{
		min = array[0];
		while (x < size)
		{
			if (array[x] < min)
			{
				min = array[x];
				pos = x;
			}
			x = x + 1;
			if (y == size - 1 && x == size)
			{
				break;
			}
			else if (x == size)
			{
				if (array[y] != min)
				{
					tem = array[y];
					array[y] = min;
					array[pos] = tem;
					print_array(array, size);
					min = array[y + 1];
					y = y + 1;
					x = y + 1;
				}
				else
				{
					min = array[y + 1];
					y = y + 1;
					x = y + 1;
				}
			}
		}
	}
}
