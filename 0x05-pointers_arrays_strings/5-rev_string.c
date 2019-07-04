#include "holberton.h"
/**
 * rev_string - String to be reversed
 * @s: variable to use as input
 *
 */
void rev_string(char *s)
{
	int x;
	int y = 0;
	int z = 0;
	int count[500];

	for (x = 0; x < 500; x++)
	{
		if (s[x] == '\0')
			break;
		z++;
	}
	for (x = z - 1; x >= 0; x--)
	{
		count[y] = s[x];
		y++;
	}
	for (x = 0; x < z; x++)
	{
		s[x] = count[x];
	}
}
