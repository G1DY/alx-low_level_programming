#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: fuction pointer, compares values
 *
 * Return: index of the first element, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	
	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}


