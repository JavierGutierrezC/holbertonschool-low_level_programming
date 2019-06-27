#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - used to select characters that are leters in uppercase.
 *
 * Return: if it is an uppercase letter reurn is 1 if not it is 0.
 */
int _isupper(int c)
{
	if (c <= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
