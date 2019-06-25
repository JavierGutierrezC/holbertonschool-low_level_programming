#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * print_alphabet - prints alphabet 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int alph;
	int r;

	for (r = 0; r <= 10; r++)
	{

		for (alph = 'a'; alph <= 'z'; alph++)

		{
		_putchar(alph);
		}
	_putchar('\n');
	}
}
