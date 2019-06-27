#include "holberton.h"

/**
 *print_most_numbers - print the numbers from 1 to 9 without including 2 and 4
 *
 *
 *
 */

void print_most_numbers(void)
{
	int ans = '0';

	for (ans = '0'; ans <= '9'; ans++)
	{
		if (ans == '2' || ans == '4')
		{
			ans++;
		}

		_putchar(ans);
	}

	_putchar('\n');
}
