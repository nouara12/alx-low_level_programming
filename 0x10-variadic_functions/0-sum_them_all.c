#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * @...: integers to sum
 * Return: 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int sum = 0;
	va_list ar;

	va_start(ar, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ar, int);

	va_end(ar);
	return (sum);
}
