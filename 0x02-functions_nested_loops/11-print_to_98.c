#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - adds ints.
 *@n: first digit
 *
 *Return: values asked for
 *
 */
void print_to_98(int n)
{
	int n1;

	if (n >= 98)
	{
		n1 = n;
		while (n1 >= 98)
		{
			if (n1 > 98)
			{
				printf("%d, ", n1);
			}
			if (n1 == 98)
			{
				printf("%d\n", n1);
			}
			n1 = n1 - 1;
		}
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			}
			if (n == 98)
			{
				printf("%d\n", n);
			}
			n = n + 1;
		}
	}
}
