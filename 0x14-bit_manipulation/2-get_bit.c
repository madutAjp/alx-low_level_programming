#include <stdio.h>
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index
 * @n:The number to extract the bit from
 * @index:The index of the bit to retrieve (starting from 0)
 * Return:value of bit at specified index (0 or 1) or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int madut;

	madut = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n & madut) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
