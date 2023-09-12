#include <stdio.h>
/**
 * main - Entry point
 * description: print alphabet
 * in lower case
 * Return: 0 (success)
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
