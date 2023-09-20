#include "main.h"
/**
 * puts_half - print half of the string
 * print second half. if odd print last n
 * @str: string to be divided into two
 * Return: 0 Always.
 */
void puts_half(char *str)
{
	int i = 0;
	int length_of_the_string = 0;
	int n;

	while (str[i] != '\0')
	{
		length_of_the_string++;
		i++;
	}
	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string + 2) / 2;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
