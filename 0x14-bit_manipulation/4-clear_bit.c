#include "holberton.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0
 * @n: value to set
 * @index: place to insert the value
 * Return: 1 if it works, 0 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
