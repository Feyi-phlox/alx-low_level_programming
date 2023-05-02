#include "lists.h"

/**
 * free_listint_safe -  function that frees a listint_t list
 * @h: pointer to a pointer
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *node;

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			count++;
			break;
		}
		else
		{
			node = (*h)->next;
			free(*h);
			count++;
			*h = node;
		}
	}
	*h = NULL;

	return (count);
}

