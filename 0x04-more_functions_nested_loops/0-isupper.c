#include "holberton.h"

/**
 * _isupper - used to select characters that are leters in uppercase
 * @c: is the variable that is going to be evaluated
 * Return: - if it is an uppercase letter reurn is 1 if not it is 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
