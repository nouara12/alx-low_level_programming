#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head of the list_t
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;
	list_t *t = *head;

	while (str[len])
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	if (*head == NULL)
	{
		(*head) = node;
		return (node);
	}
	while (t->next)
		t = t->next;
	t->next = node;
	return (node);
}
