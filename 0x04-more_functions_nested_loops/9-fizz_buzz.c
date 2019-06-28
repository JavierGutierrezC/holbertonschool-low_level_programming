#include <stdio.h>

/**
 * main - will print all numbers and words
 * Return: if 0 zero then it is true
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 != 0))
			printf("Fizz ");
		if ((x % 3 != 0) && (x % 5 == 0) && (x != 100))
			printf("Buzz ");
		if ((x % 3 == 0) && (x % 5 == 0))
			printf("FizzBuzz ");
		if ((x % 3 != 0) && (x % 5 != 0))
			printf("%d ", x);
		if ((x % 3 != 0) && (x % 5 == 0) && (x == 100))
			printf("Buzz");
	}
	printf("\n");
	return (0);
}
