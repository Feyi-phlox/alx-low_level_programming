#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string that is reversed
 * Return: always 0
 */

void rev_string(char *s)
{

	int i = 0;
	int j;
	char a = s[0];

	while (s[i] != 0)
	{
		i++;
	}
	for (j = 0 ; j < i ; j++)
	{
		i--;
		a = s[j];
		s[j] = s[i];
		s[i] = a;
	}
}
