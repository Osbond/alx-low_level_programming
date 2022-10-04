#include "main.h"

/**
 * _putchar - Function that returns a character
 * @c: Character to be returne
 *
 * Return: 1, on success
 * On error, -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
