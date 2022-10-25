#include "lists.h"

/**
 * print_list - prints all the data in the structure
 * @h: pointer to a structure
 *
 * Return: unsigned int
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp)
	{
		count++;
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			continue;
		}
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}
