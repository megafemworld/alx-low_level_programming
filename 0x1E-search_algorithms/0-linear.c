#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: number otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
