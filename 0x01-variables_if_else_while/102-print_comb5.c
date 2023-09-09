#include <stdio.h>

/**
 * main - this the begining of software
 *
 * Return: 0 when finished
 */
int main(void)
{
	int i, j;


	for (int i = 0; i <= 99; i++) {
        for (int j = i; j <= 99; j++) {
            putchar('0' + (i / 10));
            putchar('0' + (i % 10));
            putchar(' ');
            putchar('0' + (j / 10));
            putchar('0' + (j % 10));

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');
	return (0);

}
