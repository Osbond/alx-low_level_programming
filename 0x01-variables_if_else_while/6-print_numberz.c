#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 *
 * Return: 0(Success)
 */
void print_putchar(long value) 
{
		if (value != 0) 
		{
			print_putchar(value/10);
			putchar((value % 10) + '0');
		}
}
int main(void)
{
	long i = 012345678;
	print_putchar(i);
	return (0);

