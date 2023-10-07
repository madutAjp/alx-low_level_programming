#include <stdio.h>
#include <stdlib.h>

int is_valid_number(char *str);
int multiply(char *num1, char *num2);

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int result;
	char *num1;
	char *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		printf("Error\n");
		return (98);
	}
	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
/**
 * multiply - Multiplies two integers represented as strings
 * @num1: The first number as a string
 * @num2: The second number as a string
 * Return: The result of the multiplication, or 0 on conversion error
 */
int multiply(char *num1, char *num2)
{
	int n1 = atoi(num1);
	int n2 = atoi(num2);
	int result;

	if (n1 == 0 || n2 == 0)
	{
		return (0);
	}
	result = n1 * n2;
	return (result);
}
/**
 * is_valid_number - Checks if a string contains only digits
 * @str: The string to be checked
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_valid_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}
