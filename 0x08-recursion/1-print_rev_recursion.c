#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: pointer
 *
 * Return: void
 */
int _strlen_recursion(char *s);

void _print_rev_recursion(char *s)
{
	int length = _strlen_recursion(s);

	if (!*s)
		return;
	else
	{
		--length;
		_putchar(s[length]);
		_print_rev_recursion(s);
	}
}

/**
 * _strlen_recursion - Function that prints the length of a string
 * @s: pointer
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 1;

	if (!*s)
		return 0;
	else
		return(length + _strlen_recursion(++s));
}
