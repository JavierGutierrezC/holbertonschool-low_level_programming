#include "holberton.h"
#include <stdio.h>
/**
 * print_array - used to print numbers
 *
 * @a: string to count
 * Return: numbers of string
*/
void print_array(int *a, int n)

{
	int mas;

	for (mas = 0; mas < n; mas++)
		if (mas < n -1)
		{
			printf("%d, ",a[mas]);
		}
	else
	{
		printf("%d\n",a[mas]);
	}

}
