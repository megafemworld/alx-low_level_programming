#include "main.h"
/**
  * main - print all argumnent received
  * @argc: argument counter
  * @argv: argument vector/array
  * Return: 0 always
  */

int main(int argc, char *argv[])
{
	int i;
	int j = 0;

	for (i = 0; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
	}
	return (0);
}
