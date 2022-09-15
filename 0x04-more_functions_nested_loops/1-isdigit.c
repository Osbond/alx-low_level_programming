#include "main.h"

/**
 * _isdigit - function to identify digit
 * @c: Integer
 *
 * Return: 1(success), 0(failure)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
