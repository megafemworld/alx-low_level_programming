#include "main.h"
/**
 * swap_int - swap two numbers value 
 * by exchanging their number
 * @a: first integer value to be swap
 * @b: secod integer value to be swap
 * Return: 0 Always.
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
