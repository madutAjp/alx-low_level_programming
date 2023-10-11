#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @cmp:A pointer to the function to be used to campare values
 * @size:The number of elements in the array
 * @array:Array
 * Return:0 when successful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]))
			return (z);
	}
	return (-1);
}
