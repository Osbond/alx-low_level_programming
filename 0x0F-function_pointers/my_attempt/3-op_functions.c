#include "function_pointers.h"

/**
 * op_add - adds two integer
 * @a: int
 * @b: int
 *
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integer
 * @a: int
 * @b: int
 *
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integer
 * @a: int
 * @b: int
 *
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integer
 * @a: int
 * @b: int
 *
 * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of two integer
 * @a: int
 * @b: int
 *
 * Return: integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
