#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the file
 * @argc: count the string
 * @argv: string
 *
 * Return: prints the name
 */
int main(int argc, char *argv[])
{
	(void) argv;

	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
