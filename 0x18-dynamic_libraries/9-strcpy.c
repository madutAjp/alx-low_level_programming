#include "main.h"

/**
 * _strcpy - Copy a string from source to destination
 * @dest: The destination buffer where the string is copied
 * @src: The source string to be copied
 * Return: A pointer to the destination buffer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
