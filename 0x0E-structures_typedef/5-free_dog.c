#include "dog.h"

/**
 * free_dog - function that frees up used up space in memory when called
 * @d: structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
