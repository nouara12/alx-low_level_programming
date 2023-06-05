#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first element in the list
 * Return: the head node’s data (n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (n);
}
