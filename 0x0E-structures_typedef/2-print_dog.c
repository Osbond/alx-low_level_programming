#include "dog.h"

/**
 * print_dog - function that prints struct dog
 * @d: pointer to a structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", (*d).name);
	printf("Age: %.1f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
