#include <stdio.h>
#include "main.h"

/**
 * main - program prints numbers from 1 to 100
 * prints Fizz when multiples of 3 instead of the number
 * print Buzz when multiples of 5 instead of the number
 * print FizzBuzz for the numbers who are multiples of both 3 and 5
 * Return:0 when successful
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
	if (m % 3 == 0 && m % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (m % 3 == 0)
	{
	printf("Fizz");
	}
	else if (m % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", m);
	}
	}
	printf("\n");
	return (0);
}
