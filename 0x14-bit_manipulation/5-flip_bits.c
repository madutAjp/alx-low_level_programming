#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Counts number of bits to flip to get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int madut;
	unsigned int irene = 0;

	madut = n ^ m;
	while (madut != 0)
	{
		irene += madut & 1;
		madut >>= 1;
	}
	return (irene);
}
