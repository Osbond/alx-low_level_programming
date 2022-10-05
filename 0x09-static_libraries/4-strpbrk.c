#include "main.h"

/**
 * _strpbrk - Functions that print address of matches
 * @s: pointer pointing to the string to be checked against
 * @accept: pointer to string to be compared with the string s if present
 *
 * Return: Pointer that points to accept present in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
