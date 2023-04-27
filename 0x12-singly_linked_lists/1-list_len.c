#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to the first node
 *
 * Return: number of elements in linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;

	while (h)
	{
		h = h->next;
		num_of_elements++;
	}
	return (num_of_elements);
}
