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
	int j;

	while (*(str + i) != '\0')
	{
		length_of_the_string++;
	}
	n = (length_of_the_string - 1) / 2;
	for (j = n; n < length_of_the_string; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');

}
