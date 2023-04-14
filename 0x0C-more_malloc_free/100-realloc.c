#include "main.h"

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * @ptr: pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * Return: pointer o new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = ((char *)ptr)[i];

	free(ptr);
	return (p);
}
