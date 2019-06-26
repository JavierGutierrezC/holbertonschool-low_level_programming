#include "holberton.h"

/**
 * largest_number - it will print the largest of 3 numbers
 * @a: variable a
 * @b: variable b
 * @c: variable c
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else
	{
		if (b >= a && b >= c)
		{
			largest = b;
		}
		else
		{
			largest = c;
		}
	}
	return (largest);
}
