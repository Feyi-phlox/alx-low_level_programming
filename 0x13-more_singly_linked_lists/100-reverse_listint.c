#include "lists.h"

/**
 * *reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the pointer of the address of head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *reverse = NULL;

	while (*head)
	{
		reverse = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = reverse;
	}
	*head = node;
	return (*head);
}
