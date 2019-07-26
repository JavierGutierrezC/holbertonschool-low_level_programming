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
		exit;
	}
	if (atoi(arggv[1]) < 0)
	{
		printf("Error\n");
		exit;
	}
	return (0);
}
