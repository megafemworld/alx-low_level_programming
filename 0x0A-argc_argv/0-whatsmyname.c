#include "main.h"
/**
  * main - print name of program
  * @agrc: argument count
  * @argv: argumnent vector/array
  * Return: return the name
  */

int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i] != '\0')
		{
		_putchar(*argv[i]);
		}
		_putchar('\n');
	}
	return (0);
}
