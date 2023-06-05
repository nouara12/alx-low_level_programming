#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: first node of list
 * @index: index of the list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *c = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (n < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		n++;
	}
	c = t->next;
	t->next = c->next;
	free(c);
	return (1);
}
