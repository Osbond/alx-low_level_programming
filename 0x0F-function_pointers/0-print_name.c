#include "function_pointers.h"

/**
 * print_name - function that prints a name with a pointer to a function
 * @name: parameter of type string
 * @f: pointer to a function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*func_ptr)(char *) = f;

	if (name == NULL || f == NULL)
		return;
	func_ptr(name);
}
