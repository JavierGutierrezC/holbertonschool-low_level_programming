#include "holberton.h"

/**
 * print_line - print a character in a cascade shape
 *
 * @n: times the lines will repeat
 *
 */

void print_line(int n)
{
	int a = 0;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
