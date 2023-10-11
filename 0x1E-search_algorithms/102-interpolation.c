#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array
 * using Interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	int lo = 0;
	int hi = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
				(value - array[lo]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
