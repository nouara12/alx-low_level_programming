#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned intiger
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, length1, length2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0';)
		length1++;
	for (length2 = 0; s2[length2] != '\0';)
		length2++;
	p = malloc(length1 + n + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
		p[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		p[a] = s2[b];
		a++;
	}
	p[a] = '\0';
	return (p);
}
