#include "holberton.h"

/**
 * print_numbers - prints a series of numbers
 *
 *
 */

void print_numbers(void)
{
	int an = '0';

	for (an = '0'; an <= '9'; an++)
	{
		_putchar(an);
	}
	_putchar('\n');
}
