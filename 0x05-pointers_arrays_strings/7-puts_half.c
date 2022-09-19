#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of a string followed by a new line.
 *@str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, i;

	length = _strlen(str);
	if (length % 2 == 0)
	{
		i = length / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		i = (length + 1) / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
/**
 * _strlen - Checks the length of a string
 * @s: String
 *
 * Return: Length of string
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
