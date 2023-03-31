#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *@a: an array of integers
 *@n: number of elements to be swaped
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int j;
	int i;

	for (i = 0 ; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}

