#include "holberton.h"

/**
 * puts2 - used to count by 2
 *
 * @str: string to count
 * Return: numbers of string
*/
void puts2(char *str)

{
	int n = 0;

	for (n = 0; str[n] != '\0'; n = n + 2)
	{
		_putchar(str[n]);
	}
	_putchar ('\n');
}
