#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of c
 * @c: character in string s
 * @s: pointer string
 * Return: pointer to the first occurrence of c or null if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
