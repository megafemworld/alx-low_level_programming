#include "main.h"
/**
  * cap_string - capitalize all words of a string
  * @s: string to be capitalize
  * Return: capitalized string
  */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((i == 0) && ((s[0] < 97) || s[0] > 122))
		{
			s[0] = s[0];
		}
		if ((s[0] >= 97) && (s[0] <= 122))
		{
			s[0] = s[0] - 32;		
		}
		if (s[i] == 32 || s[i] == '\n' || s[i] == 9 || 
		s[i] =='\t' || s[i] == 59 || s[i] == 46 )
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
				
			}
			else
			{
				s[i + 1] = s[i +1];
			}
		}
		i++;
	}
	return (s);
}
