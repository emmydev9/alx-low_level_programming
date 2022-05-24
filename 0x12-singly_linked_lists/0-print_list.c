#include "lists.h"

/**
* print_list - prints all the elements of a list_t list.
* @h: head of the list
* Return: size
**/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (s);
}
