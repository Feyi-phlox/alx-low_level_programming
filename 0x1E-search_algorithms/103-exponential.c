#include "search_algos.h"
/**
 * exponential_search - Searches for a value in a sorted array
 *		using Exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t range = 1, lo = 0, hi, mid, i;

	if (array == NULL || size == 0)
		return (-1);
	while (range < size && array[range] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", range, array[range]);
		range *= 2;
	}
	lo = range / 2;
	hi = range >= size ? size - 1 : range;
	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);

	while (lo <= hi)
	{
		mid = (lo + hi) / 2;
		printf("Searching in array: ");
		for (i = lo; i <= hi; i++)
		{
			printf("%d", array[i]);
			if (i < hi)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}
	return (-1);
}
