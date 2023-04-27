#include "lists.h"

/**
 * *add_node - function that adds a new node
 * at the beginning of a list_t list
 * @head: pointer to the pointer to the first node of list_t list
 * @str: new node added
 * Return: address of the new element, or NULL if unsuccessful
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);

	if (!new_head->str)
	{
		free(new_head);
		return (NULL);
	}
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
