#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that prints between 0-9 followed by new line
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			if (j <= 9)
			{
				putchar(j % 10 + '0');
				j++;
			}
			else 
			{
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			j++;
			}
		}
		putchar('\n');
		i++;
	}

