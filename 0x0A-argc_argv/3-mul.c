#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiple two number
  * @argc: argumnent counter.
  * @argv: argument vector/array.
  *
  * Return: 0 on success, 1 on error
  */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
		return (0);
	}
}
