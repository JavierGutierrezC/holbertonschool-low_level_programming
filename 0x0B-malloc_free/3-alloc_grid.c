#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width if the array
 * @height: height of the array
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **z;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	z = malloc(height * sizeof(int *));
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		z[x] = (int *)malloc(width * sizeof(int));

		if (!z[x])
		{
			for (x = 0; x >= 0; x--);

			{
				free(z[x]);
			}

			free(z);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	{
		z[x][y] = 0;
	}
	}
	return (z);
}
