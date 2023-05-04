#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index
 * @index: the index, starting from 0 of the bit you want to set
 * @n: pointer to the integer value to be modified
 *
 * Return: 1 if successful, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n |= 1UL << index;
	return (1);
}
