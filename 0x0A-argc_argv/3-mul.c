#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _atoi(char *s);
/**
 * main - multiplies two numbers.
 * @argc: int
 * @argv: array
 * Return: 1 (erreur) If the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
