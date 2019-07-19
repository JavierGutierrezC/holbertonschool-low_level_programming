#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *x;
	int y;

	if (min > max)
	{
		return (NULL);
	}
	x = malloc((max - min + 1) * sizeof(x));
	if (x == NULL)
	{
		return (NULL);
	}
	for (y = 0; min <= max; y++,min++)
		x[y] = min;
	return (x);
}
