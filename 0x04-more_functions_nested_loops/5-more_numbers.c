#include "main.h"
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
				_putchar(j % 10 + '0');
				j++;
			}
			else 
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			j++;
			}
		}
		_putchar('\n');
		i++;
	}

