#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - A function that frees dog
 * @d:Dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
