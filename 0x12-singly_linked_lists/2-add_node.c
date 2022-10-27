#include "lists.h"
/**
 * add_node - adds a new node to the beginning of the linked list
 * @head: pointer to a pointer
 * @str: pointer to string
 *
 * Return: pointer to the structure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	int count;

	while (str[count] != '\0')
	{
		count++;
	}
	ptr->str = strdup(str);
	ptr->len = count - 1;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
