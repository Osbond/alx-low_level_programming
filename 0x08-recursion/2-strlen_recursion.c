#include "main.h"

/**
 * _strlen_recursion - Function that prints the length of a string
 * @s: pointer
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 1;

	if (!*s)
		return 0;
	else
		return(length + _strlen_recursion(++s));
}
