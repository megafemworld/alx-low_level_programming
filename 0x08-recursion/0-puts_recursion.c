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
		_putchar(\n);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
