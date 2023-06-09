#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: pointer to the address of the first node
 * @index: index of node starting at 0
 * Return: nth node or NULL if unsucessful
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	if (node != NULL)
	{
		return (node);
	}
	else
	{
		return (NULL);
	}
}
