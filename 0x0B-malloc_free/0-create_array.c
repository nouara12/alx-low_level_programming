#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: caracter
 * Return: NULL if size = 0 or fails, a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);

	if (size == 0 || p == 0)
		return (0);

	while (size--)
		p[size] = c;

	return (p);
}
