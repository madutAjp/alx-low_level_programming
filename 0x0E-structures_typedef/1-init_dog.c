#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a new dog struct
 * @d: A pointer to the new dog struct to initialize
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The owner of the new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
