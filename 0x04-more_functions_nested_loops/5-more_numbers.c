#include "holberton.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int ans = 0;
	int row = 0;
	int imp;

	for (row = 0; row <= 9; row++)
	{
		for (ans = 0; ans <= 14; ans++)
		{
			if (ans > 9 && ans <= 14)
			{ imp = ((ans % 10) + '0');
			  _putchar('1');
			}
			else
			{
				imp = (ans + '0');
			}
			_putchar(imp);
}

	_putchar('\n');
	}
}
