#include <stdio.h>
#include "main.h"

/**
 * main - To finds and prints largest prime factor of number 612852475143
 * Return:0 always
 */
int main(void)
{
	unsigned long int m, v = 612852475143;

	for (m = 3; m < 782849; m = m + 2)
	{
	while ((v % m == 0) && v != m)
	v = v / m;
	}
	printf("%lu\n", v);
	return (0);
}
