#include "main.h"
/**
 * int _strlen - returns the length of a string.
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; s++)
	++x;

	return (x);
}
