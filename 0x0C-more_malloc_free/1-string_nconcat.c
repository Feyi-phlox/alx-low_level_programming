#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes of string
 * Return: a pointer that points to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	unsigned int len1, len2;
	char *stringconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	if (n >= len2)
	n = len2;
	stringconcat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (stringconcat == NULL)
		return (NULL);
	for (a = 0; a < len1; a++)
		stringconcat[a] = s1[a];
	for (b = 0; b < n; b++)
		stringconcat[a + b] = s2[b];
	stringconcat[a + b] = '\0';
	return (stringconcat);
}
