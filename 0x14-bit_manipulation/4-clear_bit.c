#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a specific index
 * @n: A pointer to the number to modify
 * @index: The index of the bit to set to 0 (starting from 0)
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int madut;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	madut = 1UL << index;
	madut = ~madut;
	*n = *n & madut;
	return (1);
}
