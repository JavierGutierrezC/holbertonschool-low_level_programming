#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = '0';
	char b = 'a';

	while (a <= '9')

	{
		putchar (a);
		a = a + 1;
	}

	while (b <= 'f')

	{
		putchar (b);
			b = b + 1;
	}

	putchar('\n');


	return (0);
}
