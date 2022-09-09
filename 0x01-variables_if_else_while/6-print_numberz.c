#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 *
 * Return: 0(Success)
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
