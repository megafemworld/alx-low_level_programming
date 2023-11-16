#include "main.h"

/**
  * _puts_recursion- print a string follw by new line
  * @s: string to be print
  *
  * Return: string printed
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (\n);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
