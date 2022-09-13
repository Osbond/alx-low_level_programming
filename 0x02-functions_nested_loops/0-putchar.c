#include "main.h"
/**
 * main - print a code with _putchar function
 *
 * Return: Always 0(Success)`
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	i = 0;
	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
