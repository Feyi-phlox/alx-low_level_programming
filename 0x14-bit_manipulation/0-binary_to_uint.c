#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int index = 0;
	int len = strlen(b);


	for (; index < len; index++)
	{
		if (b[index] == '1')
		{
			convert += 1 << (len - index - 1);
		}
		else if (b[index] != '0')
		{
			return (0);
		}
	}
	return (convert);
}
