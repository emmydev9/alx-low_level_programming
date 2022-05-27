#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: head of linked list.
* Return: node.
**/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *prev;

	p = head;
	prev = head;

	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;
		if (head == p)
		{
			head = prev;
			prev = p;
			while (2)
			{
				p = prev;
				while (p->next != head && p->next != prev)
				{
					p = p->next;
				}
				if (p->next == head)
					break;
				head = head->next;
			}
			return (p->next);
		}
	}
	return (NULL);
}
