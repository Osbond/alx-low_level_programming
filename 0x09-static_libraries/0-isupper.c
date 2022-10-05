#include "main.h"
/**
 * _isupper - function for checking upper case character
 * @c: Integer
 *
 * Return: 1(success), 0(failure)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
