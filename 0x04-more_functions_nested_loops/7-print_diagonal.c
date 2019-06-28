#include "holberton.h"

/**
 * print_diagonal - prints a set of characters diagonaly
 *
 * @n: variable that is going to be used
 *
 *
 */

void print_diagonal(int n)
{

	int c = 0;
	int r = 0;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (r = 0; r < n; r++)
		{
			for (c = 0; c < r; c++)
			{
				_putchar(' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
