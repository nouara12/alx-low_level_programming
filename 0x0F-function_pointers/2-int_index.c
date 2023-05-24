#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size
 * @cmp: pointer to the function to be used to compare values
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == 0 || size <= 0 || cmp == 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
