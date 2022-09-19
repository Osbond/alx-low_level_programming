#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies string in src to dest
 * @dest: string
 * @src: string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}