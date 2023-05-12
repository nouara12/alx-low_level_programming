#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x])
		x++;
	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';
	return (dest);
}
