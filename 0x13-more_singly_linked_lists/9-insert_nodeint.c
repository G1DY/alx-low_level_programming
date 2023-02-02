#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: start of the linked list
 * @idx: index of the list where the new node
 *       should be added, index starts at 0
 * @n: integer value
 *
 * Returns: the address of the new node, or NULL if it failed
 *          if it is not possible to add the new node at index idx
 *          do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (node = 0; node < idx - 1 && temp != NULL; node++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
