#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * wrdcnt - counts number of words
 * @l: string
 * Return: number of words
 */
int wrdcnt(char *l)
{
	int a, x = 0;

	for (a = 0; l[a]; a++)
	{
		if (l[a] == ' ')
		{
			if (l[a + 1] != ' ' && l[a + 1] != '\0')
				x++;
		}
		else if (a == 0)
			x++;
	}
	x++;
	return (x);
}
/**
 * strtow - splits a string into words.
 * @str: string
 * Return: NULL if str == NULL or str == "" or fails
 */
char **strtow(char *str)
{
	int d, f, g, h, j = 0, k = 0;
	char **c;

	if (str == NULL || *str == '\0')
		return (NULL);
	j = wrdcnt(str);
	if (j == 1)
		return (NULL);
	c = (char **)malloc(j * sizeof(char *));
	if (c == NULL)
		return (NULL);
	c[j - 1] = NULL;
	d = 0;
	while (str[d])
	{
		if (str[d] != ' ' && (d == 0 || str[d - 1] == ' '))
		{
			for (f = 1; str[d + f] != ' ' && str[d + f]; f++)
				;
		f++;
		c[k] = (char *)malloc(f * sizeof(char));
		f--;
		if (c[k] == NULL)
		{
			for (g = 0; g < k; g++)
				free(c[g]);
			free(c[j - 1]);
			free(c);
			return (NULL);
		}
		for (h = 0; h < f; h++)
			c[k][h] = str[d + h];
		c[k][h] = '\0';
		k++;
		d += f;
	}
	else
		d++;
	}
	return (c);
}
