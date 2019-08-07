#include <stdio.h>
/**
 *main - print numbers
 *
 *Return: 0
 *
 */
int main(void)
{
	int x;
	int mod;

	for (x = 0; x < 1024; x++)
		if (x % 3 == 0 || x % 5 == 0)
			mod = mod + x;
	printf("%d\n", mod);
	return (0);
}
