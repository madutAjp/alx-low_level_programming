#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest:A pointer to the destination string.
 * @src:A pointer to the source string to append to dest.
 * Return:A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int v;

	while (dest[m] != '\0')
	{
		m++;
	}

	while (src[v] != '0')
	{
		dest[m] = src[v];
		m++;
		v++;
	}
	dest[m] = '\0';

	return (dest);
}
