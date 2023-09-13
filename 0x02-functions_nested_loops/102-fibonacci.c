#include <stdio.h>

/**
 * main - program prints first 50 fibonacci numbers
 *
 * Return:0 when successful
 */
int main(void)
{
	long int m = 0, b = 1, next;

	for (m = 0; m < 50; m++)
	{
	if (m < 49)
	{
	printf("%ld", m);
	printf(",");
	}
	else
	{
	printf("%ld\n", m);
	printf(",");
	{
	if (m != 49)
	printf(",");
	next = m + b;
	m = b;
	b = next;
	}
	}
	}
	return (0);
}
