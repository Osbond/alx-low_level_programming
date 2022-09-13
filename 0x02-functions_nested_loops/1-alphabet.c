#include "main.h"
/**
 * main - print the lowercase alphabet in a function
 *
 * Return: nothing
 */

void print_alphabet_x10(void);

int main(void)
{

	return (0);
}

void print_alphabet_x10(void)
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
