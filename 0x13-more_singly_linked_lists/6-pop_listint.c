#include "lists.h"
/**
 * pop_listint - a function that deletes
 * the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: head of a linked list
 * @*head: pointer to the head
 *
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (!(head && *head))
		return (0);
	node_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return(node_data);
}

