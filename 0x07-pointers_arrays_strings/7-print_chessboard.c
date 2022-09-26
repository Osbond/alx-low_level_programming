#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: dereferencing a
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(*(*(i + a) + j));
			j++;
		}
		_putchar('\n');
		i++;
	}}