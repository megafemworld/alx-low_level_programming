#include "main.h"
/**
  * print_alphabet_x10 - print alphabet
  * Description: print lowercase only 10x
  * Return: Always 0.
  */
void print_alphabet_x10(void)
{
	char alphabet;
	int x;

	for (x = 0; x <= 9; x++)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	}
}
