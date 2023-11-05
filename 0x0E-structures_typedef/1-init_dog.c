#include "dog.h"

/**
 * init_dog - initialize a struct dog
 * @d: struct name
 * @name: dog's name
 * @age: dog's age
 * @owner: dogs owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
