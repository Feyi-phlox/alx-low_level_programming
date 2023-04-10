#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *@dest: destination array
 *@src: source array
 * Return: copied strings
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int strlen = 0;
	char *temp = src;

	while (*temp != '\0')
	{
		temp++;
		strlen++;
	}

	for (; i <= strlen ; i++)
		dest[i] = src[i];

	return (dest);
}
