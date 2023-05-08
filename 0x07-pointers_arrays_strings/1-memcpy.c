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

	i = 0;

	for (; n > 0; i++, n--)
	{
	src[i] = dest[i];
	}
	return (dest);
}
