#include "main.h"

/**
 * pal_finder - checks the sequence for palindrome
 * @s: string
 * @len: string length
 * Return: 1 if palindrome, else 0
 */

int pal_finder(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	if (len <= 1)
		return (1);
	else
		return (pal_finder(s + 1, len - 2));
}

/**
 * _strlen_recursion - returns the length of string
 * @s: string parameter
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: parameter string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (pal_finder(s, len));
}
