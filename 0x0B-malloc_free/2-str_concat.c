#include "main.h"

/**
 * *str_concat - function that concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: pointer or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	dest = malloc((i + j + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dest[i] = s2[j];
		i++, j++;
	}
	dest[i] = '\0';
	return (dest);
}
