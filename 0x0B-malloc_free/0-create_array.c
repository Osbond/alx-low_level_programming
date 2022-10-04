#include "main.h"

/**
 * create_array - Function that creates an array of chars with malloc
 * @c: Character to initialize the array with
 *
 * Return: pointer to an address of character type
 * Onerror, return NULL
 */
char * create_array(unsigned int size, char c)
{
	if (size <= 0)
		return NULL;
	else
	{
		char *arr;
		unsigned int i = 0;

		arr = (char *) malloc(size * c);
		
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
		return (arr);
	}
}
