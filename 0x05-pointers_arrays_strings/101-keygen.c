#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
 * It compares the generated password with the expected password and prints
 * the appropriate message.
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char password[15];
	int length = 14;
	char expectedPassword[] = "Tada! Congrats";

	generatePassword(password, length);
	printf("Generated Password: %s\n", password);
	printf("Expected Password: %s\n", expectedPassword);
	if (strcmp(password, expectedPassword) == 0)
	{
	printf("Passwords match! Congrats\n");
	}
	else
	{
	printf("Wrong password\n");
	}
	return (0);
}

