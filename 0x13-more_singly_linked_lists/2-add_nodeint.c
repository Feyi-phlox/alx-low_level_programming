#include "lists.h"

/**
 * *add_nodeint - function that adds a new node
 * at the beginning of a listint_t list
 * @head: pointer to the pointer of the first node in listint_t
 * @n:integer constant
 * Return: address of the new element of NULL if unsucessful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
