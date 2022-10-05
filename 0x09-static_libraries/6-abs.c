#include "main.h"
/**
 * _abs - print the number in positivee form
 *
 * @n: An integer
 * Return: 1(success), 0(failure)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
