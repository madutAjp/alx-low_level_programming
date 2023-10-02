#include "main.h"

/**
 * _strncpy - Copy a maximum of 'n' characters from src to dest
 * @dest: The destination buffer where the string is copied
 * @src: The source string to be copied
 * @n: The maximum number of characters to copy
 * Return: A pointer to the resulting copied string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
