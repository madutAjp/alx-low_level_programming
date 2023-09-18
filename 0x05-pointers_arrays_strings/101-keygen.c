#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generatePassword - Generate a random password
 * @password: Pointer to the password array
 * @length: Length of the password to generate
 *
 * This function generates a random password using the characters
 * specified in the charset array. The generated password is stored
 * in the password array.
 */
void generatePassword(char *password, int length)
{
	char charset[] = "abcdefghABCDH0123456!$#%_-+=";
	int charsetsize = sizeof(charset) - 1;
	int i;

	srand(time(NULL));
	for (i = 0; i < length; i++)
	{
	password[i] = charset[rand() % charsetsize];
	}

	password[length] = '\0';
}

/**
 * main - Entry point of the program
 *
 * This program generates a random valid password using a specified length.
 * The generated password is then printed to the console.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char password[10];
	int length = 9;

	generatePassword(password, length);
	printf("Generated Password: %s\n", password);
	return (0);
}

