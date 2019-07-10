#include "holberton.h"

/**
 * _puts_recursion - prints a function followed by a new line
 * @s: pointer of string
 * Return: string backwards
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
