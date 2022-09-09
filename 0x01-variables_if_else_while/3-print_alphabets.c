#include <stdio.h>
/**
 * main - print the alphabet in lowercase and with putchar
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char alpha, upper;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	upper = 'A';
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
