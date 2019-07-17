#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function to create an array
 * @size: integer, lenght of the string
 * @c: Character
 *
 * Return: NULL if 0 or to pointer in array
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	x = malloc(size * sizeof(*x));
	if (x == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		x[y] = c;
	}
	return (x);
}
