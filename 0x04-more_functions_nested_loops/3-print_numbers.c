#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that prints between 0-9 followed by new line
 *
 * Return: void
 *
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
