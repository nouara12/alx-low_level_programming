#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int x;

	while (s[c] != '\0')
		c++;
	for (x = 0; x < c ; x++)
	{ c--;
		rev = s[x];
		s[x] = s[c];
		s[c] = rev;
	}
}
