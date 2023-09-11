#ifndef DOG_H
#define DOG_H

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
#endif
