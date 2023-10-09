#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: The first index where the 'value' is located
 * or -1 if value is not present of array == NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checled array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %lu\n", value, i);
			return (i);
		}
	}
	return (-1);
}