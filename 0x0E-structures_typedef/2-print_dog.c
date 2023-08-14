#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints dog
 * @d: pointercto dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		printf("nil");
	if (d->name == NULL)
		printf("Name: (nil)");
	else
	{
	printf("name is %s\n", d->name);
	printf("age is %f\n", d->age);
	printf("the owner is %s\n", d->owner);
	}
}
