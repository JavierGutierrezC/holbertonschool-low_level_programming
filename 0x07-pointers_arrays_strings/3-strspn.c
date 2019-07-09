#include "holberton.h"
/**
 * _strspn - Funtion that gets the lenght of a substring
 * @s: string to count
 * @accept: string to count
 * Return: index
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int indx;
	int x;
	int y;

	for (x = 0; s[x]; x++)

		for (y = 0; accept[y]; y++)
		{
			if (s[indx] == accept[y])
			{
				indx++;
			}
		}
	return (indx);
}
