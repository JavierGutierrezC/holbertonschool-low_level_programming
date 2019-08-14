#incude "holberton.h"
#include <stdio.h>
/**
 * main _ print first 50 fibonachi numbers
 * Return: Zero
 *
 */
int main(void)
{
	unsigned long compt, nom1, nom2, add;

	nom1 = 0;
	nom2 = 1;
	for (compt = 0; compt < 50; compt++)
	{
		add = nom1 + nom2;
		nom1 = nom2;
		nom2 = add;
		if (compt != 49)
		{
			printf("%lu, ", add);
		}
		else
		{
			printf("%lu\n", add);
		}
	}
	return (0);
}
