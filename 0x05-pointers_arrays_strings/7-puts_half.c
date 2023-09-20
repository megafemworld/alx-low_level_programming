#include "main.h"
/**
 * puts_half - print half of the string
 * print second half. if odd print last n
 * @str: string to be divided into two
 * Return: 0 Always.
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string;
	int n;
	int counter;

	while (str[i]) != '\0')
	{
		counter++;
		i++;
	}
	length_of_the_string = counter - 1;
	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
		while (n <= length_of_the_string)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		while (n <= length_of_the_string)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
