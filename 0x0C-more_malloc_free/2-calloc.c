#include "main.h"

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of member of array
 * @size: size of array
 * Return: returns pointer to allocated memory or NULL if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
