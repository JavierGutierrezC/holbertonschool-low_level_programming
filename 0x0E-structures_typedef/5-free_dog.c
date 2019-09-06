#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - initialize a variable of type struct
 * @d: pointer of structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: 0
 */
void free_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
