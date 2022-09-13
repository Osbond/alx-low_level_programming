#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @n: An integer
 * Return: 1(success), 0(failure)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n < 0)
		last_digit = last_digit * -1;
	putchar (last_digit + '0');
	return (last_digit);
}
