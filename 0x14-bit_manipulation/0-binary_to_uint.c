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

	if (b == NULL)
	{
		return (0);
	}

	for (; b[index] != '\0'; index++)
	{
		if (b[index] == '1')
		{
			convert = (convert << 1) | 1;
		}
		else if (b[index] == '0')
		{
			convert = (convert << 1) | 0;
		}
		else
		{
			return (0);
		}
	}
	return (convert);
}
