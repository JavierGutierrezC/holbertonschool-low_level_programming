#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints dogs information from structure
 * @d: Structure with dog information
 *
 * Return: ;
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
		{
			d->name = "(nil)";
			printf("Name: %s\n", d->name);
		}
	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
		{
			d->owner = "(nil)";
			printf("Owner: %s\n", d->owner);
		}
}
