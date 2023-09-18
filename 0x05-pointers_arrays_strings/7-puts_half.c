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
	int length;
	int start = 0;

	length = strlen(str);
	start = length % 2 == 0 ? length / 2 : (length - 1) / 2;
	printf("%s\n", str + start);
}
