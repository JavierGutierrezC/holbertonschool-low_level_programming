#include "holberton.h"

/**
 * print_alphabet - writes alphabet in lower case from a to z.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)

	{
		_putchar(alph);
	}
	_putchar('\n');
}
