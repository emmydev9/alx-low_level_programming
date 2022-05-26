#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list.
* @h: head of the linked list
* Return: number of element
**/

size_t listint_len(const listint_t *h)
{
	size_t ctr = 0;

	while (h != NULL)
	{
		ctr++;
		h = h->next;
	}
	return (ctr);
}
