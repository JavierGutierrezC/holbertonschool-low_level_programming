#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints integers
 * @n: integers to be printed
 * @separator: string of char to print between n
 * Return: 0
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	va_start(valist, n);

		for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(valist, int));
		if (x < (n - 1))
		printf("%s", separator);
	}
		printf("\n");
			va_end(valist);
}
