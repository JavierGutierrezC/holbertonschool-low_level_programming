#include "holberton.h"
/**
 * times_table - arrange numbers so that they increment.
 * Return: no return.
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int ult, dece;

	while (a <= 9)
	{
		while (b <= 9)
		{
			d = a * b;
			if (d < 10)
			{
				if (c > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(d + '0');
				c = c + 1;
			} else
			{
				ult = d % 10;
				dece = ((d - ult) / 10);
				_putchar(',');
				_putchar(' ');
				_putchar(dece + '0');
				_putchar(ult + '0');
			}
			b = b + 1;
		}
		_putchar('\n');
		b = 0;
		c = 0;
		a = a + 1;
	}
}
