#include "main.h"
#include <stdio.h>
int atoi(char *s);
/**
 * main - adds positive numbers.
 * @argc: int
 * @argv: array
 * Result: 1(error) if one of the number contains symbols that are not digits
 */
int main(int argc, char **argv)
{
	int sum =0 ;
	int i;

	if (argc > 1)
		for (i = 1; i < argc; i++)
	{
	sum += atoi(argv[i]);
	printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
	return (0);
}
