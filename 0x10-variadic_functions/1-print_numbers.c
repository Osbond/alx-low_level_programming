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

	if (separator == NULL)
		return;
	va_start(list, n);
	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(list, int));
			va_end(list);
			return;
		}
		printf("%d%s ", va_arg(list, int), separator);
		i++;
	}
}
