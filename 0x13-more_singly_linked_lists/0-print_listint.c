#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head in the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numElements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numElements++;
	}
	return (numElements);
}

