#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string that is reversed
 * Return: always 0
 */

void rev_string(char *s)
{
	int i, j;
	char a;


	for (i = 0 ; s[i] != '\0' ; i++)
		;
	for (j = 0 ; j < 1 / 2; j++)
	{
		a = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = a;
	}
}
