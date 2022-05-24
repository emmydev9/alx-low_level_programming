#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list.
* @h: head of the linked_list;
* Return: size
**/

size_t list_len(const list_t *h)
{
	size_t ctr = 0;

	while (h != NULL)
	{
		ctr++;
		h = h->next;
	}
	return (ctr);
}
