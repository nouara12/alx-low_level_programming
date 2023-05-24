#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name:character
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
