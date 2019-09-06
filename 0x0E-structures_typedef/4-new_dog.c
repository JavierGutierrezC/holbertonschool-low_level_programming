#include "dog.h"
#include <stdio.h>
/**
 * new_dog - creates new dog info
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of owner
 * Return: NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *flofy;
	int x;
	int y;
	int z;
	int w;

	flofy = malloc(sizeof(dog_t));

	if (flofy == '\0')
	{
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++) /*contador name*/
		;
	flofy->name = malloc(sizeof(char) * (x + 1));
	if (flofy->name == NULL)
	{
		free(flofy);
		return (NULL);
	}
	flofy->age = age;
	for (y = 0; owner[y] != '\0'; y++) /*contador owner*/
		;
	flofy->owner = malloc(sizeof(char) * (y + 1));
	if (flofy->owner == NULL)
	{
		free(name);
		free(flofy); /*free del mas pequeño al mas grande*/
		return (NULL);
	}
	for (z = 0; z <= flofy; z++)
