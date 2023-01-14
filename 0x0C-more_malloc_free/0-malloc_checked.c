#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a fuction that allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: address to malloc pointer else 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
