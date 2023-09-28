#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively
 * @s: The string to be checked
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - Wrapper function to check if a string is a palindrome
 * @s: The string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
