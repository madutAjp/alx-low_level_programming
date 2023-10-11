#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function as a parameter on each
element of an array
 * @size:Size of elements to be printed
 * @array:Array
 * @action:Pointer to the function you need to use
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;
	for (m = 0; m < size; m++)
		action(array[m]);
}
