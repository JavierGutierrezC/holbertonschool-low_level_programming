#include "holberton.h"

/**
 * print_triangle - Funtion used to print a triangle
 *
 * @size: this represents the size of the triangle
 */

void print_triangle(int size)
{
	int y = 0;
	int z = 0;

	while (z < size)
	{
		while (y < size)
		{
			if (y < (size - 1 - z))
			{
				_putchar(' ');
			} else
			{
				_putchar(35);
			}
			y = y + 1;
		}
		y = 0;
		_putchar('\n');
		z = z + 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
