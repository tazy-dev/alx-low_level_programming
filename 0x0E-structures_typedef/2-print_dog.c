#include "main.h"

/**
 * print_dog - Prints a struct dog.
 * @d: pointer to the struct dog to be printed.
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == Null)
		d->name = "(nil)";
	if (d->owner == Null)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
