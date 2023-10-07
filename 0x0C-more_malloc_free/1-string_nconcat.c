#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*string_nconcat - Concatenates two strings
*@s1: The first string
*@s2: The second string
*@n: The number of bytes of s2 to concatenate to s1
*Return:A pointer otherwise,NULL if function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, madut;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (madut = 0; s1[madut]; madut++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (madut = 0; s1[madut]; madut++)
		concat[len++] = s1[madut];

	for (madut = 0; s2[madut] && madut < n; madut++)
		concat[len++] = s2[madut];

	concat[len] = '\0';

	return (concat);
}
