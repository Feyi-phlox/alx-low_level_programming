#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: o when unsuccessful
 */

int main(void)
{
	int a;
	int b;

	for (a = 00 ; a <= 99 ; a++)
	{
		for (b = 01 ; b  <= 99 ; b++)
		{
			if (a < b && a == b)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
