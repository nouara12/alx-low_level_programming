#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: intiger 1
 * @max: intiger 2
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int a;
	int b;

	if (min > max)
		return (NULL);
	a = max - min + 1;
	p = malloc(sizeof(int) * a);
	if (p == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		p[b] = min++;
	return (p);
}
