#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swaps the value of two integer
 * @a: integer
 * @b: integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
