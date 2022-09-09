#include <stdio.h>
/**
 * main - print alphabets in lowercase without q and e
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		if (lower == 'q')
		{
			lower++;
			continue;
		}
		else if (lower == 'e')
		{
			lower++;
			continue;
		}
		else
		{
			putchar(lower);
			lower++;
		}
	}
	putchar('\n');
	return (0);
}
