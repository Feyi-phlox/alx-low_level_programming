#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @strlen: string length
 * @s: string
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count = count + _strlen_recursion(s + 1);
	}
	return (count);
}
