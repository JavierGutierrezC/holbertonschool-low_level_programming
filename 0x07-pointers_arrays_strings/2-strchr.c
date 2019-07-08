#include "holberton.h"
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
			return (&s[x]);
		}
	}
	return ('\0');
}
