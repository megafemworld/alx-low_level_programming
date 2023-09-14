#include <stdio.h>
/**
  * main - Entry point
  * description: print number
  * base16 number
  * Return: 0 on success
  */
int main(void)
{
	int m = 48;
	int n = 97;

	while (m <= 57)
	{
		putchar(m);
		m++;
	}
	while (n <= 102)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
