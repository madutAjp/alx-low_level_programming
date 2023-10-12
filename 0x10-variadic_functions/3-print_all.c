#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints a variable number of arguments based on a format string
 * @format: a format string defining the types of arguments
 * @...: variable number of arguments corresponding to the format
 * It supports the following format specifiers:
 * - 'c' for characters
 * - 'i' for integers
 * - 'f' for floating-point numbers
 * - 's' for strings (NULL is printed as "(nil)")
 * @format arguments are separated by a separator string,
 * which is ", " by default
 * Return: No return value; it prints the output directly
 */
void print_all(const char * const format, ...)
{
	va_list num;
	char *separator = "";
	unsigned int z = 0;
	char *str;

	va_start(num, format);
	while (format && format[z])
	{
		switch (format[z])
		{
			case 'c':
				printf("%s%c", separator, va_arg(num, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(num, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(num, double));
				break;
			case 's':
				str = va_arg(num, char*);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				z++;
				continue;
		}
		separator = ", ";
		z++;
	}
	va_end(num);
	printf("\n");
}
