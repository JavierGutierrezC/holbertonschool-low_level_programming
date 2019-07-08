#include "holberton.h"
#include <stdio.h>
/**
 * leet - Encodes the array
 * @arr: Array to switch
 * Return: the array with the changes
 *
 */
char *leet(char *arr)
/*int main ()*/
{
	/*char arr[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";*/
	int x;
	int y;
	char letr[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char new[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (x = 0; arr[x] != '\0'; x++)
	{
	for (y = 0; y < 10; y++)
	{
	if (arr[x] == letr[y])
	{
	arr[x] = new[y];
	}
	}
	}
	return (arr);
	/*printf("%s",arr);*/
}
