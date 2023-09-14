#include <stdio.h>

/**
 * main - program that prints first 98 fibonacci numbers
 *
 * Return:0 when sucessful
 */
int main(void)
{
	unsigned long int m = 1;
	unsigned long int b = 2;
	unsigned long int temp;
	unsigned long int g = 2;

	printf("%ld, %ld,", m, b);
	while (g < 98)
	{
	temp = b;
	b = m + b;
	m = temp;
	printf("%ld", b);
	g++;
	if (g != 97)
	{
	printf(",");
	}
	}
	printf("\n");
	return (0);
}
