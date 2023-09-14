#include <stdio.h>

/**
 * main - program finds and print sum of even valued term
 *
 * Return:0 when successful
 */
int main(void)
{
	int g = 4000000;
	int a = 1, b = 0;
	int next;
	int sum = 2;

	while (a <= g)
	{
	if (a % 2 == 0)
	{
	sum = sum + a;
	}
	next = a + b;
	a = b;
	b = next;
	}
	printf("%d\n", sum);
	return (0);

}
