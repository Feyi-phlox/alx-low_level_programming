#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to convert to binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned int) * 8 - 1;
	int no_zero = 0;
	unsigned long int convert;
	
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; i >= 0; i--)
	{
		convert = 1 << i;
		if ((n & convert) == convert)
		{
			_putchar('1');
			no_zero = 1;
		}
		else if (no_zero)
		{
			_putchar('0');
		}
	}
	return;
}
