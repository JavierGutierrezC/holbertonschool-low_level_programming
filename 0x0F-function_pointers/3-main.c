#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function collects all other functions
 * @argc: int
 * @argv: char
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	char z = *argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
		if (z != '+' && z != '-' && z != '*' && z != '/' && z != '%')

		{
			printf("Error\n");
			exit(97);
		}
		if (argv[2][1] == '\0')
		{
			x = atoi(argv[1]);
			y = atoi(argv[3]);
			printf("%d\n", (get_op_func(argv[2]))(x, y));
		}
		return (0);
}
