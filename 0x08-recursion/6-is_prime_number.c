#include "main.h"

/**
 *prime_finder - finds out sequene of prime numbers
 *@n: parameter to check
 *@i: iterator
 *Return: 1 if n is a prime number, otherwise, 0
 */

int prime_finder(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_finder(n, i + 1));
}


/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 *@n: prime number
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_finder(n, 2));
}

