#include "lists.h"
#include <string.h>
/**
 * free_list - frees a list
 * @head: free head
 *
 * Return: Always success 0
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}

