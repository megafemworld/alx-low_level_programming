#include "main.h"
/**
  * reverse_array - reverse an integer array.
  * @a: array of integers
  * @n: the number of elements to swap
  *Return: nothing
  */
void reverse_array(int *a, int n)
{
	int counter = sizeof(a)/sizeof(a[0]);
	counter = counter - 1;
	int i = 0;

	while (i <  n)
	{
		tmp[i] = a[counter];
		i++;
		counter--;
	}
}
