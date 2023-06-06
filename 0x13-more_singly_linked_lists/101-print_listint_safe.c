#include "lists.h"
#include <stdio.h>

/**
 * loop_listint_l - Counts nodes
 * @head: first node of a list
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t loop_listint_l(const listint_t *head)
{
	const listint_t *t, *h;
	size_t d = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	t = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				d++;
				t = t->next;
				h = h->next;
			}
			t = t->next;
			while (t != h)
			{
				d++;
				t = t->next;
			}
			return (d);
		}
		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: first node of list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t d;
	size_t idx = 0;

	d = loop_listint_l(head);
	if (d == 0)
	{
		for (; head != NULL; d++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < d; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (d);
}
