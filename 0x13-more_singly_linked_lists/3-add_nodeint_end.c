#include "lists.h"

/**
* add_noteint_add - adds a new node at the end of a list.
* @head: head of node.
* @n: add data.
* Return: node.
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *false_node;

	new_node = (listint_t *) malloc(sizeof(listint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
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
