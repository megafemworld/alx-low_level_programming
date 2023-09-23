#include "main.h"
/**
  * print_number - print an integer
  * @n: number to be printed.
  * Return: nothing
  */

void print_number(int n) {
    int div = 1;
    if (n < 0)
    {
	    n = -n;
	    _putchar('-');
    }
    while (n / div >= 10)
    {
	    div = div * 10;
    }
    while (div > 0)
    {
	    _putchar((n / div) + '0');
	    n = n % div;
	    div = div / 10;
    }
}
