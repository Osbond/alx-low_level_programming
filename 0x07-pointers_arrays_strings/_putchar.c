#include <unistd.h>

/**
 * _putchar - Returns a character
 * @c: Character to be printed
 *
 * Return: On Success 1/
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
