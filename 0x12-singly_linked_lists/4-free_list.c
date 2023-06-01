#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees a list_t list.
 * @head: the head of list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
