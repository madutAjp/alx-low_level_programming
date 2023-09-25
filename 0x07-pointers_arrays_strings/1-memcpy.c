#include "main.h"
#include <stdio.h>

/**
 * _memcpy - A function that copies memory area
 * @dest:Pointer to the destination memory area
 * @src:Pointer to the source memory area
 * @n:Number of bytes to copy
 * Return:A pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
