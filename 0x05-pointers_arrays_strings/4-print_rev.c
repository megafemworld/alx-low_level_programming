#include "main.h"

/**
  * print_rev - print a string
  * in reverse followed by a new line
  * @s: string to be printed in reverse
  * Return: Always 0
  */

void print_rev(char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + i) == '\0')
	{
		count++;
		i++;
	}
	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
}
