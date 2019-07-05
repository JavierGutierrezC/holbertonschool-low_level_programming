#include "holberton.h"
/**
 * string_toupper - changes lower to upper
 * @s: char to change for fom lower to upper
 *
 * Return: pointer from the string to change
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;
	}
	return (s);
}
