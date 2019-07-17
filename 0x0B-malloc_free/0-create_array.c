#include <holberton.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	x= malloc(size * sizeof(*s));
	if (x = NULL)
	{
		return(NUll);
	}
	if (size =0)
	{
		return(NULL);
	}
	for ( i = 0; y < size; i++)
	{
		x[y] =c;
	}
	return (x);
}
