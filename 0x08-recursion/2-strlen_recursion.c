#include "holberton.h"
/**
 * _strlen_recursion - Function returns a lenght of a string
 * @s: pointer of string to count
 *
 *
 * Return: Number of characters to count.
 */
int _strlen_recursion(char *s)
{

	if (*s != 0)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
