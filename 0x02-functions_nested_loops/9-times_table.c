#include "main.h"
/**
 * times_table - print the times table till 9
 *
 * Return: void;
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			int multiply;

			multiply = i * j;
			if (j == 0)
				_putchar('0' + multiply);
			else if (multiply < 10)
			{
				_putchar(' ');
				_putchar('0' + multiply);
			}
			else
			{
				_putchar('0' + multiply / 10);
				_putchar('0' + multiply % 10);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
