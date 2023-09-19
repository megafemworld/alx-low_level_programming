#include "main.h"
/**
 * puts2 - print every other
 * character of a string
 * @str: string to be printed
 * Return: 0 Always
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i > 0 && i % 2 > 0)
		{
			continue
		}
		else
			_putchar(*(str + i));
		i++;

	}
	_putchar('\n');
}
