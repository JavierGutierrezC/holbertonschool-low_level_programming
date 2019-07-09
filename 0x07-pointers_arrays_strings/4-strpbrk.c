#include "holberton.h"
#include <stdlib.h>
/**
 * _strpbrk - returns a pointer  to the first occurance
 * @s: char pointer to print
 * @accept: char to print
 *
 * Return: is zero
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s = s + x);
		}

	}
	if (s[x] == '\0' && c == '\0')
	{
		return (s = s + x);
	}
	else
	{
		return (NULL);
	}
}
