#include "holberton.h"
/**
 * flip_bits - numbers to flip to change numbers
 * @n: first number
 * @m: secind number
 * Return: fliped numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 1;
	unsigned int fliped = 0;

	n ^= m;
	while (n)
	{
		if (n & x)
			fliped++;
		n >>= 1;
	}
	return (fliped);
}
