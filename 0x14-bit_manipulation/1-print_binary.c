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

	for (; i >= 0; i--)
	{
		if (n & (1u << i))
		{
			no_zero = 1;
			_putchar('1');
		}
		else
		{
			if (no_zero)
			{
				_putchar('0');
			}
		}
	}
	if (!no_zero)
	{
		_putchar('0');
	}

	/*printf("\n");*/
}
