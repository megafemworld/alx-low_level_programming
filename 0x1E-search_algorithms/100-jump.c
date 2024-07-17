#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Search using the Jump search algorithm.
 * @array: Pointer to the first element.
 * @size: Number of elements in array.
 * @value: The value to search for.
 * Return: index otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t range, start, end, i;

	if (array == NULL)
		return (-1);
	range = sqrt(size);
	start = 0;
	end = range;
	while (end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		if (array[end] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", start, end);
			for (i = start; i <= end && i < size; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
		start = end;
		end += range;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
