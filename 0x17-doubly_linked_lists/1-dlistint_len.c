#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: doubly linked list
 *
 * Return: length of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
