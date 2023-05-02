#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @n: the number of elements of the array to be printed
 * @a: string input
 * Numbers must be separated by comma, followed by a space
 * numbers displayed in the same order as they are stored in the array
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
