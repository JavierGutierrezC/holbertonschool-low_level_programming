#include <stdio.h>
/**
 * main - prints largest prime factor  of anumber
 * Return: 0
 *
 */
int main(void)
{
	long x;
	long prime = 612852475143;

	for (x = 2; x < prime; x++)
	{
		if ((prime % x) == 0)
			prime = prime / x;
	}
	printf("%li\n", prime);
	return (0);
}
