#include "main.h"
#include <stdlib.h>
/**
 * _memset - filles memory
 * @s: pointer
 * @b: caracter
 * @n: unsigned intiger
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
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

	if (p == NULL)
		return (NULL);
	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
