#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - pints the sum of 2 diagonal matrix
 * @a: array pointer
 * @size: size of array
 *
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum;

	sum = 0;
	for (x = 0; x < size; x++)
	{
		sum += *(a + (size * x) + x);
	}
	printf("%d, ", sum);
	sum = 0;
	for (x = size; x > 0; x--)
	{
		sum += *(a + (size * x) - x);
	}
	printf("%d\n", sum);
}
