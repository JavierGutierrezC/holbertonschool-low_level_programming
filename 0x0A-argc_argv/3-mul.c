#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two numbers
 * @argc: count the string
 * @argv: string of characters
 *
 * Return: is 0
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
