#include "function_pointers.h"

/**
 * array_iterator - Executes a given parameter on each array element
 * @array: array
 * @size: size
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*funct_ptr)(int) = action;
	unsigned int i = 0;

	while (i < size)
	{
		funct_ptr(array[i]);
		i++;
	}
}
