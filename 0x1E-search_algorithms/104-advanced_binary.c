#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array
 *	using advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, i;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		mid = (l + r) / 2;
		if (array[mid] == value)
		{
			if (mid == l || array[mid - 1] < value)
				return (mid);
			r = mid;
		}
		else if (array[mid] < value)
		{
			l = mid + 1;
		}
		else
		{
			r = mid;
		}
	}
	return (-1);
}
