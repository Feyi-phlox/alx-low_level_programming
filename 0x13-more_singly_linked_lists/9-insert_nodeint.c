#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts a new node
 * @head: a pointer to a pointer  to the first node of the linked list
 * @idx: index of the list where the new node should be added.
 * @n: integer value to be store in the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *node = *head;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && node != NULL; i++)
		node = node->next;
	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}

