#include "lists.h"

/**
 * free_listint -  function that frees a listint_t list
 * @head: pointer to the address of the first node of listint_t
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node_temp;

	while (head)
	{
		node_temp = head->next;
		free(head);
		head = node_temp;
	}
}
