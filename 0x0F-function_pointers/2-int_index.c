#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size:number of elements in the array array
 * @array: array of elements
 * @cmp:pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
