#include "main.h"
/**
  * main - Entry point
  * print_alphabet - print alphabet
  * lowercase
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
