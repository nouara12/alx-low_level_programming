#include "main.h"
#include <stdio.h>
int atoi(char *s);
/**
 * main - adds positive numbers.
 * @argc: int
 * @argv: array
 * Return: 1(error) if one of the number contains symbols that are not digits
 */
int main(int argc, char **argv)
{
	int sum = 0;
	char *x;

	while (--argc)
	{
	for (x = argv[argc]; *x; x++)
		if (*x < '0' || *x > '9')
			return (printf("Error\n"), 1);
	sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
