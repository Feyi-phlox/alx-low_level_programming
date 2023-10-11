#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt(size);
	int prv = 0;
	int i;

	if (array == NULL)
		return (-1);

	while (array[prv] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prv, array[prv]);
		prv += jump;

		if (prv >= (int)size)
		{
			return (-1);
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", prv - jump, prv);

	for (i = prv - jump; i <= prv; i++)
	{
		if (i >= 0 && i < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
