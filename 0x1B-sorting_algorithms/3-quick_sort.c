#include "sort.h"
/**
 * partitionf - Quick sort using lomuto partition scheme.
 * @array: array to sort.
 * @lo: start point of index of the partition.
 * @hi: highest index of the partition.
 * @size: size of the index
 * Return: index stores in variable i
 */
size_t partitionf(int *array, int low, int high, size_t size)
{
	int x, y;
	int  swap, piv;

	piv = array[high];
	x = low - 1;
	for (y = low; y < high; y++)
	{
		if (array[y] < piv)
		{
			x++;
			if (x != y)
			{
				swap = array[x];
				array[x] = array[y];
				array[y] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[x + 1])
	{
		swap = array[x + 1];
		array[x + 1] = array[high];
		array[high] = swap;
		print_array(array, size);
	}
	return (x + 1);
}
/**
 * quicksort - Sort a partition of an array integer.
 * @array: array to sort.
 * @lo: index of the partition.
 * @hi: highest indes of the partition function sort.
 * @size: size of the array.
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int piv;

	if (low < high)
	{
		piv = partitionf(array, low, high, size);
		quicksort(array, low, piv - 1, size);
		quicksort(array, piv + 1, high, size);
	}
}
/**
 * quick_sort - sort an array of integers.
 * @array: Array to sort.
 * @size: Size of the array.
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size >= 2)
	{
		quicksort(array, 0, size - 1, size);
	}
}
