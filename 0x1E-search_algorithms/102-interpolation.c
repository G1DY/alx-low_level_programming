#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: the array to be searched
 * @size: the size of the array
 * @value: value in the array
 *
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	double f;

	l = 0;
	h = size - 1;

	while (l <= h && value >= array[l] && value <= array[h])
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	if (l == h && array[l] == value)
		return (l);

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
