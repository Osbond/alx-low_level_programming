#include "main.h"

/**
 * main - Function that accepts other functions
 * @argc: Integer
 * @argv: Pointer pointing to an array of strings
 *
 * Return: 0, On success
 * On error, any other integer
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	char *name = argv[0];
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
