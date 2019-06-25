#include "holberton.h"
/**
 * print_sign writes +, - or 0 depending on the number given
 * @n: character to print
 *
 * Return 1 if true or 0 if it is false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)

	{
		_putchar('-');
		return (-1);
	}

	if (n == 0)

	{
		_putchar('0');
		return (0);
	}

	return (0);
}
