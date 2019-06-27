#include "holberton.h"

/**
 * print_numbers - prints a series of numbers
 * @num: - variable of the function
 * Return: - _putchar the numbers from 0 to 9
 */
void print_numbers(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
