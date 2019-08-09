#include "holberton.h"
#include <stdio.h>

/**
 * get_endianness - checks for endianness
 *
 * Return: 1 for LItle Endian, 0 for Big Endian
 *
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	else
		return (0);


}
