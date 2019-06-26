#include "holberton.h"
/**
 * print_last_digit - this will print the last digit of the number
 * @n: integer to use
 *
 * Print last number
 */


int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * -1;
	}

	_putchar('0' + n);
	return (n);
}
