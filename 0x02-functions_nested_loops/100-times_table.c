#include "holberton.h"
/**
 * print_times_table - function to print a table n times
 * @n: number of times a table will be printed
 *
 *
 */
void print_times_table(int n)
{
	int lin, col;
	int ans;

	if (!(n > 15 || n < 0))
	{
		for (lin = 0; lin <= n; lin++)
		{
			for (col = 0; col <= n; col++)
			{
				ans = (lin * col);
					if (col != 0)
					{
						_putchar(',');
						_putchar(' ');
					}
				if (ans < 10 && col != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((ans % 10) + '0');
				}
				else if (ans >= 10 && ans < 100)
				{
					_putchar(' ');
					_putchar((ans / 10) + '0');
					_putchar((ans % 10) + '0');
				}
				else if (ans >= 100 && col != 0)
				{
					_putchar((ans / 100) + '0');
					_putchar((ans / 10) % 10 + '0');
					_putchar((ans % 10) + '0');
			}
			else
				_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}
}
