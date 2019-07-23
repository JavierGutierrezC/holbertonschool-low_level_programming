#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct
 * @d: pointer of structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if d != NULL;
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
