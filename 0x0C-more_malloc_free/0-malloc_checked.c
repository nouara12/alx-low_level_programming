#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned intiger
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == 0)
		exit(98);

	return (i);
}
