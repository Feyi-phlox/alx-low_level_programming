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
	unsigned int a = 0, b = 0;
	unsigned int len1 = 0, len2 = 0;
	char *stringconcat;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		stringconcat = malloc(sizeof(char) * (len1 + n + 1));

	else
		stringconcat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!stringconcat)
		return (NULL);
	while (a < len1)
	{
		stringconcat[a] = s1[a];
		a++;
	}
	while (n < len2 && a < (len1 + n))
		stringconcat[a++] = s2[b++];

	while (n >= len2 && a < (len2 + len1))
		stringconcat[a++] = s2[b++];

	stringconcat[a + b] = '\0';

	return (stringconcat);
}
