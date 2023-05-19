#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts - prints a string
 * @s: pointer
 * Return: nothing
 */

void _puts(char *s)
{
	int x = 0;

	while (s[x])
	{
		_putchar(s[x]);
		x++;
	}
}

/**
 * _atoi - transformes a string to an intiger
 * @t: string
 * Return: int
 */

int _atoi(const char *t)
{
	int a = 1;
	unsigned long int r = 0, nm, j;

	for (nm = 0; !(t[nm] >= 48 && t[nm] <= 57); nm++)
	{
		if (t[nm] == '-')
		{
			a *= -1;
		}
	}
	for (j = nm; t[j] >= 48 && t[j] <= 57; j++)
	{
		r *= 10;
		r += (t[j] - 48);
	}
	return (a * r);
}
/**
 * print_int - prints an integer
 * @f: intiger
 * Return: NULL
 */

void print_int(unsigned long int f)
{
	unsigned long int d = 1, w, r;

	for (w = 0; f / d > 9; w++, d *= 10)
	;

	for (; d >= 1; f %= d, d /= 10)
	{
		r = f / d;
		_putchar('0' + r);
	}
}

/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: array
 * Return: 0
 */

int main(int argc, char const **argv)
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
