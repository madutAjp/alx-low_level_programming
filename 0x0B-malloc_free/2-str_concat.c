#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings
 * @s1: The first string
 * @s2: The second string
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t len1 = 0;
	size_t len2 = 0;
	size_t m, v;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < len1; m++)
	{
		ptr[m] = s1[m];
	}
	for (v = 0; v <= len2; v++)
	{
		ptr[m] = s2[v];
		m++;
	}
	return (ptr);
}
