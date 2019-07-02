#include "holberton.h"

/**
 * swap_int - used to swap values
 * @a: variable to swap
 * @b: variable to swap
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
