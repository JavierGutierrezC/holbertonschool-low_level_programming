#include "holberton.h"
/**
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	for (; *haystack; haystack++)
	{
		for (x = 0; needle[x]; x++)
		{
			if (needle[x] != haystack[x])
				break;
		}
		if (!needle[x])
			return (haystack);
	}
	return(0);
}
