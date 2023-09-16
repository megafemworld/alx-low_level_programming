#include "main.h"
/**
  * print_alphabet_x10 - print alphabet
  * Description: print lowercase only 10x
  * Return: Always 0.
  */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int x = 0;

	while (x <= 9)
	{
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	x++;
	}
}
