#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: int
 * @argv: array
 * Return: 0 success, 1 error
 */
int main(int argc, char *argv[])
{
	int n;
	int x;
	int r;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && n >= 0; x++)
	{
		while
			(n >= coins[x])
		{
			r++;
			n -= coins[x];
		}
	}

	printf("%d\n", r);
	return (0);
}
