#include "holberton.h"
/**
 * _isalpha - checks for lower case letters.
 * @c: checks to see if char is lower case
 *
 * Return: 1 if it is true and 0 if it is false
 */

int _isalpha(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
	else
		return (0);
}
