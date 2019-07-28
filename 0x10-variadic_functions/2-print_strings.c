#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints the strings
 * @separator: string between string
 * @n: string to print
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list objects;
	unsigned int x;
	char *y;

	va_start(objects, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(objects, char *);
		if (y == NULL)
			y = "(nil)";
		{
			printf("%s", y);
		}
		if (x < (n - 1) && separator)
		    printf("%s", separator);
	}
		printf("\n");
		va_end(objects);
}
