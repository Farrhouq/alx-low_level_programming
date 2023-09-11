#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: the dog
*/
void free_dog(dog_t *d)
{
	free(d);
}
