#include "lists.h"

/**
 * *find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the beginnig of listint_t
 *
 * Return: address of the node where the loop starts, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1, *ptr2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	ptr1 = head;
	ptr2 = head;

	while (ptr2 != NULL && ptr2->next != NULL)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;


		if (ptr1 == ptr2)
		{
			ptr1 = head;
			while (ptr1 != ptr2)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			return (ptr1);
		}
	}

	return (NULL);
}
