#include "main.h"

/**
 * _strspn - Functions that print length of accept that matches
 * @s: pointer pointing to the string to be checked against
 * @accept: pointer to string to be compared with the string s if present
 *
 * Return: Length of acccept that that is the same with s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	unsigned int count = 0, equal_count = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
		equal_count++;
		i++;

		if (count == 0 || count != equal_count)
			break;
	}
	return (count);
}
