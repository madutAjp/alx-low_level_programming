#include <stdio.h>

/**
 * main - program that prints first 98 fibonacci numbers
 *
 * Return:0 when sucessful
 */
int main(void)
{
	int m = 1;
	int b = 2;
	int temp;
	int g = 2;

	printf("%d, %d,", m, b);
	while (g < 98)
	{
	temp = b;
	b = m + b;
	m = temp;
	printf("%d", b);
	g++;
	}
	printf("\n");
	return (0);
}
