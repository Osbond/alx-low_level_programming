#include "main.h"

/**
 * _putchar - prints a single character at a time
 * @c: charct3er to be printed
 * 
 * Return: 1, on success
 * on error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
