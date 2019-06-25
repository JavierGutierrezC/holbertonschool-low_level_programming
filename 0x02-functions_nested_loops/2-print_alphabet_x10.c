#include "holberton.h"

/**
 *
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int alph;
	int r;

	for (r = 0; r <= 9; r++)
	{

		for (alph = 'a'; alph <= 'z'; alph++)

		{
		_putchar(alph);
		}
	_putchar('\n');
	}
}
