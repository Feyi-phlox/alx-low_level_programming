#include "main.h"

/**
 *sqrt_finder - helps to find the natural squareroot of n
 *@n: number whose squareroot is calculated
 *@i: iterator
 *Return: squareroot of n
 */

int sqrt_finder(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_finder(n, i + 1));
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: natural number whose square root is returned
 * Return: 0 always
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqrt_finder(n, 1));
}
