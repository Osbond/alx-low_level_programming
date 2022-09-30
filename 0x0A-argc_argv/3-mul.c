#include "main.h"

/**
 * main - Function that accepts other functions
 * @argc: Integer
 * @argv: Pointer pointing to an array of strings
 *
 * Return: 0, On success
 * On error, any other integer
 */

int putchar_digit_print(int a);

int main(int argc, char *argv[])
{
	int sum;

	if (argc < 3)
	{
		int i = 0;
		char err[] = "Error";

		while (i < 5)
		{
			_putchar(err[i]);
			i++;
		}
		_putchar('\n');
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);

	putchar_digit_print(sum);

	_putchar('\n');
	return (0);
}

/**
 * putchar_digit_print - recursively prints with putchar
 * @a: Long
 *
 * Return: 0 on success
 * On error: otheer no
 */
int putchar_digit_print(int a)
{
	if (a != 0)
	{
		putchar_digit_print(a / 10);
		_putchar((a % 10) + '0');
	}
	return (0);
}
