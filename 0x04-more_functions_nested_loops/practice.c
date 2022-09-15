#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Prints '\' n times
 * @n: specifies how many times \ is printed
 *
 * Return: Null
 */
void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < n; j++)
			{
				if (i == j)
					putchar('\\');
				else
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
