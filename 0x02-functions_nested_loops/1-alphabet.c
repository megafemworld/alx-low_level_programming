#include "main.h"
/**
  * print_alphabet - print alphabet
  * Description: print lowercase only
  * Return: Always 0.
  */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
