#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - filles memory
 * @l: pointer
 * @c: caracter
 * @i: unsigned intiger
 * Return: l
 */
char *_memset(char *l, char c, unsigned int i)
{
	char *t = l;

	while (i--)
		*l++ = c;

	return (t);
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned intiger
 * @size: unsigned intiger
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);
	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
