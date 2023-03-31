#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 *@str: the string that is encoded
 * Return: always 0
 */

char *rot13(char *str)
{
	int i;
	int j;
	char *a = "ABCEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				;
			}
		}
	}
	return (str);
}

