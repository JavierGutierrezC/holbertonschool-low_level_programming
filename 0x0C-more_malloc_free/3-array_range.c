#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: int value
 * @max: int value
 * Return: Pointer of array
 */

int *array_range(int min, int max)
{
	int *x;
	int y;
	int z;

	if (min > max)
	{
		return (NULL);
	}

	z = max - min;

	x = malloc(sizeof(x) * (z + 1));

	if (x == NULL)
	{
		return (NULL);
	}
	for (y = 0; min <= z; y++)
	{
		x[y] = min;
		min++;
	}
	return (x);
}
