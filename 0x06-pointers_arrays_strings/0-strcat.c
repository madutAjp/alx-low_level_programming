#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest:input value
 * @src:input value
 *
 * Return:void
 */
char *_strcat(char *dest, char *src)
{
	int m, v;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	v = 0;
	while (src[v] != '\0')
	{
		dest[m] = src[v];
		m++;
		v++;
	}
	dest[m] = '\0';
	return (dest);
}
