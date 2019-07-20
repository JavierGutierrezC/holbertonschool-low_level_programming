#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int y;
	unsigned int z;
	unsigned int w;
	unsigned int q;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
		s2 = "";

	for (y = 0; *(x1 + y); y++)
		;
	for (z = 0; *(x2 + z); z++)
		;
	z++;
	if (n > z)
		x = malloc((y + z) * sizeof(*x));
	else
		s = malloc((y + n + 1) *sizeof(*x));
	if (x == NULL)
		return (NULL);
