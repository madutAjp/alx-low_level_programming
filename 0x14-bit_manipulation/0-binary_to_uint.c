#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - coverts a binary number to unsigned int
 * @b:pointer to string of 0 and 1 chars
 * Return:the converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int madut = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		madut = (madut << 1) | (*b - '0');
		b++;
	}
	return (madut);
}
