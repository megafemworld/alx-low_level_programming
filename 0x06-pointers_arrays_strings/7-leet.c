#include "main.h"
/**
  * leet - encode a string into 1337.
  * @s: string to encode
  * Return: return string
  */
char *leet(char *s)
{
	int i = 0;
	int check;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {4, 3, 0, 7, 1};

	while (s[i] != '\0')
	{
		for (check = 0; check < 5; check++)
		{
			if (s[i] == lower[check] || s[i] == upper[check])
			{
				s[i] = num[check];
				break;
			}
		}
	}
	return (s);
}
