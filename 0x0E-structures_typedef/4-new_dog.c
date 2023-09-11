#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return ((NULL));
	ndog->name = malloc(sizeof(name));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(owner));
	if (ndog->owner == NULL)
	{
		free(ndog);
		return (NULL);
	}

	i = 0;
	while (name[i] != '\0')
	{
		ndog->name[i] = name[i];
		i++;
	}
	ndog->name[i] = '\0';

	i = 0;
	while (owner[i] != '\0')
	{
		i++;
		ndog->owner[i] = owner[i];
	}
	ndog->owner[i] = '\0';

	ndog->age = age;
	return (ndog);
}
