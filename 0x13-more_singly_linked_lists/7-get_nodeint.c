#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node of list
 * @index: int
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *t = head;

	while (t && n < index)
	{
		t = t->next;
		n++;
	}
	return (t ? t : NULL);
}
