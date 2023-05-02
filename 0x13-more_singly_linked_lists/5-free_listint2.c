#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * function sets the head to NULL
 * @head: pointer to the address of the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node_temp;

	if (head == NULL)
		return;

	while (*head)
	{
		node_temp = (*head)->next;
		free(*head);
		*head = node_temp;
	}
	*head = NULL;
}
