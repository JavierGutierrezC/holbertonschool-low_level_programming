#include "holberton.h"
/**
 * _islower - checks for lower case letters.
 * @c: checks to see if char is lower case
 *
 * Return: Always 0
 */

int _islower(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
		return (1);
}
