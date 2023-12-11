#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: The destination string, where the result is stored
 * @src: The source string to be concatenated to dest
 * Return: A pointer to the resulting concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	int m = 0;
	int i = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[i] != '\0')
	{
		dest[m] = src[i];
		m++;
		i++;
	}
	dest[m] = '\0';
	return (dest);
}
