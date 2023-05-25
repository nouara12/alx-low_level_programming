#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string
 * @n: number of strings
 * @...: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *p;
	unsigned int x;
	va_list str;

	va_start(str, n);
	for (x = 0; x < n; x++)
	{
		p = va_arg(str, char *);
		if (p == 0)
			printf("(nil)");
		else
			printf("%s", p);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
