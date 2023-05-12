#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: thr caracter to be checked.
 * Return: 1 if c is a letter, lowercase or uppercase,0 therwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
