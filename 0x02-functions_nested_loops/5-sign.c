#include "holberton.h"
/**
 * print_sign writes +, - or 0 depending on the number given
 * @n: character to print
 *
 * Return 1 if true or -1 if it is false and o if it is zero
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
