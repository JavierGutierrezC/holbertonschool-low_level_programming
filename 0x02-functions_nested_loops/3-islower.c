#include "holberton.h"
/**
 * _islower - checks for lower case letters.
 * @c: checks to see if char is lower case
 *
 * Return: Always 1 if true, 0 if false.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
