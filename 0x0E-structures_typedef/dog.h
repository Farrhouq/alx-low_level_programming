#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - like a normal dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: who owns the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


/**
 * dog_t - shortcut for struct dog
*/
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
