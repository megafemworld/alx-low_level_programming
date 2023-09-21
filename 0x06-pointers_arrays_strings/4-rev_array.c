#include "main.h"
/**
  * reverse_array - reverse an integer array.
  * @a: array of integers
  * @n: the number of elements to swap
  *Return: nothing
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1
	int tmp;

	while (i <  j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
		i++;

	}
	return a;
}
