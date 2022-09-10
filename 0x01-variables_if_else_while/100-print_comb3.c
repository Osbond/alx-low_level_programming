#include <stdio.h>
/**
 * main - print combination of two digit without repeating the same digit
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, j;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if ((i == '8') && (j == '9'))
			{
				putchar(' ');
				break;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	return (0);
}
