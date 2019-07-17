#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for(x = (height 1); x >= 0; x--)
	{
		free(grid[x]);
	}
	free (grid);
}
