#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - prints the binary number
 * @n: any number
 *
 *
 *
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
		_putchar('0');
	else
	{
		if ((n >> 1) != 0)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
