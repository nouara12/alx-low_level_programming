#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - checks lenght of string
 * @m: string
 * Return: int
 */
int _strlen(char *m)
{
	int size = 0;

	for (; m[size] != '\0'; size++)
	;
	return (size);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: intiger
 * @av: character
 * Return:NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int x = 0;
	int y = 0;
	char *t;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; a < ac; a++, b++)
		b += _strlen(av[a]);

	t = malloc(sizeof(char) * b + 1);
	if (t == 0)
		return (NULL);

	for (a = 0; a < ac ; a++)
	{
		for (x = 0; av[a][x] != '\0'; x++, y++)
			t[y] = av[a][x];

		t[y] = '\n';
		y++;
	}
	t[y] = '\0';
	return (t);
}
