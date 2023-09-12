#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Intialize a varible of type dog.
 * @d:A pointer to the uninitialized variable
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner name.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog)):
	d->name = name;
	d->age = age;
	d->owner = owner;
}
