#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: head of a list.
* Return: int.
**/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *step;
	int ndata;

	if (*head == NULL)
		return (0);
	temp = *head;
	ndata = temp->n;
	step = temp->next;
	free(temp);
	*head = step;
	return (ndata);
}
