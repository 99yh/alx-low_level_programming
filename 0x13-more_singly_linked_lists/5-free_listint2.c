#include "lists.h"
/**
 * free_listint2 - frees all the nodes of a linked list
 *                 and  sets the first node   to   NULL
 * @head:  pointer to pointer to the  first node  of it
 */
void free_listint2(listint_t **head)
{
	listint_t *push = NULL;

	if (head)
		push = *head;

	while (push)
	{
		push = (*head)->next;
		free(*head);
		*head = push;
	}
}
