#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: first node of list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *r = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = r;
		r = *head;
		*head = next;
	}
	*head = r;
	return (*head);
}
