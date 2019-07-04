#include "holberton.h"
/**
 * _strcat - string to concatenate
 * @dest: where the string is going to be printed
 * @src: the code to be printed
 * Return: the return is the destination
 *
 */
char *_strcat(char *dest, char *src)
{

	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

		for (y = 0; src[y] != '\0'; y++, x++)
		{
			dest[x] = src[y];
		}
			dest[x] = '\0';

			return (dest);
}
