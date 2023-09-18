#include "main.h"

/**
  * print_rev - print a string
  * in reverse followed by a new line
  * @s: string to be printed in reverse
  * Return: Always 0
  */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (i == 0)
			_putchar(*(s + i)'\n');
		else
			_putchar(*(s + i));
		i--;
	}
}
