#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse followed by new line
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length, i;

	length = _strlen(s);
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

/**
 * _strlen - find the length of a string
 * @s: string
 *
 * Return: Integer;
 */
int _strlen(char *s)
{
	int i, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

