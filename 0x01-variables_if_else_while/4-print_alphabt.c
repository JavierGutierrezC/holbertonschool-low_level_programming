#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a = a + 1;

		if
(a == 'e' || a == 'q')

		{a = a + 1; }
	}
	putchar('\n');

	return (0);
}
