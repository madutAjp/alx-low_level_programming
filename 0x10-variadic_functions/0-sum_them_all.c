#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the of its parameters
 * @n:the number of parameters
 * @...:the parameters to be summed
 * If 'n' is 0, its return 0
 * Return:the sum of the provided integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int h;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (h = 0; h < n; h++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);

}
