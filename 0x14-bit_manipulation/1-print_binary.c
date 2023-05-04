#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to convert to binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	int no_zero = 0;
	unsigned long int convert;

	for (i = sizeof(unsigned int) * 8 - 1; i >= 0; i--)
	{
		convert = n >> i;
		if (convert & 1)
		{
			_putchar('1');
			no_zero++;
		}
		else if (no_zero)
		{
			_putchar('0');
		}
	}
	if (!no_zero)
		_putchar('0');
}
