#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: first node of list
 * @idx: index of the list
 * @n: int
 * Return: new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *node;
	listint_t *t = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (x = 0; t && x < idx; x++)
	{
		if (x == idx - 1)
		{
			node->next = t->next;
			t->next = node;
			return (node);
		}
		else
			t = t->next;
	}
	return (NULL);
}
