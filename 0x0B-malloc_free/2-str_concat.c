#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int a;
	int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	c = malloc(sizeof(char) * (a + b + 1));

	if (c == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		c[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		c[a] = s2[b];
		a++, b++;
	}
	c[a] = '\0';
	return (c);
}
