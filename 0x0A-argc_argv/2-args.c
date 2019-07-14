#include <stdio.h>
/**
 * main - prints the name of the file
 * @argc: count the string
 * @argv: string
 *
 * Return: prints the name
 */
int main(int argc, char *argv[])
{
	int x;
	for(x = 0; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
