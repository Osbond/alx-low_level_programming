#include "main.h"
/**
 * print_sign - print the sign in front of a number
 *
 * Return: 1(success), 0(failure)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
