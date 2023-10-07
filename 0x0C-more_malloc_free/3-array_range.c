#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array intergers containing values from min to max
 * @min:The minimum value for the array
 * @max:The maximum value for the array
 * Return:Pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int size;
	int *arr;
	int m;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		arr[m] = min + m;
	}
	return (arr);
}
