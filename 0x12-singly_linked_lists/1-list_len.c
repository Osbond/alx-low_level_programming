#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to a structure
 *
 * Return: unsigned int
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
