#include <stdio.h>
/**
 * main - Entry point
 * description: print lower case
 * except e and q
 * Return: 0 on success
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
		if (lower == 'e' || lower == 'q')
		{
			lower++;
		}
	}
	putchar('\n');
	return (0);
}
