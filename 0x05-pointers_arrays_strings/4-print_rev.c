#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse followed by new line
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length, i;

	length = _strlen(s);
	i = length;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
