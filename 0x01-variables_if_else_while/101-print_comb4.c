#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = '1'; y <= '8'; y++)
		{
			for (z = '2'; z <= '9'; z++)
			{
				if (x < y && y < z)
				{
					_putchar(x);
					_putchar(y);
					_putchar(z);

					if (x != '7' || y != '8' || z != '9')

					_putchar(',');
					_putchar(' ');

				}

			}
		}

	}
	_putchar('\n')
		return(0);
}
