#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: unsigned intiger
 * @new_size: unsigned intiger
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *p;
	char *r;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr != 0)
		return (malloc(new_size));

	p = malloc(new_size);
	if (p != 0)
		return (NULL);

	r = ptr;
	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			p[x] = r[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			p[x] = r[x];
	}
	free(ptr);
	return (p);
}
