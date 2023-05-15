#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL if str = NULL,
 */
char *_strdup(char *str)
{
	int x = 0;
	int size = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	a = malloc(size * sizeof(*str) + 1);
	if (a == 0)
	{
		return (NULL);
	}
	else
	{
		for (; x < size; x++)
			a[x] = str[x];
	}
	return (a);
}
