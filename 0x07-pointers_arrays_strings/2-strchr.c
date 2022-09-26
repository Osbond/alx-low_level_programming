#include "main.h"

/**
 * _strchr - Locates and returns pointer to first occurrence of c
 * @s: pointer pointing to the string to be checked
 * @c: Character to be checked against the string
 *
 * Return: pointer to first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
