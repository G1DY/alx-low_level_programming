#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: integer
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodePtr;

	if (head == NULL)
	{
		return (NULL);
	}

	nodePtr = malloc(sizeof(listint_t));

	if (nodePtr == NULL)
	{
		return (NULL);
	}
	nodePtr->n = n;
	nodePtr->next = *head;
	*head = nodePtr;

	return (nodePtr);
}
