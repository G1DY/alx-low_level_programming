#include "lists.h"
#include <stdio.h>
/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to the head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
