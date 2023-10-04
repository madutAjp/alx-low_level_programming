#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string and allocate memory for copy
 * @str:The input string to be duplicated
 * Return:A pointer to duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	size_t m, k;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}
	strdout = (char *)malloc((m + 1) * sizeof(char));
	if (strdout == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= m; k++)
	{
		strdout[k] = str[k];
	}
	strdout[m] = '\0';
	return (strdout);
}
