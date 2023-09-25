#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack:Pointer to the string to search in
 * @needle:Pointer to the substring to find
 * Return:NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *h = haystack;
	char *n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}
	if (*n == '\0')
	{
		return (haystack);
	}
	haystack++;
	}
	return (NULL);
}
