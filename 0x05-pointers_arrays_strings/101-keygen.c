#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  generates random valid passwords for the program 101-crackme.
 * Return: 0
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 7523)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(5462 - sum);
	return (0);
}
