#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of n indicating if its greater/lesser
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;

	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5\n", last_digit);
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("Last digit of %d is ", n);
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	else
	{
		printf("Last digit of %d is %d\n", n, last_digit);
	}

	return (0);
}