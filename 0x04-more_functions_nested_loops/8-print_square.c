#include "holberton.h"

/**
 * print_square - print a square of equal sizes
 *
 * @size: variable that will be printed as reference
 *
 */

void print_square(int size)
{
	int c = 0;
	int r = 0;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}
	}
}
