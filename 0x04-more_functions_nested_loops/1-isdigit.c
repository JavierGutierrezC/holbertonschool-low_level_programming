#include "holberton.h"

/**
 * _isdigit - will check for characters that are digits
 *
 * Return: 1 if it is a digit 0 for anything else
 */

int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
