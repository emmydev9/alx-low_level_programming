#include "lists.h"

/**
* free_list - free list.
* @head: head node.
**/
void free_list(list_t *head)
{
	list_t *new_node;

	while ((new_node = head) != NULL)
	{
		head = head->next;
		free(new_node->str);
		free(new_node);
	}
}
