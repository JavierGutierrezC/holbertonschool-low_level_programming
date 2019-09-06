#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints the name of the file
 * @argc: count the string
 * @argv: string
 * @x:
 * Return: prints the name
 */
int main(int argc, char *argv[])
{
	int x;
	int add;
	int num;

	for (x = 1; x < argc; x++)
	{
		for (num = 0; argv[x][num]; num++)
		{
			if (isdigit(argv[x][num]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[x]);
	}
	printf("%d\n", add);
	return (0);
}
