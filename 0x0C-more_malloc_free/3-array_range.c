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

	if (min > max)
	{
		return (NULL);
	}
	x = malloc(sizeof(x) * (max - min + 1));
	if (x == NULL)
	{
		return (NULL);
	}
	for (y = 0; min <= max; y++, min++)
	{
		x[y] = min;
	}
	return (x);
}
