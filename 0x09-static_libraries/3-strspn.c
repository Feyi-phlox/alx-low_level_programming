#include "main.h"

/**
 * _strspn - calculates the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * @s: string
 * @accept: parameter
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
		else if (accept[i + 1] == '\0')
			return (n);
		}
		s++;
	}
	return (n);
}
