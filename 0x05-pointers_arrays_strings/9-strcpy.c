#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *@dest: destination array
 *@src: source array
 * Return: copied strings
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; i++)
		*dest++ = *src++;

	return (dest - i);
}
