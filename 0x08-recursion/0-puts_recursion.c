#include "main.h"

/**
  * _puts_recursion- print a string follw by new line
  * @s: string to be print
  *
  * Return: string printed
  */

void _puts_recusion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(s);
	_puts_recursion(s + 1);
}
