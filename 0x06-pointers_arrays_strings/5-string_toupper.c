#include "main.h"
/**
  * string_toupper - Change lower string to upper
  * @s: string to change lowercase to uppercase
  * Return: Always s.
  */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		else if (s[i] < 97 || s[i] > 122)
		{
			s[i] = s[i];
		}
		i++;
	}
	return (s);
}
