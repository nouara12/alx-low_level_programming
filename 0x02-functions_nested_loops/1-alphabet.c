#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowrcase.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
