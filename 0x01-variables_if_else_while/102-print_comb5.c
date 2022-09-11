#include <stdio.h>
/**
 * main - print combination of two two digit without repeating the same digit
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if ((i == 98) && (j == 99))
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	} putchar('\n');
	return (0);
}
