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
	/*list_t *ptr2 = ptr;

	head = &ptr;*/

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
