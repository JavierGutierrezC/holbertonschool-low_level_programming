#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char caracter;
	int integro;
	long int longint;
	long long int llongint;
	float decimal;

	printf("Size of a char: %ld byte(s)\n", sizeof(caracter));
	printf("Size of an int: %ld byte(s)\n", sizeof(integro));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(llongint));
	printf("Size of a float: %ld bytes(s)\n", sizeof(decimal));
	return (0);
}
