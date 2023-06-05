#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list.
 * @head: the head of listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
