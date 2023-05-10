#include "main.h"
int _strlen_recursion(char *s);
int check_pal(char *s, int l, int lenght);
/**
 * is_palindrome - checks a palindrome
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the caracter recursively
 * @s: string
 * @l: int
 * @lenght: length of string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int l, int lenght)
{
	if (*(s + l) != *(s + lenght - 1))
		return (0);
	if (l >= lenght)
		return (1);
	return (check_pal(s, l + 1, lenght - 1));
}
