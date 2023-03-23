#include <stdio.h>
#include "main.h"
#include "math.h"

/**
 * main - prints the largest prime factor of the number 612852475143 and \n
 *
 * Return: always 0
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
		for (i = 3; (i = i + 2); i <= sqrt(n))
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;
	printf("%ld\n", max);
	return (0);
}
