#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: start of the linked list
 * @str: datatype
 *
 * Return: address of new element else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t first = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[first])
		first++;

	new->str = strdup(str);
	new->len = first;
	new->next = *head;
	*head = new;

	return (*head);
}
