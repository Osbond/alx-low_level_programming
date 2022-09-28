#include "main.h"

/**
 * _puts_recursion - function that prints string with recursion and _putchar
 * @s: pointer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + i);
	}
}
