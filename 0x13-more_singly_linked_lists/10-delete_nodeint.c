#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 *                           of a listint_t linked list
 * @index: index of the node to be deleted
 * @head: head of the list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new = *head;
	unsigned int node;

	if (new == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
	}
	temp = new->next;
	new->next = temp->next;
	free(temp);
	return (1);
}
