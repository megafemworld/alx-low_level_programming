#include <stdio.h>
/**
 * main - Entry point
 * description: print alphahabet
 * both capital & lower
 * Return: 0 on success
 */
int main(void)
{
	int m = 97;
	int n = 65;

	while(m <= 122)
	{
		putchar(m);
		m++;
	}
	while(n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
