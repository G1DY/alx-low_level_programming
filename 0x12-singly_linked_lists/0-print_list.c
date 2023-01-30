#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: parameter list
 *
 * Return: If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t newNode;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->Node, h->str);
		h = h->next;
		newNode++;
	}
	return (newNode);
}

