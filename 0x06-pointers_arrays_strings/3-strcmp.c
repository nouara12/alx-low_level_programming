#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			x = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}
		s1++;
		s2++;
	}
	return (x);
}
