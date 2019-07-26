#include <stdio.h>
#include <stdlib.h>
/**
 * main - up codes it's own function
 * @argc: arguments
 * @argv: arguments of array
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error?n");
		exit(1);
	}
	if (atoi(arggv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
