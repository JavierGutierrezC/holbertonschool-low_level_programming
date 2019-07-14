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
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
