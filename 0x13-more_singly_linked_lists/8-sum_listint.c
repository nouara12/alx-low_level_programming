#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: first node of the list
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}
	return (s);
}
