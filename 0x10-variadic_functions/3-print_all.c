#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of arguents
 * @...: arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *p, *t = "";
	va_list l;

	va_start(l, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", t, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", t, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", t, va_arg(l, double));
					break;
				case 's':
					p = va_arg(l, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", t, p);
					break;
				default:
					i++;
					continue;
			}
			t = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(l);
}
