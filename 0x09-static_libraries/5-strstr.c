#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locate a substring within a string
 * @haystack:The string to search within
 * @needle:The substring to locate
 * Return:NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;
	char *sub_needle = needle;

	while (*haystack != '\0')
	{
		while (*sub_needle != '\0' && *haystack != '\0' && *haystack == *sub_needle)
		{
			haystack++;
			sub_needle++;
		}
		if (*sub_needle == '\0')
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (NULL);
}
