#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the first node of list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *dup;

	while (head)
	{
		dup = head->next;
		free(head->str);
		free(head);
		head = dup;
	}
}
