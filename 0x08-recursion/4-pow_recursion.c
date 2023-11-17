#include "main.h"
/**
  * _pow_recursion - calculate the power of two numbers raise.
  * @x: number to raise
  * @y: number to power
  *
  * Return: return the number calculated
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
