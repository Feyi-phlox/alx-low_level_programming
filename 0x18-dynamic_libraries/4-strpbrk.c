#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 *  of any of the bytes in the string accept
 *  @s: string
 *  @accept: string
 *  Return: pointer to the byte in s that matches one of the bytes in accept,
 *  or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	s++;
	}
	return ('\0');
}
