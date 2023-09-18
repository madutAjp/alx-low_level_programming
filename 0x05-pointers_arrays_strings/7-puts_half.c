#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - A function that prints have of a string
 * @str:The string to print the second half of
 * Return:void
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	int m;

	if (length % 2 == 0)
	{
	start_index = length / 2;
	}
	else
	{
	start_index = (length - 1) / 2;
	}
	for (m = start_index; str[m] != '\0'; m++)
	{
	printf("%c", str[m]);
	}
	printf("\n");
}
