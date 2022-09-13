#include "main.h"
/**
 * print_alphabet - print the lowercase alphabet in a function
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
