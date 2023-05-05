#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first integer value
 * @m: second integer value
 * Return: number bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int flip = n ^ m;


	while (flip != 0)
	{
		i += flip & 1;
		flip >>= 1;
	}
	return (i);
}
