#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - convert a char to integer
 * @x: character to convert
 * Return: integer
 **/
int _atoi_digit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}

/**
 * _isNumber - Define if a string is a number
 * @argv: Pointer to string
 * Return: success (0)
 **/
int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}

/**
 *_calloc - allocate array of size * nmemb
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to array
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *madut;
	unsigned int g;

	madut = malloc(size * nmemb);

	if (madut == NULL)
		return (NULL);

	for (g = 0; g < (size * nmemb); g++)
		madut[g] = '0';

	return (madut);
}
/**
 * mul_array - multiply two arrays
 * @a1: first array
 * @len1: length of array a1
 * @a2:  char
 * @a3: array for result
 * @lena: length of array a3
 * Return: pointer to array
 **/
void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, v, p;

	p = lena;
	for (v = len1 - 1; v >= 0 ; v--)
	{
		mul += (a1[v] - '0') * (a2 - '0') + (a3[p] - '0');
		a3[p] = (mul % 10) + '0';
		mul /= 10;
		p--;
	}

		while (mul != 0)
		{
			mul += a3[p] - '0';
			a3[p] = (mul % 10) + '0';
			mul /= 10;
			p--;
		}

	return (a3);
}
/**
 * print_array - print all digits of array
 * @nb: number of elements to print
 * @a: array of elements
 **/
void print_array(char *a, int nb)
{
	int m = 0;

	while (a[m] == '0' && (m + 1) < nb)
	{
		m++;
	}
	for (; m < nb; m++)
	{
		_putchar(a[m]);
	}
	_putchar('\n');
}
/**
 *main - print the multiplication of 2 numbers
 *@argc: array length
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int k, j, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (k = 0; k < 6; k++)
		{
			_putchar(E[k]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}
	for (k = len2 - 1, j = 0; k >= 0; k--)
	{
	tabres = mul_array(argv[1], len1, argv[2][k], tabres, (lenres - 1 - j));
	k++;
	}
	print_array(tabres, lenres);
	free(tabres);
	exit(EXIT_SUCCESS);
	return (0);
}
