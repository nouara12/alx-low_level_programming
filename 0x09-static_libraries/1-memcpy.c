#include "main.h"
/**
 * *_memcpy - copies memory area
 * @n: bytes to be copied
 * @src: memory area source
 * @dest: memory area destination
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int x;

	i = n;
	x = 0;

	for (; i > x; x++, n--)
	{
	dest[x] = src[x];
	}
	return (dest);
}
