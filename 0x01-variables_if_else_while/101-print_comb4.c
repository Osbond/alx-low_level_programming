#include <stdio.h>
/**
 * main - print all combinations of three digit without repeating any digit
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if ((i == '7')
					&& (k == '9'))
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
