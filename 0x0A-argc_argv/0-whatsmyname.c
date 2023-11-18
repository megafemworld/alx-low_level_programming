#include "main.h"
/**
  * main - print name of program
  * @argc: argument count
  * @argv: argumnent vector/array
  * Return: return the name
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
