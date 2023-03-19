#include <stdio.h>

/**
 * main - prints all possible different combination of three digits
 *
 * Return: 0 when unsuccessful
 */

int main(void)
{
	int i;
	int j;
	int b;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (b = 2 ; b < 10 ; b++)
			{
				if (i < j && j < b)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(b + '0');
					if (i + j + b != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
