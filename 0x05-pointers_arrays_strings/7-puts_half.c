#include "holberton.h"

/**
 * puts_half - used to count by 2
 *
 * @str: string to count
 * Return: numbers of string
*/
void puts_half(char *str)

{
	int n;
	int mit;
	int mas;

	for (n = 0; str[n] != '\0'; n++)
	{
		mit++;
	}
	if (mit % 2 == 0)
	{
		mas = mit / 2;
	}
	else
	{
		mas = (mit + 1) / 2;
	}
	for (n = mas; n < mit; n++)
	{
		_putchar(str[n]);
	}

	_putchar ('\n');
}
