#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string
 * @n: number of integers
 * @...: integers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list nb;

	va_start(nb, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nb, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nb);
}
