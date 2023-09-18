#include "main.h"

/**
  * _puts - print string 
  * follow by new line
  * @str: string to printed
  * Return: 0 Always
  */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++
	}
	_putchar('\n');
}
