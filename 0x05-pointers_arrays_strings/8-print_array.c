#include "main.h"
/**
  * print_array - print the nth of an array
  * @a: the main array
  * @n: nth elements to print
  * Return: 0 Always.
  */
void print_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i <= j)
	{
		if ( i == j)
		{
			printf("%d", a[i]);
			i++;
		}
		else
		{
			printf("%d, ", a[i]);
			i++;
		}
	}
	printf("\n");
}
