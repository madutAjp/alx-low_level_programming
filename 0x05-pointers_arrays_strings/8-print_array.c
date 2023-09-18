#include "main.h"
#include <stdio.h>

/**
 * print_array - A function prints n element of an array of integers
 * @a:The array of integers
 * @n:The number of elements to be printed
 * Return:void
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
	printf("%d", a[k]);
	if (k != n - 1)
	{
	printf(",");
	}
	}
	printf("\n");
}
