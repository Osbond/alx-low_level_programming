#include "function_pointers.h"

/**
 * int_index - funtion that searches an array for matches
 * @array: array to be searched
 * @size: length of array elements
 * @cmp: pointer to function
 *
 * Return: -1, on error
 * On success, index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*funct_ptr)(int) = cmp;
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if ((funct_ptr(array[i])) != 0)
			return (i);
		i++;
	}
	return (-1);
}
