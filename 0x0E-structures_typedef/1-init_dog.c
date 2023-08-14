#include "dog.h"
/**
 * init_dog - function that initializes variable
 * @d: dog
 * @name: dog name
 * @age: age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
