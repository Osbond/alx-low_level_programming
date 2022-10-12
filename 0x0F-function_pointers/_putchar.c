#include "functiono_pointers.h"

/**
 * _putchar - function that prints a single character
 * @c: Character to be printed
 *
 * Return: 1, on success
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
