#include "main.h"

/**
 * create_array - Function that creates an array of chars with malloc
 * @c: Character to initialize the array with
 * @size: Character
 *
 * Return: pointer to an address of character type
 * Onerror, return NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(size * sizeof(char));
	if (size <= 0 || arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
