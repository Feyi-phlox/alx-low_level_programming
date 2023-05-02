#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer to the first node of the listint_t linked list
 * Return: the sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
