#include "main.h"

/**
  * rev_string - reverse a string
  *
  * @s: string to be reversed
  * Return: Always 0
  */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *temp = *s;

	while (*(temp + i) != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		s[j] = temp[i];
		i--;
	}
}
