#include <stdio.h>
/**
 * main - print the alphabet in lowercase and with putchar
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	} putchar('\n');

	return (0);
}
