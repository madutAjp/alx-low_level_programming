#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints a variable number of integers with a separator
 * @separator: the strings to be printed btwn numbers (NULL)
 * @n:the number of integers to print
 * @...:the variable list of integers to be printed
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list numbs;
	int current_num;

	va_start(numbs, n);
	for (m = 0; m < n; m++)
	{
		current_num = va_arg(numbs, int);
		printf("%d", current_num);
		if (m < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(numbs);
	printf("\n");
}
