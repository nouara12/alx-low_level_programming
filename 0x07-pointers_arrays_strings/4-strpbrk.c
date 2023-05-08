#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	char *p;

	while (s[a] != '\0')
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{ p = &s[a];
				return (p);
			}
			b++;
		}
	a++;
	return (0);
}
