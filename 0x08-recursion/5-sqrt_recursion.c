#include "main.h"
int actual_sqrt_recursion(int n, int l);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * Return: -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finds the natural
 * @n: int
 * @l: int
 *Return: result
 */
int actual_sqrt_recursion(int n, int l)
{
	if (l * l > n)
		return (-1);
	if (l * l == n)
		return (l);
	return (actual_sqrt_recursion(n, l + 1));
}
