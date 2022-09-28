#include "main.h"

/**
 * _pow_recursion - Funtion that returns x raised to y
 * @x: integer
 * @y: integer
 *
 * Return: Integer, On success
 * On error, -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
