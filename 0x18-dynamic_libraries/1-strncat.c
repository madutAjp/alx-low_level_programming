#include "main.h"

/**
 * _strncat - Concatenate 'n' characters from src to dest
 * @dest: The destination string, where the result is stored
 * @src: The source string to be concatenated to dest
 * @n: The maximum number of characters to concatenate
 * Return: A pointer to the resulting concatenated string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}
