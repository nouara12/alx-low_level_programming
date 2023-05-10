#include "main.h"
int actual_prime(int n, int l);
/**
 * is_prime_number - checks a prime number
 * @n: input integer
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if a number is prime recursively
 * @n: input integer
 * @l: int
 *Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int actual_prime(int n, int l)
{
	if (l == 1)
		return (1);
	if (n % l == 0 && l > 0)
		return (0);
	return (actual_prime(n, l - 1));
}
