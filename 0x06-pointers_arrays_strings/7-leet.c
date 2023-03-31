#include "main.h"

/**
 * *leet - encodes a string into 1337
 *@str: string encoded
 * Return: always 0
 */

char *leet(char *str)
{
	int i;
	int j;

	char aa[] = "aAeEoOtTlL";
	char bb[] = "4433007711";

	for (i = 0 ; str[i] != '\0' ; j++)
	{
		for (j = 0 ; aa[j] != '\0' ; j++)
		{
			if (str[i] == aa[j])
				str[i] = bb[j];
		}
	}
	return (str);
}
