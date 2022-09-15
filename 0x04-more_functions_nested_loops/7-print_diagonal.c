#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that prints line n times
 * @n: Integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');

				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
