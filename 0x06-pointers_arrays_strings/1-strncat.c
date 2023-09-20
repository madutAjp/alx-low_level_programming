#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes from src to use.
 *
 * This function appends the src string to the dest string, using at most n
 * bytes from src. It does not require src to be null-terminated if it
 * contains n or more bytes. A terminating null byte is added at the end.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;

		n--;
	}
	*dest_ptr = '\0';

	return (dest);

}
