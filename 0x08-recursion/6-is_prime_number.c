#include "holberton.h"
/**
 * is_prime_number - function that returns 1 for prime number 0 for none
 * @n: variable to witch the function will run on
 *
 *
 * Return: 1 for prime, 0 for none
 */
int is_prime_number(int n)
{
	if (n % 2 == 1)
	{
		return (0);
	}
	else if (n <= 1)
	{
		return (0);
	}
	is_prime_number((!(n - 1) + 1) / n);
	return (1);
}
