#include "main.h"

/**
 * _putchar - Function that returns a character
 * @c: Character to be printed
 *
 * Return: 1, On success
 * On error: -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
