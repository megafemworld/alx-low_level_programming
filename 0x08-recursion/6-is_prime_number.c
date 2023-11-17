#include "main.h"
/**
  * is_prime_number - check if a given number is prime.
  * @n: number to check
  * 
  * Return: 1 if prime number.
  */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	else if (n % 2 > 0)
		return (1);
	
}
