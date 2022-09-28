#include "main.h"

/**
 * factorial - Fujnction that returns the facorial of a given number
 * @n: Integer
 *
 * Return: On success, factorial of a given number
 * On error, -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
