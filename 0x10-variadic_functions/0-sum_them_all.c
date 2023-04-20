#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all parameters
 *@n: nmber of parameters
 *
 * Return: 0 on success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a = 0;
	unsigned int sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum = sum + va_arg(ap, int);

	va_end(ap);

	return (sum);
}

