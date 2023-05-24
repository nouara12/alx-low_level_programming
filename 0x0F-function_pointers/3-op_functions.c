#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum
 * @a: number.
 * @b: number.
 *
 * Return:the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculats the difference
 * @a: number.
 * @b: number.
 *
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates multiplication
 * @a: number.
 * @b: number.
 *
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -calculates division
 * @a: number
 * @b: number.
 *
 * Return: The quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: number.
 * @b: number.
 *
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
