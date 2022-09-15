#include "main.h"
#include <stdio.h>

/**
 * print_line - function that prints line n times
 * @n: Integer
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
