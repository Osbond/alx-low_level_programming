#include "main.h"

/**
 * _memset - Function that fills a place in memory with keyword n times
 * @s: pointer pointing to a type char address
 * @b: charcter variable
 * @n: unsigned int
 *
 * Return: pointer;
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
