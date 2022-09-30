
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
	int i = 0, j;

	while (i < argc)
	{
		char *name = argv[i];

		j = 0;

		while (name[j] != '\0')
		{
			_putchar(name[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
