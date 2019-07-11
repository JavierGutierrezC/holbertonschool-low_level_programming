#include "holberton.h"
/**
 * squared - function for square root of number
 * @a: variable to fund square root
 * @b: variable with square number
 *
 *
 *Return: Square root
 */
int squared(int a, int b)
{
	if (b == a * a)
	{
		return (a);
	}
	if (a == b)
	{
		return (-1);
	}
	return (squared(a + 1, b));
}

/**
 * _sqrt_recursion - function to find the square root of a given number
 * @n: variable to find square root
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (n);
	}
	return (squared(1, n));
}
