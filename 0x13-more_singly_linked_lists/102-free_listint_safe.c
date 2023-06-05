#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * @h: first node of list
 * Return: number of elements in the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int a;
	listint_t *t;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
