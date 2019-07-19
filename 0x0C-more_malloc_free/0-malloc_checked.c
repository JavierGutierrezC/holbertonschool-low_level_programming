#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - Allocate memory using malloc
* @b: integer
* Return: 0 if it is right
*/
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
		if (x == NULL)
		{
			free(x);
			exit(98);
		}
		return (x);
}
