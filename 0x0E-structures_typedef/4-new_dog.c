#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - The new dog to be created
 * @name:Name of the new dog
 * @age:Age of the new dog
 * @owner:Owner of the new dog
 * Return:Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int m = 0, a = 0, d;
	dog_t *dog;

	while (name[m] != '\0')
		m++;
	while (owner[a] != '\0')
		a++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(m * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (d = 0; d <= m; d++)
		dog->name[d] = name[d];
	dog->age = age;
	dog->owner = malloc(a * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		return (NULL);
	}
	for (d = 0; d <= a; d++)
		dog->owner[d] = owner[d];
	return (dog);
}
