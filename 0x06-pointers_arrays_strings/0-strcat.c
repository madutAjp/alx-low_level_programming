#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest:A pointer to the destination string.
 * @src:A pointer to the source string to append to dest.
 * Return:void
 */
char *_strcat(char *dest, char *src)
{
	int m = -1;
	int v;

	for (v = 0; dest[v] != '\0'; v++)
	;

	do {
		m++;
		dest[v] = src[m];
		v++;
	}
	while (src[m] != '0')
	;
	{
	return (dest);
	}
}

