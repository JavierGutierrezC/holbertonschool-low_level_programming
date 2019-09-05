#include "holberton.h"
/**
 * rot13 - Encodes a string using rot13
 * @change: result of string converted to rot13
 *
 * Return: String in rot13
 */
char *rot13(char *change)
{
	int x, y;
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; change[x] != '\0'; x++)
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
	return (change);
}
