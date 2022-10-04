#include "main.h"

/**
 * _strdup - Function that points to a copy
 * @str: Pointer to a string
 *
 * Return: Character on success
 * On error, NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 1, j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	copy = malloc(i * sizeof(char));
	if (copy == NULL)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		copy[j] = str[j];
		j++;
	}
	return (copy);
}
