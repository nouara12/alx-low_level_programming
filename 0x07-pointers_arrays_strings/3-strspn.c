#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: area of bytes
 * Return: (n)the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if
				(accept[b] == '\0')
				return (a);
		}
	}
	return (a);
}
