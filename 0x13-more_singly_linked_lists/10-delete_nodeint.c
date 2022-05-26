#include "lists.h"

/**
* delete_nodeint_at_index - delete node at given index
* @head: head of a list.
* @index: given point.
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ctr = 0;
	listint_t *temp;
	listint_t *new;

	if (head == NULL)
		return (-1);
	temp = *head;
	while (ctr < index - 1 && temp != NULL && index != 0)
	{
		temp = temp->next;
		ctr++;
	}
	if (temp == NULL || (temp->next == NULL && index != 0))
		return (-1);
	new = temp->next;
	if (index != 0)
	{
		temp->next = new->next;
		free(new);
	}
	else
	{
		free(temp);
		*head = new;
	}
	return (1);
}