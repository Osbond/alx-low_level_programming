#include "main.h"
#include <stdio.h>
/**
 * prime_factor - function that prints the largest prime factor of n
 *
 * Return: void
 */
void prime_factor(void)
{
	int i, n, flag, j;

	i = 1;
	n = 12231952;
	flag = 0;
	while (i < n)
	{
		if (n % i == 0)
		{
			j = 2;
			while (j <= n/2)
			{
				if (n % j == 0)
				{
					flag = 1;
					break;
				}
				j++;
			}
			if (flag == 0)
				printf("%d", n);
		}
		i++;
	}
}
