#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head of the linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t numElements = 0;

	while (h)
	{
		h = h->next;
		numElements++;
	}
	return (numElements);
}
