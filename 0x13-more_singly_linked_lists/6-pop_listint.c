#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer to the address of the first node
 * Return: n or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!*head)
		return (0);

	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}
