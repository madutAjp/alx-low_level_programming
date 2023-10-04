#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenate all program arguments with newlines.
 * @ac: The number of arguments
 * @av: An array of argument strings
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int k, m, v;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < ac; k++)
	{
		for (m = 0; av[k][m]; m++)
	{
			len++;
	}
	}
	len += ac;
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	v = 0;
	for (k = 0; k < ac; k++)
	{
		for (m = 0; av[k][m]; m++)
		{
			ptr[v] = av[k][m];
		v++;
	}
	ptr[v] = '\n';
	v++;
	}
	ptr[v] = '\0';
	return (ptr);
}
