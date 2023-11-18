#include "main.h"
/**
  * main - print the total number of argumnet given to the programme
  * @argc : argument counter
  * @argv : argument vector
  * Return : number counted
  */

int main(int argc, char *argv[])
{
	int i;

	if (argv[0][0] == '\0')
		return (0);
	i = argc - 1;
	_putchar(i + '0');
	_putchar('\n');
	return (0);
}
