#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
