#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last dogit of any value
 * @n: This is a real number
 *
 * Return: Last value of digit
 */
int print_last_digit(int n);
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}
int print_last_digit(int n)
{
	int last = n % 10;
	if (n < 0)
		last *= -1;
	putchar(last + '0');

	return (last);
}
