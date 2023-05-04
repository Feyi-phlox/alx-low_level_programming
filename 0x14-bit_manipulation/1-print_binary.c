#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to convert to binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned int) * 8 - 1;

	for (; i >= 0; i--)
	{
		if (~n & (1u << i))
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
	}
	/*printf("\n");*/
}
