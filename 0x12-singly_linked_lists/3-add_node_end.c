#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: start of the linked list
 * @str: datatype
 *
 * Return: address of new element else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t last = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[last])
		last++;

	new->len = last;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}


