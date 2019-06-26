#include "holberton.h"
/**
 * _abs - return absolut value.
 * @r: Number to transfor into a positive number
 *
 * Return: is always a positive number.
 * Negative numbers are turned into positive
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	if (r == 0)
	{
		return (0);
	}
	if (r < 0)
	{
		return (r * -1);
	}
	return (0);
}
