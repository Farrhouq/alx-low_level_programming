#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a dog variable
 * @d: the variable to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(dog_t));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
