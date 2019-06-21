#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = '0';

	while (a <= '9')

	{
		putchar (a);
		a = a + 1;
	}
	putchar('\n');


	return (0);
}
