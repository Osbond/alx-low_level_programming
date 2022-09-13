#include "main.h"
/**
 * print_times_table - Prints the times table from 0 to random numbers
 * @n: integer
 *
 * Return: null
 */
void print_times_table(int n)
{
	int i, j, multiply;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multiply = i * j;
				if (j == 0)
					_putchar('0');
				else if (multiply < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multiply % 10 + '0');
				}
				else if (multiply >= 10 && multiply < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multiply / 10) % 10 + '0')
					_putchar(multiply % 10 + '0');
				}
				else if (multiply > 99 && multiply < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(multiply / 10 + '0');
					_putchar((multiply / 10) % 10 + '0');
					_putchar(multiply % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
