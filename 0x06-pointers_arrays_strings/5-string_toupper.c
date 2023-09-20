#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_touper - To coverts all lowercase letters
 * @str:The input string to be modified
 *
 * Return:A pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (islower(str[i]))
	{
	str[i] = toupper(str[i]);
	}
	i++;
	}
	return (str);
}
