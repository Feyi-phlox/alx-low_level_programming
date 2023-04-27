#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @str: string to be duplicated
 * @head: pointer to the pointer of the beggining of list_t list
 *
 * Return: the address of the new element, otherwise NULL if unsuccessful
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *temp = *head;

	new_tail = malloc(sizeof(list_t));

	if (!new_tail)
		return (NULL);

	new_tail->str = strdup(str);
	new_tail->len = strlen(str);
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_tail;

	return (new_tail);
}
