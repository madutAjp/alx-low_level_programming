#include <stdio.h>

/**
 * main - Starting here
 *
 * Return: 0 when done
 */
int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
		if (m != 'q' && m != 'e')
			putchar(m);
	putchar('\n');
	return (0);
}
