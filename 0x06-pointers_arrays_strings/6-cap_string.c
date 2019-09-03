#include "holberton.h"
/**
 * cap_string - change a strig from lower tu upper-case
 * @x: String to change
 *
 * Return: Capitalized string
 *
 */

char *cap_string(char *x)
{
	int str;
	int y;
	char figs[] = ",.;:{}()!?\"\n\t\" ";

	for (str = 0; x[str]; str++)
	{
		if (x[0] >= 96 && x[0] <= 123)
			x[0] = x[0] - 32;
		for (y = 0; figs[y]; y++)
		{
			if (x[str - 1] == figs[y])
			{
				if (x[str] >= 96 && x[str] <= 123)
					x[str] = x[str] -32;
			}
		}
	}
	return (x);
}
