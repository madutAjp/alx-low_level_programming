#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Function takes three parameters
 * @dest:A pointer to the destination buffer where the string will be copied
 * @src:A pointer to the source string to be copied
 * @n:The maximum number of characters to be copy
 * Return:dest_start
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';

		n--;
	}
	return (dest_start);
}
