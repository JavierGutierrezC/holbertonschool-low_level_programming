#include "holberton.h"

/**
 *_strncpy - copy and concatenate the two strings
 * @dest: destiny to where the code will be printed
 * @src: source from where the code comes
 * @n: use of bytes
 * Return: String copy and concatenation
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*
	 *int x;
	 */
	int y;

	/*
	 *for (x = 0; dest[x] != '\0'; x++)
	 *{
	 *}
	*/
	for (y = 0; src[y] != '\0' && y < n; y++)

		dest[y] = src[y];
	for (; y < n; y++)
		dest[y] = '\0';

	return (dest);
}
