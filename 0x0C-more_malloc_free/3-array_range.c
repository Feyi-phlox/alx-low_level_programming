#include "main.h"

/**
 * *array_range -  function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to the newly created array or NULL if  min > max
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
