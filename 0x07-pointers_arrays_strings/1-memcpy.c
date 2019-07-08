#include "holberton.h"
/**
 * _memcpy - fill memory data
 * @dest: memory pointer
 * @src: bytes
 * @n: space of bytes
 * Return: returns a pointer to the memory area
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (x = 0; x < (int)n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
