#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter to be swapped
 * @b: parameter to be swapped
 * Return: 0 always
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
