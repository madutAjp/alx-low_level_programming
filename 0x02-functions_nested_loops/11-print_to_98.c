#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - To prints numbers from n to 98
 * @n:number to start printing from
 * Return:0 when when successful
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
	printf("%d", i);
	if (i != 98)
	{
	printf(",");
	}
	}
	}
	else
	{
	for (i = n; i >= 98; i--)
	{
	printf("%d", i);
	if (i != 98)
	{
	printf(",");
	}
	}
	}
	printf("\n");
}
