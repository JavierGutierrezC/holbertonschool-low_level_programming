#include <stdio.h>
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
	int numb;

	if (argc == 1)
	{
		printf("%d\n", 0);
	return (1);
	}
	if (argc > 1)
{
		for(x =1; x < argc; x++)
			numb = atoi(argc[x]);
		if ((numb == 0 && *argv[x] == '0') || numb > 0)
		{
			suma = suma + numb;
		}
		else
		{
			puts("Error");
			return (1);
		}
}
		printf("%d\n", add);
		}
else
{
	printf("Error\n");
		return(1);
}
return(0);
}
