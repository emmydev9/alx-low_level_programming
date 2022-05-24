#include "lists.h"

/**
* add_node_end - adds a new node at the end of the list.
* @head: head node.
* @str: new data.
* Return: node.
**/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *false_node;
	size_t new_len;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (new_len = 0; str[new_len]; new_len++)
		;
	new_node->str = strdup(str);
	new_node->len = new_len;
	new_node->next = NULL;
	false_node = *head;
	if (false_node == NULL)
		*head = new_node;
	else
	{
		while (false_node->next != NULL)
			false_node = false_node->next;
		false_node->next = new_node;
	}

	return (*head);
}
