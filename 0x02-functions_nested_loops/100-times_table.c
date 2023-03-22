#include "main.h"

/**
 * print_times_table - prints the n times table starting from 0
 * @n: the number of times table to print
 *
 * Return: always 0
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n > 15 && n < 0)
	return;
	for (a = 0; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
			c = a * b;
			if (b == 0)
				_putchar(c + '0');
			else if (c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 100 + '0');
				_putchar((c / 10) % 10 + '0');
				_putchar(c % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
