#include "main.h"
/**
  * main - print number of arguments
  * @argc : argument counter
  * @argv : argument vector
  * Return : number counted
  */

int main(int argc, char *argv[] )
{
	int i, j = 0;

	if (argc < 1)
		return (0);
	for (i = 1; *argv[i] != '\0'; i++)
	{
		j = j + 1;
	}
	_putchar(j +'0');
	_putchar('\n');
	return (0);
}
