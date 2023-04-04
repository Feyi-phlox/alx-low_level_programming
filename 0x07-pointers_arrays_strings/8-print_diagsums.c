#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: matrix pointer
 * @size: matrix size
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (j = 0; j < size; j++)
	{
		sum1 = sum1 + a[j * (size + 1)];
		sum2 = sum2 + a[(j + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
