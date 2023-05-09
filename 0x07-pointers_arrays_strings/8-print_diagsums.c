#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum
 * @a: int input
 * @size: int input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d,\n", sum1, sum2);
}
