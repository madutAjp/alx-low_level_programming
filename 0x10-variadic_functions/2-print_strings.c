#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - to prints strings followed by new line
 * @separator:the strings to be prints btwn the lines (NULL)
 * @n:the number of the strings passed to the function
 * @...:variable number of strings to be printed
 * Description:if one of the strings is NULL, (nil) is printed instead
 * if separator is NULL, it not printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	char *current_str;
	va_list str;

	va_start(str, n);
	for (b = 0; b < n; b++)
	{
		current_str = va_arg(str, char*);
		if (current_str != NULL)
		{
			printf("%s", current_str);
		}
		else
		{
			printf("(nil)");
		}
		if (b < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");

}
