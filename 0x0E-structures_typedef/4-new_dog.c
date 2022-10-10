#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	(*my_dog).name = name;
	(*my_dog).age = age;
	(*my_dog).owner = owner;
	return (my_dog);
}
