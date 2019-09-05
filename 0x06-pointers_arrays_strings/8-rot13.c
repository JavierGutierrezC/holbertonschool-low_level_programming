#include "holberton.h"
/**
 *
 *
 *
 *
 */
char *rot13(char *change)
{
	int x, y;
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for(x = 0; change[x] != '\0'; x++)
	{
		for (y = 0; norm[y] != '\0'; y++)
		{
			if (norm[y] == change[x])
			{
				change[x] = rot[y];
				break;
			}
		}
	}
	return(change);
}
