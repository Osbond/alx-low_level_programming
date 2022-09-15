#include "main.h"

/**
 * print_most_numbers - function that prints between 0-9 followed by new line
 *
 * Return: void
 *
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
