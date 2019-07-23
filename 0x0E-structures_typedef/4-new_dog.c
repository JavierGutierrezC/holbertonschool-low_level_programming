#include "dog.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mid;
	int x;
	int y;
	int z;
	int w;

	mid = malloc(sizeof(dog_t));

	if(mid == NULL)
	{
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; n++)
		;
	mid->name = malloc(sizeof(char) * (n + 1));
	if (mid->name == NULL)
	{
		free(mid);
		return (NULL);
	}
	mid->age = age;
	for (y = 0; owner[y] != '\0';y++)
