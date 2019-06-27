#include "holberton.h"

/**
 * print_numbers - prints a series of numbers
 * @an: - variable of the function
 * Return: - _putchar the numbers from 0 to 9
 */

void print_numbers(void)
{
	for (int an = '0'; an <= '9'; an++)
	{
		_putchar(an);
	}
	_putchar('\n');
}
