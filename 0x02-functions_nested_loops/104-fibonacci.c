#include <stdio.h>

/**
 * main - prints first 98 Fibonacci number starting with 1 and 2
 *
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long int j, k, sum, j1, j2, k1, k2;

	j = 1;
	k = 2;
	printf("%lu, %lu, ", j, k);
	for (i = 1; i < 91; i++)
	{
	sum = j + k;
	printf("%lu, ", sum);
	j = k;
	k = sum;
	}
	j1 = j / 10000000000;
	j2 = j % 10000000000;
	k1 = k / 10000000000;
	k2 = k % 10000000000;
	for (i = 92; i < 98; i++)
	{
	k1 = j1 + k1;
	k2 = j2 + k2;
	j1 = k1 - j1;
	j2 = k2 - j2;
	printf("%lu", k1 + (k2 / 10000000000));
	printf("%lu", k2 % 10000000000);
	if (i != 97)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
