#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1
 * @n: value to enter
 * @index: place to set the value
 * Return: 1 if it works or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
		return (1);
}
