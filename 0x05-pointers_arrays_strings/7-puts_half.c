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
	int m;
	int start = length / 2;

	for (m = start; m < length; m++)
	{
	printf("%c", str[m]);
	}
	printf("\n");
}
