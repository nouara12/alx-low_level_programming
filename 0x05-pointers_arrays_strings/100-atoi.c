#include "main.h"
/**
 * _atoi -  convert a string to an integer.
 * The number in the string can be preceded by an infinite number of characters
 * all the - and + signs before the number are taked account
 * @s: string input
 * If there are no numbers in the string, the function must return 0
 * Return: converted integer from string
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
