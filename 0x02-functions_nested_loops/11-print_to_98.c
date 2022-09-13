#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: This is the given integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		i = n;
		while (i <= 98)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
			i++;
		}

	}
	else if (n > 98)
	{
		i = n;
		while (i >= 98)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
			i--;
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
