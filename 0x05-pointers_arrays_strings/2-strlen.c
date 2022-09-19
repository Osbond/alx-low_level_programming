#include "main.h"
#include <stdio.h>
/**
 * _strlen - Checks the length of a string
 * @s: String
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
