#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted
 * Return: the numbers in the string
 */

int _atoi(char *s)
{
	int n = 0;
	int j;
	int k = -1;
	int i = 0;


	while (s[i] != 0)
		i++;

	for (j = 0; j < i; j++)
	{
		if (s[j] == '-')
			k *= -1;
		if (s[j] > 47 && s[j] < 58)
		{
			if (n < 0)
				n = (n * 10) - (s[j] - 48);
			else
				n = (s[j] - 48) * -1;

			if (s[j + 1] < 48 || s[j + 1] > 57)
				break;
		}
	}
	if (k < 0)
		n *= -1;

	return (n);
}

