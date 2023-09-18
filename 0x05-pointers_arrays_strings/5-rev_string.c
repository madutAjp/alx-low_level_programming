#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - A function that reverses a string
 * @s:A sstring to be reversed
 * Return:void
 */
void rev_string(char *s)
{
	int length;
	int start = 0;
	int end;
	char temp;

	if (s == NULL)
	{
	printf("Invalid input!\n");
	return;
	}

	length = strlen(s);
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
