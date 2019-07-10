#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - returns a pointer for a set of bytes
 * @s: pointer
 * @accept: char to print
 *
 * Return: is null
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x]; x++)
	{
	for (y = 0; accept[y]; y++)
		if (s[x] == accept[y])
			return (s + x);
	}
	return (NULL);

}
