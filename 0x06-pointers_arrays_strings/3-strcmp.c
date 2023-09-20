#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1:A pointer to the first string to be compared
 * @s2:A pointer to the second string to be compared
 *
 * Return: Negative value if s1 is less than s2,
 * positive value if s1 is greater
 *         than s2, and 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	result = (*(unsigned char *)s1) - (*(unsigned char *)s2);
	return (result);
}
