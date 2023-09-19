#include "main.h'
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
		_putchar(*(str + i);
		i = i + 2;
	}
	_putchar('\n');
}
