#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of string
 * @str: character of string to be printed starting from first
 * Return:void
 */
void puts2(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
	if (m % 2 == 0)
	{
	printf("%c", str[m]);
	}
	}
	printf("\n");
}
