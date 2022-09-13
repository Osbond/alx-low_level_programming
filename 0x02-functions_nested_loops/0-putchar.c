#include "main.h"
/**
 * main - print a code with _putchar function
 *
 * Return: 0
 */
int main(void)
{
	char word[20] = "_putchar";
	int i;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
