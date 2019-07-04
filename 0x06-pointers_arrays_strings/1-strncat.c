#include "holberton.h"

/**
 *_strncat - concatenate the two strings
 * @dest: destiny to where the code will be printed
 * @src: source from where the code comes
 * @n: use of bytes
 * Return: String concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}

	return (dest);
}
