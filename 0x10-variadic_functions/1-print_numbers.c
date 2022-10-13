#include "variadic_functions.h"

/**
 * print_numbers - prints only numbers from the argument
 * @separator: constant string
 * @n: constant unsigned int
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
