#include "lists.h"

/*
* print_listint - prints all the elements of a listint_t list
* @h: head of the list.
* Return: size.
**/

size_t print_listint(const listint_t *h)
{
	size_t ctr = 0;

	while (h != NULL)
	{
		ctr++;
		printf("%d\n", h->n);
		h  = h->next;
	}
	return (ctr);
}