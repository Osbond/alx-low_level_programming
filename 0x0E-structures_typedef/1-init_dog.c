#include "dog.h"

/**
 * init_dog - Function that initialises the structure
 * @d: pointer to a structure
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	(*d).owner = owner;
	/*return (d);*/
}
