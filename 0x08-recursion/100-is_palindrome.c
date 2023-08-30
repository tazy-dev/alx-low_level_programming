#include "main.h"

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: Thhe input String.
 *
 * Return: The length of the input string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return  (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - The actual computation that test if s is palindrome.
 * @s: The string to be tested.
 * @start: The index from beginningfor palindrome test
 * @end: The index from ending for palindrome test
 *
 * Return: returns 1 if n is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	if (start >= end)
		return (1);
	return (check_palindrome(s, start + 1, end - 1));
}

