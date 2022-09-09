#include <stdio.h>
/**
 * main - print the alphabet in lowercase and with putchar
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char alpha;

	alpha = '0';
	while (alpha <= '9')
	{
		putchar(alpha);
		alpha++;
	}
	char upper;

	upper = 'a';
	while (upper <= 'f')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
