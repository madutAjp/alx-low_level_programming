#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int v;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	v = 0;
	while (src[v] != '0')
	{
		dest[m] = src[v];
		m++;
		v++;
	}
	dest[m] = '\0';

	return (dest);
}
