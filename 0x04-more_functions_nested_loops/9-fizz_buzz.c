#include <stdio.h>

/**
 * main - function wich will print the numbers asked in the statement
 * Reurn: 0 if true
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 != 0))
			printf("Fizz ");
		if ((a % 3 != 0) && (a % 5 == 0) && (a != 100))
			printf("Buzz ");
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz ");
		if ((a % 3 != 0) && (a % 5 != 0))
			printf("%d ", a);
		if ((a % 3 != 0) && (a % 5 == 0) && (a == 100))
			printf("Buzz");
	}
	printf("\n");
	return (0);
}
