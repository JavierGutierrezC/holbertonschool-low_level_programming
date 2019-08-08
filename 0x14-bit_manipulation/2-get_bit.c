#include "holberton.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
n = n >> index

	if (index > 63)
		return(-1);
return((n >> index) &1);

}
