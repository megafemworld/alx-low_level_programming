#include <stdio.h>
/**
 * main - Entry point
 * description: print number
 * base10 using putchar
 * Return: 0 on success
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
