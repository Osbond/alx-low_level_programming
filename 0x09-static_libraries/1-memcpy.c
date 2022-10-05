#include "main.h"

/**
 * _memcpy - Copies n number of str 2 to str 1
 * @dest: pointer pointing to the string to be changed
 * @src: pointer pointing to the string to be copied from
 * @n: unsigned integer
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
