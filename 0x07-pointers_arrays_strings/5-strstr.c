#include "holberton.h"
/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: String to check
 * @needle: String to search in
 * Return: a pointer to the beginning of the located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	for ( ; *haystack; haystack++)
	{
		for (x = 0; needle[x]; x++)
		{
			if (needle[x] != haystack[x])
				break;
		}
		if (!needle[x])
			return (haystack);
	}
	return (0);
}
