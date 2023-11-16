#include "main.h"
/**
  * _print_rev_recursion - print string in reverse recursively
  * @s: string to be printed in reverse
  *
  * Return: Printed string in reversed
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
