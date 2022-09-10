#include <stdio.h>
/**
 * main - print combination of two digit without repeating the same digit
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		for (int j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
