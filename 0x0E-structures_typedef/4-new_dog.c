#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doge;

	doge = malloc(sizeof(struct dog));

	if (doge == NULL)
		return (NULL);

	memcpy(doge->name, name);
	memcpy(doge->owner, owner);
	doge->age = age;

	return (doge);
}
