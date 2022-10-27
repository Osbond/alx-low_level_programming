#include "main.h"

/**
 * binary_to_uint - converts a binary to a decimal
 * @b: constant string
 *
 * Return: number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	
	if (b == NULL)
		return (0);
	while (b[count] != '\0')
		count++;
	while (count >= 0)
	{
		if (b[count] >= 97 && b[count] <= 122)
			return (0);	
		count += 2 ** count;
		count--;
	}
	return (count);
}

