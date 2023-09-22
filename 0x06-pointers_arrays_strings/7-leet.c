#include "main.h"
/**
  * leet - encode a string into 1337.
  * @s: string to encode
  * Return: return string
  */
char *leet(char *s)
{
	int i;
	int j;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = num[j];
				break;
			}
			
		}
	}
	return (s);
}
