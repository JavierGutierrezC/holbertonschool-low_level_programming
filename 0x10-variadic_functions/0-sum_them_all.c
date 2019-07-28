#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - adds integers
 * @n: Number of arguments
 * Return: the sum of the arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	int y = 0;

	va_start(valist, n);

	if (n == 0)
	{
		return (0);
	}
	for (x = 0; x < n; x++)
	{
		y = y + va_arg(valist, int);
	}
	va_end(valist);
	return (y);
}
