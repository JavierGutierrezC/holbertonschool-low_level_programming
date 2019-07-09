#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr - returns a pointer  to the first occurance
 * @s: char pointer to print
 * @c: char to print
 *
 * Return: is zero
 *
 */
char *_strchr(char *s, char c)
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
