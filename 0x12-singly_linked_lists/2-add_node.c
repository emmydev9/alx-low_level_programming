#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: head of linked list
* @str: data to be added to the linked list
* Return: address of the new node.
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t new_len;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (new_len = 0; str[new_len]; new_len++)
		;
	new_node->str = strdup(str);
	new_node->len = new_len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
