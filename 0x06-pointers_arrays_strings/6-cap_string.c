#include "main.h"
/**
  * cap_string - capitalize all words of a string
  * @s: string to be capitalize
  * Return: capitalized string
  */
char *cap_string(char *s)
{
	int i = 0;
	int target = 0;

	while (s[i] != '\0')
	{
		if ((i == 0) && ((s[0] < 97) || s[0] > 122))
		{
			s[0] = s[0];
		}
		if else (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[i] == 32 || s[i] = '\n')
		{
			s[i] = s[i + 1];
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
