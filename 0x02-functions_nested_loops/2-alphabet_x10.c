#include "holberton.h"
/**
 * void print_alphabet_x10 - print alphbet 10 times
 *
 *
 * Description: print alphbet 10 times
 *
 * Return: No return void function
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
