#include "lists.h"

/**
* insert_nodeint_at_index - insert data at a given index.
* @head: head of list.
* @idx: given point.
* @n: given data.
* Return: node.
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ctr = 0;
	listint_t *temp;
	listint_t *new;

	temp = *head;
	while (ctr < idx - 1 && idx != 0 && temp != NULL)
	{
		temp = temp->next;
		ctr++;
	}
	if (temp == NULL && idx != 0)
		return (NULL);
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
