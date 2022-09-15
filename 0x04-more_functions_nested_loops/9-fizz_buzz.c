#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - function that prints fizz-3 buzz-5 fizzbuzz-15
 * Return: void
 i*/
void fizz_buzz(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
		{
			
			if ( i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
		i++;
	}
	_putchar('\n');
}
