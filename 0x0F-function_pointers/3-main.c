#include "calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - mainfunction
 * @argc: int
 * @argv: char
 * Reurn: zero
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
		if (argv[2][0] == '+' || argv [2][0] == '-' || argv [2][0] == '*' || argv[2][] == '/' || argv[2][0] =='%')
		{
			printf("Error\n");
			exit(99);
		}
		x = atoi(argv[1]);
		y = atoi(argv[3]);
		if (argv[2][1] != '\0')
		{
			printf("Error\n")
				exit(99);
		}
		printf("%d\n", (get_op_func(argv[2]))(x,y));

		return (0);
}
