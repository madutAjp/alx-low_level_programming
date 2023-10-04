#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of char and initializes it with specific char
 * @size:The size of the array to create
 * @c:The character used to initialize each element of array
 * Return:A pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	size_t m;
	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		arr[m] = c;
	}
	return (arr);

}
