#include "main.h"
/**
  * main - print number of arguments
  * @argc : argument counter
  * @argv : argument vector
  * Return : number counted
  */

int main(int argc, char *argv[] )
{
	if (argv[] < 0)
		return (0);
	int i = 0;

	i = argc - 1;
	_putchar(i +'0');
	_putchar('\n');
	return (0);
}
