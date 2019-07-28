#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - Prints anything
 * @format: input with diferent formats
 * Return: 0
 *
 **/
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *s;

	va_start(valist, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", ((char)va_arg(valist, int)));
			break;
		case 'i':
			printf("%i", (va_arg(valist, int)));
			break;
		case 'f':
			printf("%f", (va_arg(valist, double)));
			break;
		case 's':
			s = va_arg(valist, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(valist);
}
