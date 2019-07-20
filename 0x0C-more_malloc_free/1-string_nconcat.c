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

	for (y = 0; *(s1 + y); y++)
		;
	for (z = 0; *(s2 + z); z++)
		;
	z++;
	if (n > z)
	{
		x = malloc((y + z) * sizeof(*x));
	}
	else
	{
		x = malloc((y + n + 1) * sizeof(*x));
	}
	if (x == NULL)
	{
	return (NULL);
	}
	for (w = 0; w < y; w++)
	{
		*(x + w) = *(s1 + w);
	}
	for (q = 0; q < z && q < n; w++, q++)
	
		*(x + w) = *(s2 + q);
		*(x + w) = '\0';

	return(x);
}
