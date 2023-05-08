#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: what fill n
 * @b: constant byte
 * @n: the first bytes of the memory area
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;

for
	(; i < n; i++)
		s[i] = b;

return (s);
}
