#include "holberton.h"
/**
 * binary_to_uint -  converts a binary in a unsigned int
 * @b: char to change to int
 *
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	while (b && *b)
	{
		if (*b == '0' || *b == '1')
			x = ((x << 1) | (*b++ - '0'));
		else
		return (0);
	}

				return (x);

}
