#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: what fill n
 * @b: constant byte
 * @n: the first bytes of the memory area s
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
