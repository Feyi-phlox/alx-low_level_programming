#include "main.h"

/**
 * *create_array - function that creates an array of characters
 *@c: char
 *@size: size array
 * Return: returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	x = malloc(sizeof(char) * size);
	if (size == 0 || x == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		x[i] = c;
	return (x);
}
