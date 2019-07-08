#include "holberton.h"
/**
 * _memset - fill memory data
 * @s: memory pointer
 * @b: bytes
 * @n: space of bytes
 * Return: returns a pointer to the memory area
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < (int)n; x++)
	{
		s[x] = b;
	}
	return (s);
}
