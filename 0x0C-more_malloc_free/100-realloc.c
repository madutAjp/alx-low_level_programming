#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - A function that reallocates a memory block
 * @ptr:pointer to the memory previouly allocated
 * @old_size:The size in bytes of the allocated space of ptr
 * @new_size:The new size in beytes of the new memory block
 * Return:ptr to the newly allocated memory block or NULL on error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int m;

	if (ptr != NULL)
	{
		clone = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
	{
		return (0);
	}
	for (m = 0; m < (old_size || m < new_size); m++)
	{
		*(relloc + m) = clone[m];
	}
	free(ptr);
	return (relloc);
}
