#include "holberton.h"
/**
 * reverse_array - String to be reversed
 * @a: variable to use as input
 * @n: elements to swap
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;
	int imp;

	while (x < y)
	{
		imp = a[x];
		a[x] = a[y];
		a[y] = imp;
		x++;
		y--;
	}
}
