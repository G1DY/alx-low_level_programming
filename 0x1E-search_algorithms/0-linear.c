#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: input of array
 * @size: size of the array
 * @value: value to search
 *
 * Return: -1 if array is Null and success else
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (size); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
