#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9.
 * followed by a new line.
 * Do not print 2 and 4
 * Return: numbers from 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	continue;
		_putchar(x + 48);
	}
	_putchar('\n');
}
