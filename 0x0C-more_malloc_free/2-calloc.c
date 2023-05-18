#include "main.h"
#include <stdlib.h>
/**
 * _memset - filles memory
 * @s: pointer
 * @b: caracter
 * @n: unsigned intiger
 *
 * Return: l
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *t = s;

	while (n--)
		*s++ = b;

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
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);
	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
