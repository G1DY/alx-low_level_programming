#include "search_algos.h"
/**
 * recursive_search - searches for a value in an array of integers
 * @array: input array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));
	half++;
	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: input array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = recursive_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);
	return (i);
}
