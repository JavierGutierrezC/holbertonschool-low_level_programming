#include "holberton.h"
/**
 * print_rev - Funtion to print a string
 * @s:  String to be printed backwards
 *
 */

void print_rev(char *s)

{
	int n = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		/*_putchar(s[n]);*/
	}

	while (n > '\0')
	{
		n--;
		_putchar(s[n]);
	}
	_putchar('\n');
}
